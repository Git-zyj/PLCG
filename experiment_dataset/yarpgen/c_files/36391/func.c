/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36391
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
    var_10 = ((/* implicit */_Bool) ((unsigned long long int) var_0));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((24ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32736)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)106)), (370705319U)))) | (9007199253692416LL)));
                                arr_13 [i_1] [12LL] [i_1] [i_3] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_2 + 1]))))));
                                arr_14 [22U] [i_1] [i_1] [23ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_4] [i_0] [i_1] [i_1] [i_0] [i_0])), (var_0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 *= max((((/* implicit */unsigned char) (signed char)-3)), ((unsigned char)136));
}
