/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243879
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((((long long int) arr_0 [i_0 - 1])), (((/* implicit */long long int) arr_0 [i_0 + 2]))));
                                var_12 = ((/* implicit */signed char) min((4026258397619799213ULL), (((/* implicit */unsigned long long int) (unsigned short)8732))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (unsigned short)7694)), (arr_1 [i_0 - 2])))));
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 1])) && (((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1] [i_0 + 2] [i_0] [i_0 - 2] [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_15 = var_1;
}
