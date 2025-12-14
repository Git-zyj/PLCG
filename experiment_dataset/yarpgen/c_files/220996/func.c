/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220996
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
    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)118)) != (2147483646))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) 6ULL))));
                                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [i_1] [i_1]));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_5 [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned char)6] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                var_16 = ((/* implicit */int) ((short) 2147483646));
                arr_15 [(short)4] |= ((/* implicit */short) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (min((((/* implicit */unsigned long long int) ((2147483646) / (((/* implicit */int) (short)4972))))), (18446744073709551614ULL)))));
}
