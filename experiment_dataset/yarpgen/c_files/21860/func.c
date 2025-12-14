/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21860
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (var_4)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_10)) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) var_12))))))) ? (max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_15 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-1824313605)))) ? (575334852396580864LL) : (var_2)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) 1930751339)) : (var_3)))) : (((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2])))))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) var_5);
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_17 = var_12;
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [9U]);
            var_18 = ((/* implicit */unsigned char) ((signed char) ((_Bool) arr_3 [1ULL] [i_2] [i_2])));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) -951315905))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -951315905))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_9))))) : (var_2)));
        }
    }
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) (unsigned char)40)))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_3])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [(unsigned char)6]))) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) var_1))))) : (var_10))))));
        arr_14 [i_3] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)215)) && (((/* implicit */_Bool) arr_12 [i_3]))))) != (((/* implicit */int) arr_13 [i_3] [i_3])))) ? (var_10) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) var_8);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119))))) << ((((~(((/* implicit */int) var_13)))) + (12))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (signed char)116))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_13 [19U] [i_5])) : (((/* implicit */int) var_7))));
            var_23 *= ((/* implicit */short) (-(((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)215)))) * ((-(((/* implicit */int) arr_12 [(signed char)2]))))))));
            arr_24 [i_4] = ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)57)))) + ((-(((/* implicit */int) arr_12 [(_Bool)1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [(_Bool)1])))))) : (((((/* implicit */_Bool) ((unsigned int) arr_16 [(unsigned char)11]))) ? (((((/* implicit */_Bool) 1755875047)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_19 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1)))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = (!(((/* implicit */_Bool) -1755875048)));
        arr_27 [i_6] = ((/* implicit */unsigned int) ((arr_17 [i_6]) ? (((/* implicit */int) arr_17 [15U])) : (((/* implicit */int) arr_20 [i_6] [i_6]))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (((unsigned int) var_7))));
        arr_28 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [22ULL])) ? (((/* implicit */int) arr_12 [22U])) : (((/* implicit */int) var_8))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) : (9223372036854775789LL)))))) ? (((((((/* implicit */_Bool) var_11)) ? (4132304743082086733LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_3))))))));
}
