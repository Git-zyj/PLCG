/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249019
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
    var_10 = ((/* implicit */unsigned short) ((signed char) (unsigned char)0));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0 - 3] [i_0 - 3] = -1627759688;
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)251));
                }
            } 
        } 
        var_11 = ((/* implicit */unsigned short) ((short) (unsigned char)255));
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_17 [i_5] [i_5] [i_3] [i_5] = ((/* implicit */signed char) (unsigned char)225);
                        var_12 ^= ((/* implicit */int) ((unsigned long long int) ((signed char) (unsigned char)255)));
                    }
                } 
            } 
        } 
    }
}
