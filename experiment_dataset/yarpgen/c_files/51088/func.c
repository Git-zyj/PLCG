/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51088
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_2] [(short)1] [i_4 - 3] [(short)13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1830051726U)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)-110))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0] [i_4 - 3] [i_2] [i_1 + 1] [(unsigned char)16] [(_Bool)1])))))))));
                                arr_12 [i_0] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-118))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */short) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                    arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) << (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (unsigned char)32);
}
