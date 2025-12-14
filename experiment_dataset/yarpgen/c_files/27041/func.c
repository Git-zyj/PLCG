/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27041
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
    var_15 = ((/* implicit */long long int) max((var_15), (max((((((/* implicit */_Bool) max((var_0), ((unsigned char)111)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)145), ((unsigned char)255))))) : (min((var_11), (((/* implicit */long long int) (unsigned char)134))))))))));
    var_16 = ((/* implicit */unsigned char) var_9);
    var_17 = (unsigned char)125;
    var_18 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (min((((/* implicit */long long int) var_7)), (max((9223372036854775807LL), (8044974564789050355LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                arr_10 [i_0] [3LL] [3LL] = (unsigned char)145;
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_5 [(unsigned char)9] [i_1] [i_1 + 1]))));
            }
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_20 = ((/* implicit */long long int) var_12);
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (arr_12 [i_3 - 1] [i_1 + 1] [i_1 + 1] [i_0]) : (var_8)));
                var_22 = ((/* implicit */long long int) (unsigned char)201);
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_19 [i_0] [i_1 + 1] [0LL] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_6] [i_5] [i_5] [i_1] [i_0] = ((long long int) arr_1 [i_1 + 1]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_0]) : (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_5] [(unsigned char)10]) : (var_13))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) arr_21 [i_6] [i_1] [i_1] [i_6])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_25 = var_2;
                        var_26 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2162754445183108075LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (arr_17 [i_0] [i_0]))) << (((8044974564789050355LL) - (8044974564789050349LL)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((long long int) arr_29 [i_1] [i_1] [i_4] [(unsigned char)2] [i_0] [i_0] [10LL])))));
                        arr_32 [i_5] [i_4] [(unsigned char)9] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (-2162754445183108067LL))) : (arr_9 [i_0] [i_1] [i_0] [i_1 + 1])));
                    }
                    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                }
                arr_33 [i_1] = ((/* implicit */long long int) (unsigned char)173);
                var_30 = ((/* implicit */unsigned char) (~(arr_24 [i_4] [i_0] [i_1] [i_0] [i_0])));
            }
            for (long long int i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                arr_38 [i_9] = ((((/* implicit */_Bool) arr_36 [i_0] [i_0])) ? (var_5) : (-8LL));
                var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2162754445183108075LL)) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_9 - 3]))));
                var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_31 [i_1 - 1] [i_1 + 1] [i_9 + 1])) : (((/* implicit */int) arr_31 [i_1 + 1] [i_1 - 1] [i_9 - 3]))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (arr_30 [i_0] [i_0] [i_1 - 1] [i_9] [i_9 - 1])));
            }
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
            var_35 += ((/* implicit */unsigned char) -2162754445183108064LL);
        }
        var_36 = ((/* implicit */long long int) max((var_36), ((-(((long long int) var_7))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_5))));
    }
}
