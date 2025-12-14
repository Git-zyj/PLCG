/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26185
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) 18446735277616529408ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((unsigned int) -461672814)))));
        arr_3 [i_0] |= ((/* implicit */short) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_8))))) * ((((_Bool)1) ? (1768642232) : (((/* implicit */int) (signed char)127))))));
        var_12 = ((/* implicit */unsigned char) ((signed char) var_7));
        arr_4 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) var_8)) % (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (4433230883192832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))))));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_13 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_0 [i_1] [i_2]))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) arr_1 [i_2 - 1]))));
                var_15 = ((/* implicit */long long int) arr_13 [i_1]);
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 4]))) != (arr_13 [i_1])));
            }
        }
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (signed char)-7)))));
            var_17 |= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 2])) != ((~(1768642232)))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
        {
            arr_22 [i_1] [14] [i_1] = ((/* implicit */int) ((unsigned short) 9173455927375213777LL));
            arr_23 [2] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_20 [i_1] [i_5] [i_5])) ? (var_0) : (var_4)))));
            var_18 = ((/* implicit */long long int) ((arr_13 [i_1]) > (((/* implicit */unsigned long long int) (+(1768642232))))));
            arr_24 [12U] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)27626)) ? (arr_1 [i_1]) : (arr_1 [i_1 + 1])));
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_6])) && (((/* implicit */_Bool) var_6)))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((arr_16 [6U] [6U] [6U]) << (((((/* implicit */int) var_1)) + (9868))))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) arr_1 [i_1 - 2]);
            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [(unsigned char)18] [i_1 - 2] [(unsigned char)18])) ? (arr_16 [(signed char)6] [i_1 - 4] [(signed char)6]) : (arr_16 [(unsigned short)16] [i_1 + 1] [(unsigned short)16])));
        }
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            arr_35 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_8]);
            var_22 ^= ((long long int) ((arr_16 [(unsigned char)2] [(unsigned char)2] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_1])))));
        }
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_39 [i_9] [i_9] = (i_9 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) arr_36 [i_9])) - (28)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_36 [i_9])) - (28))) - (81))))));
        arr_40 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9])) && (((/* implicit */_Bool) var_1))));
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_10 [i_10]))))))), ((unsigned short)37910))))));
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
        {
            arr_47 [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */long long int) (+(((arr_42 [i_10]) - (arr_42 [i_10])))));
            arr_48 [8] [i_11] = (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31)))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (signed char)56))));
            var_25 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_7)))), (arr_45 [i_10]))) + (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_3)), (arr_1 [i_10]))))))));
        }
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 3; i_13 < 9; i_13 += 1) 
            {
                var_26 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_11 [i_13 - 2] [i_13 - 1] [i_13 + 2]))), (((((/* implicit */int) (unsigned short)37910)) & (((/* implicit */int) arr_18 [i_10] [i_10]))))));
                arr_55 [(_Bool)1] [i_10] = ((/* implicit */unsigned char) var_2);
            }
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (unsigned char)239))));
        }
    }
    var_28 = ((/* implicit */unsigned short) var_5);
}
