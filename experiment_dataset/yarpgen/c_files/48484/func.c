/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48484
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    var_13 += (~(((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_2 + 1] [i_2])) ? (arr_5 [i_3 + 1] [i_2 + 2] [i_1]) : (arr_5 [i_3 - 1] [i_2 - 2] [i_0])));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))))));
                    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [i_2]))));
                    var_17 ^= ((/* implicit */_Bool) 2245225097U);
                    var_18 = ((/* implicit */short) (+(arr_10 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                }
            }
            var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) 2049742221U))));
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 24; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned short) arr_20 [i_5] [i_5 - 1] [i_5 - 1] [i_1] [i_5]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
                            arr_22 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5]))));
                            var_21 = (~(((/* implicit */int) arr_18 [i_5] [i_1] [i_5] [i_5] [i_5 + 1] [i_1])));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
        }
        var_23 -= ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)135))));
        var_24 = ((/* implicit */int) (_Bool)0);
        var_25 = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 |= ((/* implicit */_Bool) var_0);
}
