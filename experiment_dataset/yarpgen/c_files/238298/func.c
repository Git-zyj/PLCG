/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238298
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
    for (int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4406991817886112004LL)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)-365))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) -4406991817886112023LL)) ? (669846994699530356ULL) : (((/* implicit */unsigned long long int) 4406991817886112023LL))))));
                        var_20 = ((/* implicit */signed char) ((10431994130810930950ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])))));
                        var_21 = ((/* implicit */signed char) arr_6 [i_2] [i_2 - 1]);
                        var_22 = var_18;
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_2 [i_2] [i_2]))));
                        var_24 &= ((/* implicit */short) arr_6 [i_0 - 3] [i_1]);
                        arr_13 [(unsigned short)11] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_2]);
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -4406991817886112003LL)), (8014749942898620668ULL)));
                            arr_17 [i_1] [i_1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 3]);
                            arr_18 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_4] [6])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_17)))) : (arr_4 [i_0 - 3] [i_0 - 3] [i_2 + 1])));
                            var_26 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (arr_15 [i_0] [i_1] [i_1] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                            arr_19 [i_0 - 2] [i_1] [i_2] [11] [(short)10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_7 [i_0] [(signed char)2] [i_0 - 1] [(signed char)2])) ? (arr_7 [i_0 - 4] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */int) (unsigned char)225))))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 1) 
                        {
                            arr_23 [i_2 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 4406991817886112023LL)) ? (12158062622435994017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32)))));
                            arr_24 [i_0 - 2] [(unsigned char)0] [i_2] [(_Bool)1] [(signed char)8] = ((/* implicit */unsigned short) arr_4 [i_2] [i_4] [i_6]);
                        }
                        var_27 &= ((/* implicit */signed char) (unsigned short)10447);
                    }
                    arr_25 [i_0] = ((/* implicit */_Bool) var_12);
                    arr_26 [i_2] [i_2] [6LL] [(unsigned char)13] = ((/* implicit */_Bool) (signed char)122);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_21 [i_7] [(unsigned short)0] [(unsigned short)3] [9U] [i_7] [i_7] [(unsigned short)0])), (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_7] [i_7])) != (((/* implicit */int) arr_1 [i_7])))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */long long int) arr_10 [i_7] [i_7]);
    }
    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) arr_31 [i_8]);
        arr_32 [i_8] = (-(((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((/* implicit */int) arr_30 [i_8] [i_8])) : (((/* implicit */int) (unsigned char)163)))));
        arr_33 [i_8] = ((/* implicit */unsigned char) arr_30 [i_8] [i_8]);
    }
}
