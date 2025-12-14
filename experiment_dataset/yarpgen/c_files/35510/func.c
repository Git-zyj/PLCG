/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35510
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
    var_14 = ((/* implicit */unsigned short) var_6);
    var_15 -= ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
                                var_17 = ((/* implicit */signed char) ((0U) << (((((/* implicit */int) (short)-1882)) + (1906)))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (max((arr_15 [i_2 + 2] [i_0 - 1]), (arr_15 [i_2 - 1] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                var_19 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_4 [i_2 + 2] [(short)7] [i_0 - 1]))));
                    var_21 = ((/* implicit */unsigned char) var_13);
                    arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) min((arr_3 [i_0 - 1]), (arr_3 [3ULL])))) : (((((/* implicit */_Bool) arr_3 [(signed char)12])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) : (arr_13 [(_Bool)1] [(short)10] [12] [(unsigned short)14] [4])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((max((var_6), (var_13))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [(signed char)20])) ? (((((/* implicit */_Bool) arr_20 [(short)13])) ? (((/* implicit */int) arr_18 [i_5] [9ULL])) : (((/* implicit */int) arr_19 [2U])))) : (((/* implicit */int) var_11))))) ? (max((((((/* implicit */_Bool) arr_20 [20U])) ? (((/* implicit */int) arr_20 [(unsigned char)8])) : (((/* implicit */int) arr_18 [i_5] [(signed char)17])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (arr_17 [i_5])))))) : ((~(((/* implicit */int) var_8)))));
        var_24 ^= ((/* implicit */unsigned short) var_11);
        var_25 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_19 [(unsigned char)8])) : (((/* implicit */int) var_9))))))))));
    }
    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0U), (4294967295U)))) ? (((/* implicit */unsigned int) 2147483647)) : (((((/* implicit */_Bool) 1267543538702652543ULL)) ? (642750415U) : (((/* implicit */unsigned int) 2147483647))))))) || (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_22 [11U])))), (((/* implicit */int) var_13)))))));
        var_27 = ((/* implicit */long long int) min((((((((/* implicit */int) arr_22 [(short)15])) >> (((((/* implicit */int) var_9)) - (49))))) << (((arr_21 [i_6 - 1] [i_6 - 1]) - (1703897412))))), ((~(arr_21 [i_6 + 3] [(signed char)10])))));
        var_28 = min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((!(var_11)))))), (((((var_13) && (((/* implicit */_Bool) arr_22 [(unsigned char)19])))) ? (((/* implicit */int) arr_23 [i_6 - 1])) : (((/* implicit */int) arr_23 [i_6 - 2])))));
        var_29 = arr_23 [(unsigned char)7];
    }
    for (signed char i_7 = 2; i_7 < 19; i_7 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */int) min((arr_23 [i_7 - 2]), (arr_23 [i_7 - 2])))) : (((/* implicit */int) min((max((arr_25 [19ULL]), (arr_25 [(unsigned short)5]))), (((/* implicit */unsigned char) arr_23 [(_Bool)1])))))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967295U)))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_25 [i_7 - 2])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [(unsigned short)14])) : (((/* implicit */int) arr_23 [16])))))) : (((var_4) ? (((/* implicit */int) arr_24 [(unsigned char)11])) : (((/* implicit */int) arr_22 [i_7 + 1])))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 4; i_9 < 22; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (unsigned char i_11 = 1; i_11 < 24; i_11 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_33 [(signed char)18] [i_9 - 1] [(signed char)14] [i_11 - 1] [(signed char)11] [(unsigned char)13])), (((arr_29 [i_9 - 4]) & (arr_29 [i_9 - 4])))));
                        var_33 = ((/* implicit */unsigned short) arr_28 [i_9 + 3]);
                        arr_35 [9ULL] [(signed char)15] [5] [(unsigned short)9] [(unsigned char)0] = ((/* implicit */unsigned char) (-(((((var_11) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) arr_33 [(signed char)8] [18] [(unsigned short)14] [i_11 + 1] [9] [(signed char)21]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 3; i_12 < 23; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                {
                    var_34 = var_9;
                    arr_43 [i_12] = ((/* implicit */unsigned int) max((((/* implicit */short) var_10)), (max((arr_31 [11U] [9] [(unsigned char)1]), (arr_31 [(unsigned short)22] [17ULL] [19LL])))));
                    var_35 = ((/* implicit */unsigned long long int) arr_39 [i_12]);
                }
            } 
        } 
    }
}
