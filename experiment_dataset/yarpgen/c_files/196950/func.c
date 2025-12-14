/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196950
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_9 [i_0] [i_1] [i_1] [23] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) ((int) var_9))), ((+(var_13))))) : (((/* implicit */unsigned long long int) var_2))));
                    arr_18 [11] [i_4] [i_3] = ((/* implicit */int) (+(arr_2 [i_4])));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [8ULL] [i_3] [8ULL] [i_7] = ((/* implicit */unsigned short) (((_Bool)1) ? (2904591900U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_7] [i_6]))))));
                                arr_26 [i_4] [i_4] [(_Bool)1] [i_6] [i_7] = ((/* implicit */_Bool) arr_11 [i_3]);
                                arr_27 [i_3] [i_3] [i_3] [i_4] [i_6] [i_7] = ((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]) >= (min((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (2147483647))));
                            }
                        } 
                    } 
                    arr_28 [i_4] [(_Bool)1] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (2251662374731776LL)));
                    arr_29 [i_4] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 117440512)) / (4582672785040185304LL)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1])))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4582672785040185304LL)) ? (-2251662374731776LL) : (((/* implicit */long long int) arr_1 [(unsigned short)5]))))) ? (((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_4 + 1] [i_5 + 1])) : ((+(var_13))))));
                }
            } 
        } 
    } 
}
