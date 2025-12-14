/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245615
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3682044437925791486ULL)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) (unsigned short)35402))))) ? (((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) var_4))))) ? (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) var_0)))))));
                arr_4 [i_0] [i_1 - 2] [i_1] &= ((/* implicit */long long int) arr_3 [i_0]);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_0))))))));
                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0 + 2]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0 - 1])), ((unsigned short)42187)))) : (((((/* implicit */int) arr_3 [i_0 - 1])) - (((/* implicit */int) arr_3 [i_0 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1 - 2] [(unsigned short)5] [i_3])) || (((/* implicit */_Bool) var_6))))));
                                arr_14 [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_12 [i_4 + 1])))));
                                var_19 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1 + 1])))), ((-(((/* implicit */int) var_11))))));
                                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_1] [(_Bool)1] [i_1] [i_3] [(_Bool)1]))))) ? (((arr_7 [i_0 - 1] [i_1 - 1] [(_Bool)1] [i_2] [i_3] [i_4]) ? (((/* implicit */unsigned long long int) var_4)) : (831682355586206078ULL))) : (((/* implicit */unsigned long long int) (~(arr_5 [i_0 - 2] [(unsigned short)3])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((17615061718123345552ULL), (((/* implicit */unsigned long long int) 1497324763))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) 700029597)) & (var_1))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((unsigned char) max((831682355586206064ULL), (((/* implicit */unsigned long long int) (short)-29059))))))));
}
