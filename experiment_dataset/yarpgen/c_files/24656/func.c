/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24656
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((int) 7067580334930435414ULL));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((long long int) ((int) arr_2 [i_0] [i_1]))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_13 [1ULL] [i_1] [i_0] [7] = ((/* implicit */_Bool) ((signed char) ((_Bool) ((long long int) var_2))));
                                var_11 += ((/* implicit */long long int) ((signed char) ((long long int) arr_1 [i_0] [(signed char)14])));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [(signed char)8] &= ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) 7067580334930435414ULL)));
                    arr_18 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) ((int) ((long long int) 7067580334930435423ULL)));
                    var_12 ^= ((/* implicit */long long int) ((signed char) ((int) 11379163738779116202ULL)));
                    var_13 += ((/* implicit */_Bool) ((short) ((short) (signed char)106)));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) 11379163738779116202ULL)));
                }
            }
        } 
    } 
    var_15 -= ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */short) var_8);
}
