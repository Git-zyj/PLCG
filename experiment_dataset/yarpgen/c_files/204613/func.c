/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204613
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    var_17 = ((/* implicit */short) arr_1 [i_1] [i_0]);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)206)) <= (1055660133)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 ^= arr_10 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_4 - 1];
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12747)) & (((/* implicit */int) (unsigned short)65534))));
                                var_21 |= ((/* implicit */short) var_4);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-12747)) >= (((/* implicit */int) (unsigned short)14924))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)216));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-12747)) ? (15187079452470042251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50633)))));
                }
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_26 = (-(((/* implicit */int) (short)12747)));
                                arr_28 [i_9] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)50611)) : (-1073741824)));
                                arr_29 [i_5] [i_5] [i_7] [i_8] [i_9] = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_8)))) * (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)255))))))) + (((((/* implicit */unsigned long long int) arr_4 [i_7 - 1] [i_8 - 3] [i_6])) & (2305843009213693952ULL))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)4))));
                }
            } 
        } 
    } 
}
