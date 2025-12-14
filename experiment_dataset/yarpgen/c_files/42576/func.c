/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42576
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13214)) ? (((/* implicit */int) (unsigned char)221)) : (-1800977396))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)12] [(unsigned short)12] [i_1 - 2] |= var_2;
                arr_5 [16ULL] [i_0] |= ((/* implicit */unsigned char) (-((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-96)), (arr_2 [i_0 - 1] [i_1] [i_1]))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) var_4);
                                arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] [3] = ((int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            }
                        } 
                    } 
                    arr_19 [i_0 - 1] [i_0] [(unsigned short)16] = ((/* implicit */_Bool) ((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14))))));
                    var_19 = ((/* implicit */unsigned long long int) var_7);
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_23 [i_5] [i_5] [18ULL] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) & (arr_22 [i_5]))) >> ((((~(((/* implicit */int) var_1)))) + (36)))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-77)))))))) + ((~(arr_13 [i_1 - 1] [i_0 + 1] [14] [i_1]))))))));
                    arr_24 [i_0 - 1] [i_1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0] [i_0 + 1]))));
                }
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */_Bool) var_0);
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) var_14)) : (var_9)))) ? (((/* implicit */int) arr_6 [(unsigned short)17] [i_6] [(unsigned short)24])) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
                arr_32 [(unsigned char)6] [i_0] [i_0] |= ((/* implicit */int) min((arr_22 [i_0]), (((/* implicit */unsigned long long int) var_14))));
            }
        } 
    } 
    var_23 &= ((/* implicit */short) var_2);
}
