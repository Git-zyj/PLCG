/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34067
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
    var_11 ^= ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) % ((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_8))))))));
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) -7758325847927120706LL)) && (((/* implicit */_Bool) (unsigned char)123))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_13 = (((+((~(var_6))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (var_3))) || (((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 2] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_8))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0]))));
                arr_9 [(_Bool)1] [i_1] [i_2] [i_1] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((signed char) arr_8 [i_2])))));
                var_16 = ((/* implicit */int) ((unsigned int) arr_4 [i_0 + 1] [i_0 + 1]));
            }
            var_17 = ((/* implicit */unsigned int) var_6);
            arr_10 [17ULL] [17ULL] = ((/* implicit */unsigned int) var_5);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_0] [i_0 + 1]))))) ? (((/* implicit */int) ((short) arr_1 [i_1] [(unsigned short)13]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [(signed char)18] [(unsigned char)9])) : (((/* implicit */int) arr_2 [i_0] [(signed char)17]))))));
            var_19 -= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [2LL]);
        }
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0]))));
            arr_14 [i_0] &= ((/* implicit */signed char) (!(((((/* implicit */long long int) var_0)) >= (arr_13 [i_0] [(_Bool)1])))));
            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_6 [(_Bool)1] [13] [i_3] [(_Bool)1])))) * (((/* implicit */int) ((((/* implicit */int) var_4)) == (var_0))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 17U))) << (((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0 + 2] [i_3 - 2]))) - (65500))))))));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_24 ^= ((/* implicit */signed char) ((max((((/* implicit */int) arr_2 [(short)11] [i_4])), (arr_0 [i_4]))) * ((+(((/* implicit */int) arr_2 [i_4] [i_4]))))));
        arr_19 [i_4] |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((arr_13 [i_4] [i_4]), (((/* implicit */long long int) var_9))))), (var_6))) <= (((/* implicit */unsigned long long int) arr_5 [i_4]))));
    }
    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */signed char) arr_15 [(signed char)0]);
        var_25 -= ((/* implicit */short) arr_20 [i_5]);
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((!(((_Bool) var_6)))) && (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */short) var_3))))))))))));
            arr_27 [i_5] [i_6] [i_5] = ((/* implicit */signed char) arr_26 [i_5 + 1] [i_6] [i_5 + 1]);
            var_27 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((9223371487098961920LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (((arr_13 [i_5] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
            arr_28 [i_5] [i_6] [i_6] = ((/* implicit */signed char) arr_13 [i_5 - 1] [i_5 - 1]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_29 *= arr_3 [i_5 - 1] [(_Bool)1] [i_5 - 1];
            var_30 = ((/* implicit */unsigned short) ((long long int) (((~(var_0))) / (((/* implicit */int) arr_4 [i_7] [17U])))));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(max(((+(arr_17 [i_5 + 1] [i_5 + 1]))), (((arr_6 [i_7] [i_7] [i_5] [(_Bool)1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [(short)5] [(short)5])))))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_34 [i_5] [i_8] [i_5] = ((short) ((((/* implicit */_Bool) (~(arr_1 [i_8] [i_5])))) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1])) : (((((/* implicit */_Bool) arr_31 [i_5] [9LL] [i_8])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) var_7))))));
            var_32 = ((/* implicit */short) (-((-(arr_31 [i_5] [9U] [i_5])))));
        }
        arr_35 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)22290)) >> (((-587290522) + (587290547)))))))));
    }
}
