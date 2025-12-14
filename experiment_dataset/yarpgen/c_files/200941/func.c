/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200941
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_10)) << (((var_0) - (4301126166440593542ULL))))) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (108)))))))) ? (max((var_0), (((var_0) >> (((((/* implicit */int) (unsigned short)23389)) - (23359))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((unsigned long long int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)23399))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (var_6)))));
                var_13 += ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)39007));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_5 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2]))));
                    arr_10 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [21LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (((long long int) (unsigned short)31415))))))));
                    arr_15 [i_0] [i_1] [(signed char)1] [(signed char)1] = ((/* implicit */int) ((var_9) == (((/* implicit */int) arr_1 [i_0]))));
                    var_17 = ((/* implicit */long long int) min(((unsigned char)254), ((unsigned char)39)));
                    arr_16 [i_0] [i_0] [i_0] [6LL] = ((/* implicit */unsigned char) (-(arr_4 [i_0] [i_0])));
                    arr_17 [i_0] [i_0] [i_0] |= ((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))));
                }
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_18 = ((/* implicit */int) ((short) (unsigned char)59));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) / (arr_12 [i_0] [i_0] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                        {
                            arr_26 [(unsigned char)8] [(unsigned short)12] [i_4] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_6 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))))));
                            arr_27 [i_0] [i_5] [i_4] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)131))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_4])) : (((/* implicit */int) ((unsigned short) arr_1 [i_5])))));
                        }
                        arr_28 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) var_3);
                        var_21 |= arr_20 [i_0] [i_1] [i_4] [19];
                    }
                }
            }
        } 
    } 
    var_22 = ((long long int) var_11);
}
