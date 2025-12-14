/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5093
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 += ((((unsigned long long int) arr_3 [i_0] [i_0])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) < (var_12))))));
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (min((arr_1 [i_0]), (var_0))) : (var_3))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) 13861491566450949858ULL)));
                                var_22 = ((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0]) < (arr_5 [i_2]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((arr_1 [i_0]) % (var_14));
                            }
                        } 
                    } 
                    var_23 = ((unsigned int) ((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) ^ (arr_12 [i_0] [i_1] [i_1] [i_2] [i_0] [i_2])));
                }
            } 
        } 
    }
    var_24 = var_16;
}
