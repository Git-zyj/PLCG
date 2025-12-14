/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233072
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)));
            arr_6 [(unsigned char)12] [(unsigned char)12] = (+(((((((/* implicit */int) var_10)) + (2147483647))) << (((arr_0 [i_1 - 2] [i_1]) - (8433619569142210743ULL))))));
            arr_7 [(_Bool)1] = ((/* implicit */_Bool) arr_5 [10LL] [10LL]);
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_15 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_0]) == (arr_15 [i_0]))))) <= (((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_15 [i_0]) : (arr_15 [i_4 - 1])))));
                        var_16 += (+((+(((/* implicit */int) (_Bool)1)))));
                        arr_17 [(short)16] [(unsigned char)17] [i_3] [(signed char)11] [i_2] [(unsigned char)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-97)) ? (arr_15 [i_4 - 1]) : (((/* implicit */unsigned long long int) 4174100488U))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                arr_20 [i_0] [7ULL] [i_2] = (signed char)-17;
                var_17 -= (~(((max((0LL), (((/* implicit */long long int) 12)))) >> (((((/* implicit */int) (short)14067)) - (14064))))));
                arr_21 [i_2] [i_2] [i_2] [(signed char)17] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_14 [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 2])) / (((/* implicit */int) arr_14 [i_5 + 1] [13ULL] [i_5 + 2] [8LL] [i_5 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5 + 2] [5U] [5U] [5ULL] [i_5 + 1])) != (((/* implicit */int) arr_14 [i_5 + 4] [(_Bool)1] [(signed char)0] [i_5] [i_5 + 2])))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((((/* implicit */unsigned long long int) 1990810175)) ^ (12009364698139180539ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_19 [i_0] [i_2] [2ULL])), (-1199293982)))))))));
                var_19 = ((/* implicit */signed char) var_0);
            }
            arr_22 [i_0] [i_2] = ((min((((/* implicit */unsigned long long int) (signed char)-30)), (min((((/* implicit */unsigned long long int) (short)30679)), (18446744073709551615ULL))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2055294053)) && (((/* implicit */_Bool) (unsigned char)86)))) ? (((((/* implicit */int) (unsigned short)4)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
            arr_23 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)23)))) > (3498268864459795614ULL)))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)206)) : (33521664)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-9788)), (arr_0 [i_0] [i_2])))))))));
        }
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 + 1])) ? (arr_4 [i_6 - 1] [i_6 + 3]) : (arr_4 [i_6 - 1] [i_6 + 3])))) ? (((arr_4 [i_6 + 3] [i_6 + 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_6 + 3] [i_6 + 1]) != (arr_4 [i_6 + 1] [i_6 + 2]))))));
            arr_27 [i_0] [(short)3] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_10 [i_6 + 3] [i_6 + 1] [i_6 + 3] [i_6 + 3])), (((signed char) var_12))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            arr_30 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_28 [10])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [(unsigned short)15])) + (arr_29 [(unsigned char)17]))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_29 [i_7 + 1]))));
        }
        arr_31 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (arr_11 [i_0] [i_0] [(short)14])))) && (((/* implicit */_Bool) var_11)))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1863580461U)), (arr_12 [i_0] [14] [14] [i_0])))) ? (((/* implicit */unsigned long long int) min((4517891255905959756LL), (((/* implicit */long long int) var_11))))) : (min((2ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
        arr_32 [i_0] = ((/* implicit */unsigned char) max((6833227362346875715LL), (288230376151711743LL)));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_22 *= ((((/* implicit */_Bool) ((int) 8388604U))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0])) ? (((/* implicit */int) var_3)) : (522959214)))));
            arr_36 [3ULL] [i_8] [3ULL] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 3231688052U))))));
        }
    }
    for (short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        var_23 = 0ULL;
        arr_40 [(short)3] = ((/* implicit */unsigned long long int) (signed char)89);
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9])) && (((/* implicit */_Bool) arr_29 [i_9]))))), (max((arr_29 [(unsigned char)12]), (arr_29 [i_9])))));
        var_25 += arr_13 [11U] [i_9] [i_9] [12ULL];
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
    {
        arr_43 [(short)16] [(short)16] = ((/* implicit */short) var_11);
        arr_44 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_41 [(short)11] [6ULL]))))) ? (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(short)0] [(_Bool)1]))))))) : (arr_35 [2ULL] [10ULL])));
        arr_45 [10LL] = ((/* implicit */unsigned char) arr_5 [i_10] [i_10]);
        arr_46 [13] [(short)1] = ((/* implicit */int) min(((-(min((((/* implicit */unsigned long long int) arr_29 [i_10])), (arr_16 [10LL] [12U]))))), (((/* implicit */unsigned long long int) max((arr_1 [i_10]), (arr_1 [i_10]))))));
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        arr_51 [(unsigned short)10] = ((/* implicit */unsigned long long int) (+(min((arr_47 [i_11] [i_11]), (arr_47 [i_11] [(short)13])))));
        var_26 = ((((/* implicit */_Bool) 1745158477U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (4294967286U));
        arr_52 [i_11] [11ULL] = ((/* implicit */unsigned short) var_11);
        arr_53 [(short)8] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((short)-29071), (((/* implicit */short) arr_41 [2U] [(_Bool)1]))))), (((((/* implicit */_Bool) var_5)) ? (arr_26 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned short)0])))))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_27 += ((/* implicit */short) (-(((max((((/* implicit */long long int) var_2)), (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))))));
    var_28 = ((/* implicit */int) var_10);
}
