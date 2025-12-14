/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231143
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
    var_14 -= ((/* implicit */unsigned long long int) var_4);
    var_15 = var_6;
    var_16 -= ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (-1845077020) : (-1845077012)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (~(var_13))))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_12))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_2 - 2] [i_2 + 2] [i_2 - 1])) : (arr_1 [i_1 - 1])));
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 2] [i_2 - 2])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) -1396141954);
                            var_22 -= (!(((arr_11 [i_0] [i_2] [i_4]) <= (7936U))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1396141953)) ? (arr_1 [i_2]) : (((/* implicit */int) arr_14 [i_7 - 1] [i_2 - 1] [i_2 - 1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 1396141975);
                            arr_24 [i_0] [i_1] [i_2 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) ^ (((/* implicit */int) (unsigned char)142))))));
                        }
                        var_24 = ((/* implicit */unsigned char) max((var_24), (var_7)));
                        var_25 -= var_2;
                    }
                    arr_25 [i_1] = (~(-1845077020));
                    arr_26 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_1 + 1] [i_1 + 1])) << (((((unsigned long long int) var_10)) - (4124831066ULL))))));
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_4 [i_0] [i_0] [20ULL]))))))) > (((unsigned long long int) ((arr_20 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */int) arr_21 [i_0] [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [9] [i_0] [i_0] = ((unsigned char) (+(((/* implicit */int) (unsigned char)9))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_11])) ? (arr_1 [i_9 - 1]) : (((/* implicit */int) arr_13 [i_0] [i_8] [i_9 - 2] [i_8 - 1] [i_9 - 2]))));
                            arr_38 [i_0] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)137)) : (-1396141960)));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) ((int) max((((/* implicit */int) ((short) 8420009472589879222ULL))), (var_13))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (-1489268347)))), ((-(arr_41 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 3] [i_9]))))))));
                        }
                        var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) ((1396141953) - (((int) 14640400708222619914ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7)) ? (16777216ULL) : (2233785415175766016ULL)))) && ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        var_31 = ((/* implicit */_Bool) ((unsigned int) -1845077020));
                    }
                } 
            } 
        } 
        arr_43 [i_0] = ((((((/* implicit */_Bool) 262143)) ? (2579360208340413562ULL) : (16383ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0])) << (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
    }
}
