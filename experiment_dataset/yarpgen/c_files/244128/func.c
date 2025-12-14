/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244128
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_1])) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1610612736))));
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [8U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((int) arr_0 [i_1 - 1] [i_0 + 1])) : (((/* implicit */int) ((signed char) (signed char)-5)))));
                                var_13 = ((/* implicit */long long int) 7834286084728580179ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((min((min((var_5), (var_9))), (((/* implicit */short) min((var_1), ((unsigned char)64)))))), (((/* implicit */short) var_0))));
}
