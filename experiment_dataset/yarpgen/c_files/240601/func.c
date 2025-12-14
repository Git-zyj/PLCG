/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240601
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (_Bool)1))));
                    var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_6 [i_0]))) << (((((/* implicit */int) var_2)) + (70)))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (2778905467U)))))) < (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6651992207146421902LL)));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 1) 
                        {
                            {
                                arr_27 [i_3] [i_4] [i_5] [i_6] [i_4] [i_3] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) + (((arr_20 [i_4] [i_4 - 1] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_4 - 1] [i_5] [i_5 - 2] [i_5] [i_5])))))));
                                var_18 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_11))));
                var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_14))))))) == (((var_4) & (((/* implicit */unsigned long long int) 70368744177664LL))))));
    var_22 = ((/* implicit */_Bool) var_9);
}
