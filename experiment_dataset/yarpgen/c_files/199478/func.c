/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199478
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_1 [4]))) && (((/* implicit */_Bool) ((signed char) (unsigned short)7710))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(max((arr_12 [i_0 + 1] [0LL] [i_2] [(unsigned short)4] [i_4]), (((/* implicit */long long int) var_6))))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (((unsigned long long int) var_13)))))))));
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-69)), (var_13))))));
                                var_21 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */int) max(((short)-26991), (var_15)))), (arr_1 [i_0 + 1]))));
                                arr_13 [3] [(signed char)1] [i_1] [(signed char)3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [(signed char)3] [i_2] [i_1]))))), ((short)21702)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) min((max((arr_5 [i_0 - 1] [i_0 - 1] [i_1] [i_0 + 1]), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((unsigned short) arr_5 [(signed char)2] [i_0 - 1] [i_1] [i_0 + 1])))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [6LL])), (var_14)))) || (((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) arr_7 [i_0 + 1] [(unsigned char)10] [(unsigned short)4]);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_1 [0LL]))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [(short)8]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 9; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_29 [i_9] [i_8] [7] [(signed char)7] = ((/* implicit */unsigned char) ((max((((unsigned long long int) arr_12 [(_Bool)1] [i_9] [8] [(short)8] [i_9])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [2LL] [(unsigned char)2] [i_9]))))))) < (((/* implicit */unsigned long long int) -2108660269))));
                        arr_30 [i_0] [i_7] [7] [(signed char)0] [(short)10] [4U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_5)) & (((unsigned int) min((((/* implicit */unsigned long long int) var_12)), (var_17))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_26 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)55))));
                            var_27 = ((/* implicit */signed char) (short)-27002);
                            arr_35 [i_0 - 1] [i_7] [(signed char)7] [(unsigned short)10] [5U] [(signed char)2] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                            arr_36 [(signed char)5] [(unsigned short)9] [i_8 + 2] [2] [7LL] = ((/* implicit */unsigned char) ((long long int) arr_32 [(unsigned char)9] [i_0 + 1]));
                        }
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_12 [i_7] [i_9] [6] [i_9] [i_0 - 1]) : (arr_12 [i_0] [i_9] [i_0] [i_9] [i_0 + 1])))) ? ((-((+(((/* implicit */int) arr_8 [i_0] [i_7] [i_9])))))) : (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        for (int i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_42 [i_11] [i_12 - 1])), (min((max((((/* implicit */long long int) 2108660268)), (arr_43 [i_11]))), ((-(arr_43 [i_12]))))))))));
                /* LoopSeq 2 */
                for (int i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    var_31 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(-2108660269))))))));
                    var_32 = ((/* implicit */unsigned int) ((int) var_15));
                    var_33 = (~(((/* implicit */int) arr_42 [(unsigned char)14] [3])));
                    var_34 = ((/* implicit */unsigned short) min((2108660268), (((/* implicit */int) ((unsigned char) -1172066992)))));
                }
                for (int i_14 = 3; i_14 < 12; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 14; i_16 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_11)))));
                                var_36 = ((/* implicit */short) 8517408647401463888LL);
                                var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) var_7))), (((((/* implicit */long long int) -2108660273)) - (arr_44 [10U])))))), (18446744073709551610ULL)));
                            }
                        } 
                    } 
                    arr_54 [i_14 - 3] = ((/* implicit */signed char) (short)16384);
                    arr_55 [(short)8] [14U] [i_12 - 1] [i_14] = ((/* implicit */unsigned char) var_2);
                }
                var_38 = arr_38 [7LL];
                arr_56 [1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -2108660291)) ? (-1172066992) : (((/* implicit */int) arr_42 [i_12 + 1] [i_12 + 1])))), (((((/* implicit */_Bool) ((signed char) arr_37 [i_11] [(unsigned char)7]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_10))))) : (var_2)))));
                arr_57 [(unsigned char)1] [9LL] [(unsigned short)5] = ((/* implicit */signed char) var_16);
            }
        } 
    } 
}
