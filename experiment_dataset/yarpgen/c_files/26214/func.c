/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26214
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((unsigned int) var_7))));
                arr_6 [i_1 + 2] = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (long long int i_5 = 4; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_14 ^= var_9;
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(((((unsigned long long int) arr_14 [i_5 - 4])) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)142)))))))))));
                    }
                } 
            } 
        } 
        arr_17 [(short)5] = arr_10 [i_2] [i_2] [18];
    }
}
