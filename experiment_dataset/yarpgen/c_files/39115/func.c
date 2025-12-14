/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39115
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) var_4))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_2 [i_0 + 2])))) : (max((((/* implicit */int) (unsigned short)3805)), ((-2147483647 - 1))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        {
                            arr_14 [i_4] [i_0] [i_0] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((878462540U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3416504746U)))))))))));
                            var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))))), (var_3)));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) (unsigned short)18949)))) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1]))));
            var_16 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((730086882) < ((+(((/* implicit */int) (_Bool)0)))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */int) (-(var_12)));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_13))))));
        }
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((var_13) >> (((((((/* implicit */_Bool) arr_17 [i_0] [i_0 + 3] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_6]))) : (arr_6 [i_0 + 3] [i_6]))) - (18219U))))) + (((((/* implicit */_Bool) ((unsigned char) 2111335323U))) ? (var_6) : (((/* implicit */unsigned int) var_8))))));
            var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_2) ? (var_12) : (((/* implicit */unsigned int) 730086879))))), (((((((/* implicit */_Bool) (short)-5119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5109))) : (arr_19 [19LL] [(unsigned char)3]))) << (((((/* implicit */int) (unsigned char)126)) - (105)))))));
        }
        var_20 = ((((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0])) || (((/* implicit */_Bool) arr_6 [8] [i_0 + 1])))) || ((!(((((/* implicit */_Bool) (unsigned char)107)) && (((/* implicit */_Bool) var_1)))))));
        arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38608)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3])) < (((/* implicit */int) arr_8 [(_Bool)0] [5] [i_0 + 2] [i_0 + 3])))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 730086890)) : (-5360928682288235300LL))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14296)) | (((/* implicit */int) (signed char)-44)))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_11 [i_7] [i_7] [i_7] [i_7]))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (max((((/* implicit */unsigned long long int) arr_22 [i_7])), (arr_19 [i_7] [i_7]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17056))) : (arr_19 [i_7] [i_7])))));
        arr_24 [i_7] = ((/* implicit */_Bool) (short)5119);
    }
    var_23 = ((/* implicit */short) var_8);
    var_24 = ((/* implicit */unsigned int) ((min((15132073699721290887ULL), (((/* implicit */unsigned long long int) (short)5118)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_25 = ((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) var_3))));
    var_26 = ((/* implicit */unsigned long long int) (unsigned char)107);
}
