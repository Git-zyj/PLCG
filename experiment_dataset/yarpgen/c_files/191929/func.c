/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191929
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */short) arr_0 [i_1] [i_1]);
                var_22 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)240)) < (((/* implicit */int) (short)-31748)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-12048)), (-434644671)))))))) : (((((/* implicit */_Bool) var_3)) ? (-6601397251764630268LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)31747)) * (((/* implicit */int) (short)31731)))))))));
                    var_24 |= ((/* implicit */int) var_8);
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max(((-(arr_1 [i_1 - 1]))), (((/* implicit */long long int) arr_3 [(_Bool)1])))))));
                }
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */int) (short)12054)), (var_2))))));
                    var_27 ^= ((/* implicit */unsigned long long int) max(((+(((long long int) (short)-13130)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)128)))))));
                }
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (short)-23111))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) (+((+((+(-8922719575023117822LL)))))));
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_0))));
}
