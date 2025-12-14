/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210613
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
    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) arr_2 [i_1]);
            arr_8 [i_0] &= ((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1]))));
        }
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [(_Bool)1] [(_Bool)1])));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) var_7)) << (((var_13) - (1352782361340466270LL))))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_3]))));
            arr_15 [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1613919761)) ? (-1613919733) : (arr_10 [i_0]))));
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_24 &= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0]))));
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [(short)8] [i_5] [i_5]))))) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_5]))));
            arr_23 [i_0] = ((/* implicit */long long int) arr_17 [i_5]);
        }
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [8] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : ((~(arr_10 [i_0])))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        arr_29 [i_6] = ((/* implicit */_Bool) (+(min((((16140482286993269760ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), ((+(arr_1 [i_6] [i_6])))))));
        arr_30 [2ULL] &= ((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_6] [i_6])), (min((arr_25 [i_6]), (arr_25 [i_6])))));
        var_26 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)7)), (arr_11 [i_6] [8U] [i_6])))) : (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_6])))))));
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((arr_28 [i_7] [i_7]), (((/* implicit */unsigned long long int) min((3078519373U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)4786)) > (((/* implicit */int) (_Bool)1)))))))))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_21 [i_7] [i_7]))));
    }
    /* LoopSeq 2 */
    for (int i_8 = 3; i_8 < 20; i_8 += 2) 
    {
        var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_35 [i_8 - 1])) || (((/* implicit */_Bool) arr_34 [i_8 - 3])))) ? (max((arr_34 [i_8 - 3]), (((/* implicit */unsigned long long int) arr_35 [i_8 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_8 - 2]))))))));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_30 *= (+((+(min((arr_38 [i_9] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_4)))))));
            arr_41 [i_8] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_34 [i_8 + 1])) ? (arr_34 [i_8 + 1]) : (arr_34 [i_8 + 1]))), (min((arr_34 [i_8 + 1]), (arr_34 [i_8 + 1])))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1746976624U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_36 [i_9])))))) % (((((/* implicit */_Bool) arr_39 [i_8 - 2] [(unsigned short)5] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_9]) >= (arr_35 [i_8]))))) : (max((((/* implicit */unsigned long long int) var_7)), (18446744073709551604ULL)))))));
        }
    }
    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_32 ^= ((/* implicit */short) var_12);
        arr_45 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_10] [i_10])) ? (arr_43 [(short)17] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_10] [i_10]))))))));
    }
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10))))))) : (var_1))))));
}
