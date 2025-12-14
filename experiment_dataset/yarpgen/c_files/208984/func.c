/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208984
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)152))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_0 [6U]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(unsigned short)10] [i_2])) ? (arr_9 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1]) : (arr_9 [i_3 - 2] [i_3 + 1] [12LL] [i_3] [i_3 - 1])));
                    var_18 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_9 [i_0] [i_1] [8ULL] [i_1] [i_3])));
                    var_19 = ((/* implicit */_Bool) (unsigned char)72);
                }
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_2] [i_1] [i_0]);
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_9 [i_1] [(signed char)14] [i_1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1])))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        var_21 -= ((/* implicit */long long int) ((_Bool) (short)-21001));
                        var_22 = ((/* implicit */_Bool) ((short) arr_10 [i_5 + 1] [i_5] [i_5] [10]));
                        var_23 -= ((/* implicit */signed char) ((long long int) arr_6 [i_5] [i_4] [i_2] [i_0]));
                    }
                    for (int i_6 = 4; i_6 < 16; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_0])) || (((/* implicit */_Bool) var_8))));
                        var_25 = ((/* implicit */signed char) arr_10 [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1]);
                        var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11630789454825895399ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))));
                    }
                    var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28575))) % (arr_2 [i_0] [i_0])));
                }
                var_28 = ((/* implicit */short) var_6);
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -958255011)) + (3330864633746283254ULL)));
                    arr_22 [15LL] [i_0] [15LL] [i_7] = ((/* implicit */int) (~(0U)));
                }
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_0 [i_0]);
                    arr_26 [i_0] [i_0] [i_8 + 1] [i_8] [i_1] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))) : (arr_19 [i_0] [i_1] [i_0] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_27 [i_0] [i_0] = ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)111)))));
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20188)))))) ? (arr_14 [i_9] [i_0] [i_2] [i_1] [0LL] [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                    arr_30 [i_0] [i_1] [i_0] [7ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0]))));
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0])) % (((unsigned long long int) (unsigned short)51542))));
            }
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_8 [i_0] [(unsigned char)15] [i_0] [i_0]))));
            arr_31 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_20 [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))));
        }
    }
}
