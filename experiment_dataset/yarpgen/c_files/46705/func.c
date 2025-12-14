/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46705
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
    var_15 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) (short)1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((unsigned int) ((signed char) ((long long int) arr_0 [i_1])));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [(signed char)23] [(signed char)23] [i_2] [i_3] [(signed char)23] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)127));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((unsigned char) arr_11 [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) 9223372036854775807LL)));
                        arr_17 [i_0] [i_0] |= ((unsigned long long int) ((unsigned short) var_2));
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_21 [15ULL] [i_1] = ((/* implicit */short) ((unsigned long long int) ((signed char) ((unsigned long long int) 1444479750))));
                        var_17 *= ((/* implicit */signed char) ((unsigned int) ((int) ((signed char) (unsigned char)248))));
                        var_18 = ((/* implicit */signed char) ((short) (-9223372036854775807LL - 1LL)));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) ((short) var_1))));
}
