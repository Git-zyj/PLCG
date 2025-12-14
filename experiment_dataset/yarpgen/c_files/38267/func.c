/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38267
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */long long int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((~(arr_1 [i_0])))))));
        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((64512), ((-(262143)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */int) (signed char)28)) / (((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) var_6))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((long long int) arr_0 [i_0] [i_0])) != (((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (1465765781) : (var_3)));
            var_15 |= ((((/* implicit */_Bool) (signed char)-28)) ? (var_11) : (arr_9 [i_2 - 3] [i_2 + 1] [i_2 + 2]));
            arr_10 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            arr_14 [2LL] [2LL] &= ((/* implicit */long long int) min((99497089), ((~(arr_12 [i_1] [i_1] [i_3])))));
            arr_15 [i_1] = min((((/* implicit */long long int) min((arr_12 [i_1] [i_3 + 2] [i_3 - 1]), (((/* implicit */int) arr_11 [i_1] [i_3 + 1] [i_3]))))), (min((arr_9 [i_1] [i_1] [(signed char)10]), (-477739974413591172LL))));
        }
        var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)-28)) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            var_17 *= ((/* implicit */signed char) min((6456500297854511920LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (((/* implicit */int) arr_16 [6LL])) : (((/* implicit */int) arr_0 [i_1] [i_4])))))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_10) << (((((var_7) + (1678942681081799907LL))) - (44LL))))))));
                    arr_24 [i_1] = var_3;
                    arr_25 [i_4] [i_1] [i_4] [i_4] [3LL] = arr_1 [i_1];
                }
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_1] [(signed char)8] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */int) ((long long int) arr_21 [i_7 - 2] [i_7] [i_1] [i_1] [(signed char)13]));
                    var_19 = ((/* implicit */signed char) ((arr_21 [i_1] [i_4 - 1] [i_1] [i_4 - 1] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 - 3])))));
                    arr_30 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_1])) : (((/* implicit */int) var_6))));
                    var_20 = ((/* implicit */int) ((((var_10) / (arr_9 [i_1] [i_5] [i_7 - 2]))) / (arr_26 [i_1])));
                    var_21 = ((/* implicit */int) (signed char)-88);
                }
                for (long long int i_8 = 3; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [15] [i_8] [15] = (signed char)31;
                    arr_34 [i_1] [i_1] [i_1] [i_8 + 1] = ((/* implicit */signed char) ((((-6027659948725621825LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)6))));
                }
                arr_35 [i_1] [i_4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 524287))));
                arr_36 [i_1] [i_1] = var_4;
            }
            for (int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
            {
                var_22 = ((var_2) ^ (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)41))))), (var_6)))));
                var_23 = (((!(((((/* implicit */int) arr_5 [i_9] [i_4])) <= (-1759009316))))) ? (((min((var_7), (((/* implicit */long long int) (signed char)-49)))) - (arr_28 [i_1] [15] [i_9]))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_1])) ? (((/* implicit */long long int) -1956381735)) : (((((/* implicit */_Bool) -8433924894193159669LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (-2470821581468034075LL))))));
                arr_40 [i_1] = arr_38 [i_1];
            }
            var_24 &= ((/* implicit */signed char) var_7);
        }
    }
    var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
}
