/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29108
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2 + 3] [i_2])) || (((/* implicit */_Bool) (-(137619864)))))))) >= (((unsigned long long int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [18ULL]))) & (10969317960780834653ULL))), (arr_11 [i_0] [i_1 + 4] [i_1 + 4] [i_2] [i_3] [i_3] [i_0])))) ? (min((7477426112928716970ULL), (((/* implicit */unsigned long long int) 2147483647)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 974432906)))))) ^ (((arr_11 [i_4] [i_4] [i_0] [(unsigned char)1] [i_2 + 2] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [18U] [i_4])))))))));
                                arr_12 [i_0] [(unsigned short)14] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) arr_6 [i_4]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1 + 4] [3] [i_2] = ((/* implicit */unsigned char) (unsigned short)65534);
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2 - 1] [i_1] [i_0]))));
                        var_18 = ((/* implicit */unsigned short) var_5);
                        var_19 = ((/* implicit */int) var_12);
                    }
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */int) arr_16 [i_1] [i_2] [2ULL] [i_7]);
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 861066285))))) << (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_7] [i_2])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_1 + 1] [i_0])))))))))));
                        }
                        arr_22 [i_6] [(signed char)0] [6] [6ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) - (1033049752U)));
                        arr_23 [i_0] [17ULL] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((((/* implicit */_Bool) 10969317960780834642ULL)) ? (9079256848778919936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_18 [i_6] [i_1] [i_1] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48702))))))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7)))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -2086820067))));
                        }
                        for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 3) 
                        {
                            arr_28 [(unsigned char)15] [(unsigned char)9] [i_9] [(unsigned char)18] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1326973321)))))));
                        }
                    }
                    var_25 = ((/* implicit */unsigned char) -173625528);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (min((7076891438002234026ULL), (((/* implicit */unsigned long long int) 137619870)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24439)))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2382938455409435307ULL)))) : (max((var_6), (((var_1) - (1303725967994661410ULL)))))));
    var_27 = ((/* implicit */unsigned char) var_1);
    var_28 = ((/* implicit */signed char) ((7477426112928716987ULL) << (((max((((/* implicit */int) (unsigned short)35768)), (137619864))) - (137619821)))));
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                {
                    arr_38 [(unsigned short)5] [(unsigned short)5] [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)7168)) ? (arr_34 [(unsigned char)19] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54424))))))))));
                    var_29 |= ((/* implicit */int) max(((+(((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_29 [i_11] [i_11]))))), ((~(arr_29 [i_10] [i_10])))));
                }
            } 
        } 
    } 
}
