/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217376
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
    for (int i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_12 = ((/* implicit */signed char) 2064851533);
                arr_7 [i_1] [i_1] [i_2] = ((/* implicit */short) (-(max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1] [i_1 + 2]))))));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                var_13 = arr_2 [i_1 + 1];
                arr_12 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_2 [i_1 + 3]))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7214694255655502175LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])))))) : (6614424064739822829LL)));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [(short)11] [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (7214694255655502175LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                        var_15 = ((/* implicit */_Bool) arr_1 [i_6]);
                        var_16 = ((/* implicit */unsigned short) var_0);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1 + 2] [i_0] [i_0 - 1]) : (arr_3 [i_1 - 1] [i_1] [15])));
                    }
                }
                var_18 = ((/* implicit */unsigned long long int) -7214694255655502176LL);
                var_19 = (~(((int) var_11)));
                var_20 = arr_4 [i_1] [i_1] [i_4];
            }
            for (int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) (-(6614424064739822817LL)));
                    var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 7214694255655502175LL)))) ? (((-1657691740) + (var_11))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned short)15])) ? (-1657691735) : (((/* implicit */int) (unsigned short)47034))))));
                    var_23 = ((/* implicit */short) arr_9 [i_1]);
                    var_24 = ((((/* implicit */_Bool) arr_28 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 3])) || (((/* implicit */_Bool) ((long long int) var_10))));
                    arr_29 [i_1] [i_7] [i_8] = 511;
                }
                arr_30 [i_1] [(short)11] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((6314312267001487428ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (-1657691740) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_7])))) > (((/* implicit */int) (short)512))));
                var_25 = ((/* implicit */long long int) arr_3 [(short)4] [i_1] [i_7]);
            }
            var_26 = ((/* implicit */signed char) arr_25 [i_0] [i_0 - 1]);
            var_27 = max((var_11), (((((/* implicit */int) (signed char)-56)) - (((/* implicit */int) var_5)))));
        }
        arr_31 [(signed char)2] [i_0 - 2] = ((/* implicit */unsigned short) min((var_8), (var_4)));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (arr_14 [i_0] [i_0 + 2] [i_0 + 2] [i_0]) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) + (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0])))))))));
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)8))));
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-104)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_5)) : (var_0)))) ? (var_6) : (((/* implicit */int) ((signed char) var_6))))))));
    }
    for (int i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_31 = (((+(max((var_11), (((/* implicit */int) arr_10 [i_9])))))) * (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)103)) / (arr_23 [i_9] [(short)2] [i_9] [i_9])));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(arr_20 [i_9])))) % (min((((-7214694255655502176LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_9] [i_9]))))), (((/* implicit */long long int) ((arr_11 [i_9]) ? (((/* implicit */int) (unsigned short)23149)) : (var_11))))))));
        arr_35 [i_9] = ((max((((((/* implicit */_Bool) arr_32 [3])) ? (arr_3 [i_9] [i_9] [i_9]) : (((/* implicit */int) var_1)))), (max((((/* implicit */int) var_9)), (arr_27 [i_9] [i_9] [i_9]))))) != (var_0));
        var_34 = ((/* implicit */long long int) arr_19 [i_9 - 2] [i_9] [(unsigned short)10] [i_9] [i_9]);
    }
    var_35 = ((/* implicit */_Bool) var_1);
}
