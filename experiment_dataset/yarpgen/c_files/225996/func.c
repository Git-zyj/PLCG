/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225996
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    arr_6 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) var_7);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_2 + 2] [i_2 + 1] [i_3 + 1])))) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) max((((short) var_10)), (var_9))))));
                                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_4 [i_1] [i_2 - 1] [i_3 + 2]), (arr_4 [i_1] [i_2 - 1] [i_3 - 1])))) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_3 + 1])) < (((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_3 + 2])))))));
                                var_13 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [(signed char)0] [i_4])) ? (((/* implicit */int) arr_0 [i_0])) : (var_6)))))) ? (((((((/* implicit */int) arr_2 [(signed char)2] [i_4])) + (2147483647))) << (((/* implicit */int) ((9223372036854775808ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2)))))))) : (((/* implicit */int) min((((/* implicit */short) arr_11 [i_3 + 2])), (arr_8 [i_0] [i_2 + 2] [i_0] [i_3] [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21))) : (((((/* implicit */unsigned long long int) 1937422913)) | (10715877063613909910ULL)))))));
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0]))))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+((~(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_8 [i_6] [i_5] [i_5] [i_1] [i_0]))))))))))));
                                arr_22 [i_0] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1]), (arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */int) ((short) arr_10 [i_1] [i_2 + 1] [i_2] [i_2 + 2] [i_2 - 1]))) : (((arr_10 [i_1] [i_2 + 2] [(short)6] [i_2 + 1] [i_2 + 2]) & (arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 - 1])))));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775808ULL))))))), ((-(((/* implicit */int) arr_16 [i_0] [(short)22] [i_2] [i_0] [i_0]))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(((unsigned long long int) ((short) var_2)))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                {
                    var_17 -= ((/* implicit */unsigned short) (!(((((/* implicit */int) ((short) var_2))) != ((+(((/* implicit */int) var_2))))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_1] [i_0])) * (((/* implicit */int) arr_8 [i_7] [i_7] [i_0] [i_1] [i_0]))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) (((~(((/* implicit */int) arr_4 [(signed char)24] [i_1] [i_7])))) != (((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) (unsigned char)155)))))))));
                    arr_26 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_7] [i_7])))) == (((/* implicit */int) arr_16 [i_7] [i_0] [i_1] [i_0] [i_0]))));
                    var_19 ^= ((/* implicit */long long int) var_2);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0] [i_1] [i_8] [i_9]))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-73)) > (((/* implicit */int) (signed char)-69))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (short i_12 = 4; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_41 [i_0] [i_0] [i_1] [i_0] [i_11] [i_12 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) == (var_5))) ? (((/* implicit */int) arr_8 [i_12 - 4] [i_12 + 1] [i_0] [i_1] [(signed char)17])) : (((/* implicit */int) arr_5 [i_12 - 2]))));
                                arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-6149)))))));
                                arr_43 [(short)16] [i_0] [i_8] [i_11] [i_12] = ((/* implicit */long long int) ((signed char) 10715877063613909910ULL));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_11)) - (((/* implicit */int) arr_15 [i_8] [i_1] [i_0] [i_0]))))));
                }
                arr_44 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [(unsigned short)9] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((((/* implicit */int) (unsigned char)197)) << (((9223372036854775808ULL) - (9223372036854775803ULL))))))));
                var_23 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_24 = ((/* implicit */int) (~(var_8)));
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-12365)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)95)))))));
    var_26 = ((/* implicit */signed char) var_5);
    var_27 = min((((/* implicit */int) (!(((/* implicit */_Bool) (short)17))))), (var_5));
}
