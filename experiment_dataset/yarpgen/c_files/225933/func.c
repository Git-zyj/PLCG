/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225933
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
    var_13 = var_10;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_0 [i_1] [i_0]), (arr_0 [i_2] [i_0]))));
                    arr_6 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_2]))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [(_Bool)1] [i_1]);
                    var_15 = ((/* implicit */short) var_9);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_12 [i_3] [i_1] [i_1] [i_1] [i_3] [i_1]);
                                arr_13 [i_0] [i_1] [i_3] [13U] [i_4 + 2] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [(signed char)13] [i_4 + 1] [(signed char)13] [i_3 - 1])), (((((/* implicit */int) arr_8 [i_0] [i_3 - 3] [i_3 - 3] [i_3] [i_4] [i_3 + 2])) & (((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_2] [i_3] [i_4 - 1] [i_3 + 1]))))));
                                arr_14 [i_4] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((-273786909), (((/* implicit */int) (unsigned char)216))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 2] [i_4] [i_3] [i_2] [i_1] [(short)11])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
