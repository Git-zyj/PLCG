/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37603
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (arr_11 [i_0 - 1] [i_1] [(_Bool)1])));
                                var_11 = ((/* implicit */unsigned char) arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_4]);
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4])) ? (305582432358910207ULL) : (((/* implicit */unsigned long long int) 3145153057U))))))) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (short)-30398))));
                                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 3]))) : (arr_9 [7ULL] [i_0 + 2] [i_2] [i_0] [i_4]))))));
                                arr_13 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) arr_11 [(signed char)6] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_3);
}
