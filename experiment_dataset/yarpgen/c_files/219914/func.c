/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219914
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = max((((/* implicit */int) ((unsigned short) arr_6 [i_0 + 1]))), (((((min((-282080074), (((/* implicit */int) var_3)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                var_16 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)31855)), (627541999U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) max((((short) min((((/* implicit */short) arr_5 [i_3] [i_2])), (arr_3 [i_3])))), (((/* implicit */short) ((unsigned char) 1048575)))));
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2] [i_3]))));
            }
        } 
    } 
}
