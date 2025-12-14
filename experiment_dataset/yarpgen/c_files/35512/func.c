/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35512
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) var_14);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2] [i_2])) ? (((/* implicit */long long int) arr_10 [i_0] [i_1 - 1] [i_2 - 1] [4LL] [i_2 + 1] [i_3])) : (arr_4 [i_1 + 1] [i_1] [i_2]))))));
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / (arr_4 [i_2 + 1] [i_1 - 1] [i_2 - 2])));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) 0U);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2 - 1] [i_0] [i_2 - 1])) * (((/* implicit */int) arr_5 [i_2 - 2] [i_0] [5LL]))));
                        var_21 = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (+(arr_9 [i_5] [i_0] [i_1 - 1] [i_0] [i_0])));
                        var_23 = ((/* implicit */unsigned long long int) var_6);
                        var_24 = ((((((/* implicit */_Bool) 4294967295U)) && (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) arr_10 [0ULL] [(short)6] [i_2 - 1] [i_1 + 1] [i_0] [12])) : (((((/* implicit */unsigned long long int) 0U)) * (8824660229137311823ULL))));
                    }
                    var_25 = ((/* implicit */short) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_26 ^= ((((arr_8 [i_7]) * (((/* implicit */unsigned long long int) var_9)))) > (arr_19 [i_6 + 2] [i_7] [i_7] [i_1 + 1]));
                            var_27 = ((/* implicit */unsigned short) ((unsigned char) 1299313262));
                            var_28 = ((/* implicit */unsigned long long int) var_4);
                            var_29 &= ((/* implicit */unsigned char) (+(arr_21 [(signed char)6] [i_1] [i_7])));
                        }
                        var_30 ^= ((/* implicit */short) (!(arr_5 [i_6] [(_Bool)1] [i_2 + 1])));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) && (((/* implicit */_Bool) arr_4 [i_2 + 1] [2LL] [i_6 + 1]))));
                        var_32 = ((/* implicit */unsigned short) (short)-22359);
                    }
                    var_33 = ((/* implicit */unsigned char) (~((~(8824660229137311823ULL)))));
                    var_34 = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            {
                var_36 = ((/* implicit */short) var_8);
                var_37 = ((/* implicit */unsigned short) var_11);
                var_38 = ((/* implicit */_Bool) ((((8824660229137311823ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_9]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)29), (((/* implicit */unsigned char) (_Bool)0)))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46693))) / (3039459407U))))))));
            }
        } 
    } 
    var_39 = ((/* implicit */short) min((0ULL), (var_10)));
}
