/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209100
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_6))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_1 [i_0 + 2] [i_0 - 2])))) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2))))))) ? (((/* implicit */int) ((arr_2 [i_0] [(unsigned short)0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_0 - 2])))))) : ((~(((((/* implicit */_Bool) 916350453)) ? (((/* implicit */int) (short)11003)) : (((/* implicit */int) (unsigned char)3))))))));
                        var_14 -= ((/* implicit */signed char) arr_5 [i_3] [i_2] [i_1]);
                        var_15 = ((/* implicit */_Bool) (~((~(var_4)))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0 - 2]) : (arr_6 [i_0 + 1])))) ? (var_2) : (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
                        var_17 = ((/* implicit */_Bool) (unsigned char)84);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */unsigned int) (unsigned char)210))))) ? (((/* implicit */int) ((short) var_3))) : (((223522865) << (((223522865) - (223522865)))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_1))));
                    }
                    for (int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [(short)10] [i_5] [i_5] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) 385722576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_5] [0LL] [i_5 - 1]))) : (arr_8 [i_0] [i_1] [i_2] [i_5]))))) <= (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_2] [4]))))) ? (((/* implicit */unsigned long long int) 385722600)) : (arr_2 [i_1 + 1] [i_5 + 1])))));
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_10), (arr_3 [i_1] [7U] [i_1]))))))) : ((~(arr_2 [i_1] [i_2])))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_18 [i_6] [i_6] [i_6] [i_6] [7ULL] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_6] [i_2] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_6] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_6] [i_6] [i_1])) : (((/* implicit */int) arr_14 [i_6] [i_0 + 1]))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-223522865) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)46))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (var_9)));
                        }
                        arr_21 [i_0] [i_6] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1 + 1] [i_1 - 1]);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)13822))))));
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) (_Bool)0);
                        arr_24 [i_8] [i_8] [i_2] [(signed char)6] [i_8] = ((/* implicit */unsigned long long int) arr_14 [i_8] [(unsigned short)7]);
                        arr_25 [i_0 - 2] [i_8] [i_0 - 2] [i_8 - 3] = ((/* implicit */short) (~(var_4)));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [2] [i_2])) ? (((/* implicit */unsigned long long int) (-((+(var_2)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [6U])) : (223522888)))), ((-(arr_8 [(signed char)8] [i_2] [i_1] [(signed char)8])))))))));
                        var_27 ^= ((/* implicit */short) ((max((arr_0 [i_8 - 2]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_8])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_8 - 2] [0U] [i_2 - 1] [i_0]))) >= ((~(var_3)))))))));
                    }
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) ((signed char) var_8))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_1 - 1] [i_2] [i_2])) ? (arr_8 [i_2] [i_1] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4442))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 + 2] [i_0 - 2] [i_0 + 1])) >> (((((/* implicit */int) arr_14 [i_1] [i_1 - 2])) - (1775)))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 3) /* same iter space */
    {
        arr_28 [i_9] = ((/* implicit */int) var_9);
        arr_29 [10ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)4] [i_9] [(short)4])) ? (((((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) (unsigned short)59019)) - (58999))))) : ((-(((/* implicit */int) (unsigned short)65523))))))) ? (arr_4 [i_9] [i_9] [i_9] [i_9]) : (arr_8 [(unsigned short)2] [i_9 + 1] [(unsigned short)2] [i_9])));
    }
}
