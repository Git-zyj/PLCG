/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244605
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
    var_12 = ((/* implicit */signed char) (unsigned char)24);
    var_13 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((((unsigned int) 1568990853)) + (((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 3])));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((((((arr_6 [i_2] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))) ? ((~(((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((unsigned short) (unsigned char)97))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174)))))));
                            var_16 = ((min((((/* implicit */int) arr_9 [i_2] [i_1 + 4] [i_2])), (arr_5 [i_3 + 1] [i_1 + 1]))) ^ (((((/* implicit */int) arr_9 [i_2] [i_1 + 1] [i_2])) ^ (arr_5 [i_3 - 2] [i_1 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((17U), (((/* implicit */unsigned int) var_2)))))));
}
