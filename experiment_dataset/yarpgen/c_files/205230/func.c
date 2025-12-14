/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205230
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) var_11);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_21 ^= ((/* implicit */int) ((arr_0 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [10]), (arr_3 [(_Bool)1] [(_Bool)1])))))));
                    arr_7 [i_2] [i_2] [i_1] = ((/* implicit */short) arr_6 [i_1]);
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_4 + 2] [i_5])) ? (2914447847898449327ULL) : (8666155728016526890ULL))))));
                                var_23 -= ((/* implicit */unsigned int) ((((_Bool) (+(((/* implicit */int) arr_2 [i_3]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_13 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 + 2])))) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)26030))));
                                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_16 [2] [i_6] [i_3] [(unsigned short)10] [2]))) ? (((/* implicit */int) ((-2095563743314302615LL) == (((/* implicit */long long int) arr_1 [i_0]))))) : (((/* implicit */int) (unsigned char)194))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [(unsigned char)8] [i_0] [i_6] [i_7] [i_3])) ? (-1247433905) : (((/* implicit */int) var_15))))), (((1018489699U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)8])))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49376))))) : (arr_0 [i_0] [i_3]))))));
                                arr_22 [(unsigned short)10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)13519))))) / ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28660)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_14)));
                            }
                        } 
                    } 
                }
                for (int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    arr_27 [i_0] [i_1] [i_8] = ((/* implicit */long long int) max((0ULL), (((((arr_23 [i_1] [i_8 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_8] [i_0]))) | (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))) : (var_5)))))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_18 [(unsigned short)4] [(unsigned short)4]))));
                }
                for (long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_4 [i_0] [i_9])) && (((/* implicit */_Bool) (unsigned char)13)))) ? (((/* implicit */int) arr_23 [i_1] [i_9 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_9 + 1])) != (((/* implicit */int) (unsigned short)24)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_28 &= min((((((/* implicit */int) arr_20 [i_9 + 1] [i_9 + 2] [i_9] [i_9 + 1] [i_9])) << (((((/* implicit */int) (signed char)62)) - (56))))), (((((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_20 [i_9 - 1] [i_9 + 1] [i_9] [i_9 - 1] [i_10])) : (((/* implicit */int) arr_20 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_10])))));
                        var_29 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_10] [i_1] [i_9] [i_9] [i_10]))))), (((((/* implicit */_Bool) (unsigned short)50781)) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_9])) ? (2420231443U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3780))) : (var_0)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        for (signed char i_12 = 1; i_12 < 14; i_12 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) arr_38 [13LL] [i_12 + 2] [4LL] [7] [i_1] [4LL] [4LL]);
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (short)30404))));
                                arr_39 [i_1] [i_1] [7LL] [i_11] [i_1] = ((/* implicit */int) arr_15 [i_12 + 2] [i_1]);
                                arr_40 [i_11] [i_11] [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 + 1] [i_9 + 2] |= ((unsigned char) (~(((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12 + 2])) | (((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                }
                arr_41 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_1] [i_1]);
                var_32 = ((/* implicit */unsigned char) arr_17 [i_1]);
                var_33 &= ((/* implicit */unsigned char) (signed char)117);
            }
        } 
    } 
    var_34 -= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_17))));
}
