/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247442
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
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 526703630U)) ? (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0])))) + (2147483647))) << (((((min((((/* implicit */unsigned long long int) (short)-2621)), (var_14))) - (((/* implicit */unsigned long long int) arr_1 [i_0])))) - (4618246398569660518ULL)))));
                arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_1) : (((/* implicit */int) arr_2 [i_1])))))), (arr_3 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_22 [i_4] [i_3] [i_4] [(short)3] [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) var_0);
                                var_17 |= ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_7)))));
                                arr_23 [i_2] [i_6] [i_4] [i_5] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) arr_9 [i_3] [i_5]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    arr_28 [i_2] [i_7] [i_7] &= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_3] [i_7]);
                    arr_29 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [(unsigned char)6]))));
                    arr_30 [i_2] [i_2] [i_2] [i_2] = arr_16 [i_3] [i_3] [i_3] [4] [i_3];
                    arr_31 [i_7] = ((/* implicit */unsigned int) ((arr_19 [i_2] [i_7] [i_7] [i_7] [i_2] [i_2]) != (arr_19 [15] [(short)9] [i_7] [i_7] [i_7] [i_7])));
                }
                arr_32 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) | (min(((~(arr_11 [(short)6] [9ULL] [i_3]))), (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((3768263654U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
}
