/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50471
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */int) var_1)) << (((/* implicit */int) (unsigned char)14))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) var_11)) ? (4294967282U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) * (0U))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)4)), (min((arr_1 [i_0]), (var_11)))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_10));
                    arr_9 [i_0] = ((/* implicit */signed char) (~(((int) arr_0 [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((unsigned short) ((var_9) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))));
    var_13 &= ((/* implicit */unsigned short) var_4);
    var_14 = ((/* implicit */unsigned long long int) min(((~(2193835862U))), (var_7)));
}
