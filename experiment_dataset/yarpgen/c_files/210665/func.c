/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210665
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
    var_20 &= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_17))));
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (short)-23701)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1900486710U)) ? (1900486710U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30207)))))))) : (arr_1 [i_0])));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)17109))));
                    var_24 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (short)30207)), (min((((/* implicit */unsigned long long int) (signed char)119)), (15ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_3 [i_2] [(_Bool)1] [(_Bool)1]))), (((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)218)))))))));
                }
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_3]))))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) var_11)))))))));
                    arr_12 [i_3] [i_1] [i_3] |= ((/* implicit */long long int) (signed char)0);
                    var_26 = ((/* implicit */unsigned short) (((-(arr_4 [i_0]))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]))))))))));
                }
                var_27 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
                arr_13 [(_Bool)1] [i_1] [(_Bool)1] |= (-(((/* implicit */int) var_17)));
            }
        } 
    } 
    var_28 -= ((/* implicit */unsigned short) min((((unsigned long long int) 9U)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) || (((/* implicit */_Bool) (unsigned char)202))))), (2394480573U))))));
    var_29 = ((/* implicit */unsigned short) var_1);
}
