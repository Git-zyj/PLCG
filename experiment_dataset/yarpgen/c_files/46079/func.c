/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46079
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (var_14) : (((/* implicit */int) var_7)))))));
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) 0U);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) var_13);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
                {
                    arr_10 [i_0 + 1] [20ULL] [20ULL] [i_0 + 1] = ((/* implicit */signed char) 0U);
                    arr_11 [i_0] [i_2] [i_2] [i_0 - 1] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_9 [i_0] [i_0 + 1] [i_2])), (var_12)))));
                    var_23 = ((/* implicit */short) ((_Bool) arr_2 [i_0] [i_2]));
                    arr_12 [i_0 + 1] [i_1 + 2] [i_2] [i_0 + 1] = ((/* implicit */_Bool) (short)-1);
                }
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(0U)))), (arr_1 [i_1 - 1])))) ? (((((((/* implicit */int) arr_13 [i_3] [(unsigned short)2])) >= (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 1])))) ? ((~(((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) (short)1199)))) : (((/* implicit */int) var_6))));
                    var_25 = ((/* implicit */unsigned int) -2040808893795888699LL);
                }
                for (short i_4 = 4; i_4 < 21; i_4 += 3) 
                {
                    var_26 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (4294967295U)))) ? (max((var_12), (((/* implicit */long long int) 2630642638U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) var_1))))))));
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (((((/* implicit */_Bool) 1876266886U)) ? (7055708028190342395LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_17 [i_4 - 4] [i_1 + 2]), (arr_17 [i_4 - 4] [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_1 - 1])) ? (arr_17 [i_4 - 3] [i_1 - 2]) : (arr_17 [i_4 - 3] [i_1 - 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_17 [i_4 - 1] [i_1 + 1])))));
                        arr_21 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1876266886U)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (signed char)17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1] [i_0 - 1]))) : (max((((/* implicit */unsigned int) var_13)), (50498929U))))) <= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_0 [i_0])))))));
                        var_29 = ((/* implicit */signed char) var_8);
                        arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_17 [i_0 - 1] [(unsigned short)9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)19] [i_0 - 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(((/* implicit */int) var_0)))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 2147483647)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_32 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-27));
                    }
                }
            }
        } 
    } 
}
