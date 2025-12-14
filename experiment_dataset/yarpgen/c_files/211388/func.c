/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211388
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
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned char)218)))), (((/* implicit */int) ((signed char) arr_3 [i_0] [(unsigned short)18] [i_0 + 1])))));
                arr_5 [1ULL] = arr_3 [i_0] [i_0 - 2] [i_0];
                var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-8)))) ? (((/* implicit */unsigned long long int) ((long long int) var_18))) : (max((arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3]), (0ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] [i_3] = max(((unsigned char)218), ((unsigned char)236));
                arr_13 [i_2] = 575103490;
            }
        } 
    } 
}
