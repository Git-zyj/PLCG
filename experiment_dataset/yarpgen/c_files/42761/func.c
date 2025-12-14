/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42761
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
    var_15 = 14748910766860570863ULL;
    var_16 = var_12;
    var_17 = var_9;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = max((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0] [7ULL] [7ULL]) : (arr_6 [i_2] [i_1] [i_0]))), (arr_7 [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((max((arr_1 [i_0] [i_2]), (1261297344187144236ULL))) != (2804975190787813513ULL)))));
                    var_19 = ((((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 + 1])) ? (0ULL) : (arr_7 [i_2 + 2] [i_2 - 1]))) << (((0ULL) >> (((18446744073709551615ULL) - (18446744073709551570ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))))), (max((arr_9 [i_3 + 1] [i_2 + 3]), (18446744073709551615ULL)))))));
                                var_21 = ((((unsigned long long int) 16778207784291381121ULL)) ^ (((unsigned long long int) 6661088759406494343ULL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (11510629134541726701ULL)));
                }
            } 
        } 
    } 
}
