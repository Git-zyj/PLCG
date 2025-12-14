/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219560
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))))), (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) arr_12 [i_2 + 3] [i_0] [i_3] [i_3 - 1] [i_3 + 1])) ? (arr_12 [i_2 - 3] [i_0] [i_2 - 3] [i_3 + 3] [i_3 - 1]) : (arr_12 [i_2 + 3] [i_0] [i_0] [i_3 + 1] [i_3 + 1])))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3 + 3] [i_0] [i_2 - 3] [i_0]))))), (9355342664807804038ULL))))));
                                var_21 = ((/* implicit */short) (!(((arr_11 [i_3] [i_3 + 2] [(_Bool)1] [i_2 - 2] [i_4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((-(3337596420U))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_2 - 1]))) ? (((arr_6 [8U] [8U] [i_2 + 3]) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_2 - 3] [i_2])) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2])) : (((/* implicit */int) var_11))))));
                    var_23 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) var_14);
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_11))))), ((~(((/* implicit */int) var_14))))));
                                var_26 = (_Bool)1;
                                var_27 = ((/* implicit */unsigned int) (~((-(arr_8 [i_2 + 3] [i_1] [i_2 + 1] [i_5 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */long long int) var_7);
}
