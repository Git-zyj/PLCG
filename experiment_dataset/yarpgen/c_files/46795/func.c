/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46795
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_13 = ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 17623947714804558108ULL)));
                    arr_9 [(unsigned short)8] [i_2] [(short)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0]))));
                }
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)137)), ((unsigned short)40263)))) ? (min((5939080957041635572ULL), (arr_0 [i_0] [i_0]))) : (min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))));
                var_14 += ((/* implicit */long long int) 2147483647);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min(((+(var_9))), (((/* implicit */unsigned long long int) (_Bool)0))));
}
