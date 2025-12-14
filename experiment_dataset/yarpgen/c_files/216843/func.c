/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216843
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((min((arr_0 [i_0 - 1]), (((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) ((unsigned char) (signed char)110)))));
        arr_5 [i_0] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_18)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_1 - 1])) / (var_15)));
        arr_11 [i_1] = (!(((/* implicit */_Bool) var_15)));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_16 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_1 [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_13 [(short)7] [i_2])) - (102)))))) ? (10834127768339966876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned short)1))))))))) || (((/* implicit */_Bool) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)15))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned short)4224))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_29 [10] [i_4] [i_5] [i_4] = ((((arr_7 [i_3 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) arr_23 [i_4] [i_4] [i_5] [i_6]))))) < (((/* implicit */int) var_16)));
                            arr_30 [(unsigned short)0] [2LL] [(signed char)6] = var_4;
                        }
                    } 
                } 
            } 
            arr_31 [i_3] = ((/* implicit */long long int) arr_27 [i_3] [i_4] [(signed char)0] [i_3 - 1] [i_4]);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(arr_1 [i_3]))))));
            arr_34 [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 382827993U)) ? (-250643315) : ((-(443208771)))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [(_Bool)1] [(signed char)11] [i_3] [i_3])))) ^ ((((_Bool)1) ? (8589934588ULL) : (((/* implicit */unsigned long long int) -1912271140)))))))));
        }
        arr_35 [2U] |= ((/* implicit */unsigned short) (unsigned char)92);
        arr_36 [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_3] [(unsigned char)7])) : (((/* implicit */int) (unsigned char)63))));
        arr_37 [(_Bool)1] [i_3 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_33 [i_3]))), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) ^ (var_18)))))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (arr_33 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((3912139299U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) 4294967295U);
    var_23 = ((/* implicit */_Bool) var_2);
}
