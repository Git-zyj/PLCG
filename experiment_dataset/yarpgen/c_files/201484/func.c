/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201484
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
    var_13 += ((/* implicit */short) (signed char)-1);
    var_14 = ((/* implicit */long long int) (unsigned char)0);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 *= (_Bool)1;
            arr_4 [i_1] = ((/* implicit */_Bool) (signed char)63);
            var_16 -= ((/* implicit */int) (signed char)-1);
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                var_17 = ((/* implicit */int) max((-8121597134299244214LL), (((/* implicit */long long int) (short)-24))));
                var_18 = ((/* implicit */unsigned int) (short)-20082);
                var_19 = ((/* implicit */int) max((-15LL), (((/* implicit */long long int) (short)-20082))));
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_9 [i_0] [i_0] [i_1] [i_0] = (short)-20082;
                var_20 = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
            }
            var_21 = ((/* implicit */unsigned char) 1615405943U);
        }
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned char)53))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_23 += ((/* implicit */unsigned int) (signed char)127);
        var_24 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_25 = (unsigned char)160;
}
