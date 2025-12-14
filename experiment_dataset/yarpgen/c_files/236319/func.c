/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236319
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [5] [5])) != (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) <= (((int) arr_2 [i_1] [i_1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (+(arr_7 [i_3] [i_2] [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (arr_8 [i_3 + 1] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 1])));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (~((-((+(((/* implicit */int) arr_2 [i_3] [i_2] [i_1]))))))));
                            var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_8);
}
