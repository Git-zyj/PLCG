/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207415
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
    var_11 = ((/* implicit */unsigned char) min(((+(4194303ULL))), (4194314ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) min((((unsigned char) ((unsigned short) var_1))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)95)))))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [(short)10] [(short)7])), (var_7)))))) ? (max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(var_6)))))) : (((/* implicit */unsigned long long int) var_4)))))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_14 -= ((/* implicit */unsigned int) min((max((var_7), (((/* implicit */unsigned long long int) var_4)))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8))))), (1302001896883503236ULL)))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((17144742176826048379ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1173680228U)), (var_0))))))) ? (((var_5) * (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_4 [(unsigned char)19])))))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_8 [(signed char)19] [i_0] = ((/* implicit */long long int) arr_0 [(short)18] [(short)18]);
            var_16 = max((((/* implicit */int) min((arr_4 [i_0 - 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_0])))))))), ((+(((/* implicit */int) arr_4 [i_0 - 1])))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    arr_16 [i_0] [(_Bool)1] [(_Bool)1] [14U] [(short)19] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0]);
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
                    arr_17 [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-22))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                {
                    var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) * (arr_1 [i_0 - 1])));
                    var_19 = ((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0] [i_0 - 1]);
                    arr_20 [i_4] [(short)11] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_4] [10U] [i_0])))));
                    arr_21 [(unsigned char)16] [(unsigned char)16] [i_4] [i_0] [i_0] [i_7] = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [i_7] [(short)18] [i_0]))) : (arr_1 [0ULL]))) != (((/* implicit */unsigned long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) var_10))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [(unsigned short)12] [i_0] [(signed char)8] = ((/* implicit */short) var_9);
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(18446744073705357313ULL))))));
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0] [i_0] [(unsigned char)12] [(short)10])) ? (((/* implicit */int) (short)4947)) : (((/* implicit */int) arr_15 [i_9] [i_0 - 1] [(_Bool)1] [i_8] [(unsigned char)5] [i_9]))));
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */short) (~(var_2)));
                        arr_30 [i_0] [11ULL] [(short)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) (~(var_3))))));
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_34 [i_0] = ((/* implicit */signed char) ((int) arr_6 [i_0 - 1]));
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [20LL] [i_0 - 1] [20LL]))) + (var_4)));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_19 [i_0] [i_4] [i_5] [20U]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_12] [i_12])) ? (((/* implicit */int) (short)24)) : (-538521647))) - (((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [20LL] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_41 [12LL] [12LL] [12LL] [9ULL] [i_0]))) & (3364610805856428323LL))) - (arr_5 [i_0 - 1])));
                        var_25 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? ((-(4087008266U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0 - 1] [i_4] [i_5] [i_13])))));
                    }
                }
                arr_45 [i_0] [(unsigned char)22] [i_4] |= ((/* implicit */unsigned char) var_9);
                var_26 -= ((/* implicit */signed char) var_0);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_48 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1])));
            }
            arr_49 [8U] [i_4] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [(unsigned char)6] [i_0]))) / (arr_33 [i_0 - 1] [i_0] [i_0] [i_0] [i_4]));
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [(signed char)14] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1302001896883503213ULL) : (((/* implicit */unsigned long long int) -2701372225297702020LL))))) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_8)) ? (4194303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))))));
    }
}
