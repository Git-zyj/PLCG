/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45104
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
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_20 *= ((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) - (arr_1 [i_0] [i_0 - 3])));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (var_1) : (((/* implicit */long long int) arr_3 [i_1])))))));
            var_22 = ((/* implicit */_Bool) arr_2 [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(arr_3 [i_0 - 4])));
        }
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0])) & (((arr_2 [15ULL]) / (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [(_Bool)1])))))))));
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((short) arr_6 [i_2 + 1] [i_2 + 1]));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    arr_15 [i_0] [0ULL] [i_3] [i_4] = ((/* implicit */_Bool) arr_9 [17] [i_2]);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0 - 2] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_0 - 2])));
                }
                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_3])))) ? (((arr_4 [i_2] [i_2] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (arr_9 [i_2 - 2] [i_0 + 1])));
                arr_16 [i_3] = ((/* implicit */unsigned short) arr_10 [i_0 - 2]);
            }
            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                arr_19 [i_2] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [(_Bool)1] [(_Bool)1])))) ? (arr_13 [i_5] [(_Bool)1] [i_5] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((unsigned int) var_14)))));
                arr_20 [i_0] [i_0] [i_0] = ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))));
                var_26 = ((/* implicit */_Bool) arr_18 [i_0 - 4] [i_0 - 4] [i_2 - 2] [i_2]);
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_5])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_14 [i_0 - 3] [i_0 - 3] [i_2 + 1] [i_2 + 1]))))));
                var_28 = ((/* implicit */_Bool) var_11);
            }
        }
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (~(((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))))));
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [0U] [i_0] [(signed char)7]) & (arr_9 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))));
    }
    var_30 += var_14;
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_6] [i_6])) < ((~(((/* implicit */int) arr_23 [i_6 + 4] [(unsigned short)5]))))));
        var_32 = ((/* implicit */signed char) max((arr_24 [i_6]), (((/* implicit */unsigned long long int) var_12))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) arr_22 [17U]);
                    arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) != (((arr_29 [i_6] [i_6] [i_8]) ? (arr_24 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((382006417U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & ((~(((/* implicit */int) arr_25 [i_6] [i_6] [i_8]))))))) : ((~(var_11)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
    {
        arr_35 [i_9] = var_19;
        var_34 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_28 [i_9] [i_9] [i_9] [(unsigned short)10])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_9 + 3]));
            arr_39 [i_9] [i_10] [i_9] &= ((/* implicit */short) arr_22 [i_9]);
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_36 [i_9] [i_9]))));
            arr_40 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 22ULL))));
        }
    }
    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61224))) - (43ULL))) - (2305843009211596800ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), (arr_37 [i_11] [i_11])))) + ((+(((/* implicit */int) arr_29 [i_11] [i_11] [i_11])))))))));
        var_37 ^= ((/* implicit */unsigned char) max((((min((arr_30 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) arr_25 [i_11] [i_11] [i_11])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_11] [i_11] [i_11]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11] [i_11]))))))))), ((~(max((var_12), (((/* implicit */unsigned int) arr_37 [i_11] [i_11]))))))));
        var_38 += ((/* implicit */signed char) var_1);
        var_39 = ((unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11] [i_11]))) < (arr_27 [i_11] [i_11] [i_11])))) + (((/* implicit */int) ((2ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_11]))))))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(arr_30 [(signed char)14] [i_11] [i_11])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_11] [i_11 + 3])) && (((/* implicit */_Bool) arr_32 [i_11] [i_11 - 1]))))) : (((((/* implicit */_Bool) arr_25 [i_11] [i_11 + 4] [i_11])) ? (((/* implicit */int) arr_26 [i_11 - 1] [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_43 [i_11] [i_11])))))))));
    }
    var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (2144115567U)));
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        arr_47 [i_12] = ((/* implicit */unsigned long long int) var_10);
        arr_48 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (signed char)96))));
        arr_49 [i_12] [i_12] = ((/* implicit */_Bool) arr_45 [i_12]);
    }
}
