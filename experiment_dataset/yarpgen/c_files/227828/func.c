/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227828
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned char) ((signed char) arr_0 [i_0 + 1]));
        var_15 &= ((/* implicit */long long int) arr_1 [(unsigned char)12]);
        var_16 -= ((/* implicit */long long int) ((signed char) arr_0 [i_0 + 1]));
        var_17 -= ((/* implicit */short) ((signed char) arr_1 [(signed char)2]));
        arr_2 [i_0] = ((unsigned int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 4; i_2 < 9; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) arr_7 [i_2] [i_1] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        {
                            arr_17 [i_2] = ((/* implicit */unsigned int) ((unsigned char) 8796093022207LL));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_10 [i_5 + 2] [8ULL] [i_1]))));
                            var_21 |= ((/* implicit */_Bool) arr_14 [i_2 - 2] [i_5 + 3] [i_5] [3U]);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) arr_4 [i_2 - 2] [i_2 - 2]);
            var_23 *= ((/* implicit */short) ((unsigned short) arr_7 [i_1] [i_2 + 3] [i_2 + 3]));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                var_24 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (short)30633)));
                var_25 = ((/* implicit */unsigned int) arr_21 [i_7] [i_6 + 1] [i_7 + 2]);
                var_26 = ((/* implicit */unsigned char) arr_20 [i_7 + 2] [i_6 - 1] [i_6 + 1]);
            }
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((_Bool) arr_20 [i_1] [i_1] [i_1])))));
            var_28 = ((/* implicit */signed char) max((var_28), (arr_0 [i_1])));
        }
        var_29 = ((/* implicit */_Bool) ((long long int) ((_Bool) ((unsigned int) (unsigned char)32))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 10; i_9 += 3) 
            {
                {
                    var_30 += ((/* implicit */int) arr_30 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_1]);
                    var_31 |= ((/* implicit */signed char) arr_15 [i_1] [i_1] [i_1] [i_9] [i_9] [i_9]);
                    var_32 = ((signed char) 1104442419);
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned long long int) var_10);
    var_34 = ((/* implicit */signed char) var_10);
}
