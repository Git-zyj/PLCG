/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204131
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
    var_11 = ((/* implicit */signed char) 3910176270140895377LL);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) -958681641);
                            var_12 = 958681630;
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) 2085037630);
                            var_13 -= ((/* implicit */unsigned long long int) arr_1 [i_3]);
                            arr_14 [i_0 - 2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) arr_18 [i_6] [i_5] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+(-958681630))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_0 [i_1 - 1])));
                                var_16 = ((/* implicit */short) (~(arr_0 [i_4])));
                            }
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_24 [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_5] [i_0 - 1] [i_4]))) ? (((/* implicit */unsigned long long int) ((7022689886049045076LL) ^ (((/* implicit */long long int) ((arr_18 [i_0] [i_0] [i_0] [i_0]) ^ (arr_22 [i_0] [i_1] [i_0] [i_1] [i_1]))))))) : (var_7)));
                            arr_25 [i_0] [i_1] = ((long long int) max((((var_0) << (((3910176270140895377LL) - (3910176270140895376LL))))), (((/* implicit */long long int) arr_24 [i_0] [i_0 + 1] [i_1 - 1] [i_4] [i_4] [i_0 + 1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1]) - (arr_10 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) (short)0)) : (max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_1 - 1] [i_1 + 1] [i_0]))))));
                var_19 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(arr_24 [i_1 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((arr_3 [i_1]), (-2085037639))) : (((/* implicit */int) ((signed char) var_7)))))));
            }
        } 
    } 
}
