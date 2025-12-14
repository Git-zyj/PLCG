/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23670
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (((max((var_19), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2])))))));
                    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) 2570987590571725664LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2570987590571725671LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1)) || (((/* implicit */_Bool) 18446744073709551597ULL))))))), (((/* implicit */int) arr_0 [i_2] [i_0]))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_12);
                    arr_8 [i_0] [i_0] = ((((unsigned int) -2570987590571725666LL)) != (var_19));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_2)))))))), (var_1)));
    var_24 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775800LL)) && ((_Bool)1)))), ((+(min((((/* implicit */unsigned int) var_17)), (var_15)))))));
}
