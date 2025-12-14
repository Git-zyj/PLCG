/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36709
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) var_15)))));
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4218827526U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)123))))) >= (var_13)))), (var_18)));
                        var_22 = ((/* implicit */int) var_2);
                        var_23 = ((/* implicit */unsigned long long int) ((short) ((-874845328) <= (((/* implicit */int) arr_9 [i_2])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] [i_0] [i_4] = (unsigned char)133;
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((short) var_14))))));
                        arr_16 [i_2] = ((/* implicit */_Bool) var_5);
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) (~(var_3)));
                        arr_21 [(short)3] [i_2] [(short)3] [(short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_2 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_2 + 2] [i_2 + 2] [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 3] [i_5] [i_5]))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((((/* implicit */int) arr_3 [(unsigned short)16])) != (((/* implicit */int) var_1)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_11 [10ULL]))));
                                arr_27 [i_2] [i_1] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_18 [(unsigned char)8] [i_1] [(short)4] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_2]))) * (var_16))) : (((/* implicit */unsigned long long int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
