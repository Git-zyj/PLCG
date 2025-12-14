/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212155
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7026554664255305185LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (7026554664255305169LL))))));
                    arr_9 [i_2] = ((/* implicit */int) ((short) -7026554664255305174LL));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_9);
                                var_19 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) == (((int) var_0))))), (var_14)));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((short) 7026554664255305174LL))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_0] [i_2]))))))) ? (((/* implicit */unsigned long long int) var_15)) : (max((min((var_3), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max(((unsigned char)25), (((/* implicit */unsigned char) var_2)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_0] [i_2])) + (var_12)))) ? (((((/* implicit */long long int) -200518670)) + (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))))))));
                    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_2] [0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_5)))) : (min((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])), (var_14)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) ((unsigned int) var_13))), (min((var_3), (((/* implicit */unsigned long long int) var_5))))))))));
    var_23 += ((/* implicit */unsigned long long int) var_10);
}
