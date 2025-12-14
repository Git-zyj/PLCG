/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32542
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
    var_17 = ((/* implicit */long long int) (unsigned short)11105);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [10] [i_1])) ? (-1440550220) : (((/* implicit */int) arr_6 [i_2] [i_2] [(unsigned short)5] [(unsigned short)5]))))));
                    arr_8 [i_2 - 1] [i_1] [14ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)91))));
                }
            } 
        } 
        arr_9 [2LL] [i_0] = ((/* implicit */unsigned char) ((-1598252478570523731LL) != (-4848613458335765495LL)));
        arr_10 [13] = ((/* implicit */unsigned long long int) (+(arr_3 [(short)10])));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3])))) ? ((+(arr_3 [i_3]))) : (((/* implicit */long long int) (-(var_14))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) - (((/* implicit */int) arr_6 [i_3] [i_3] [i_4] [i_4])))))))));
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_7 [i_3])) : (var_13))), (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) var_12))))));
            var_22 = ((/* implicit */long long int) arr_5 [i_3] [i_3] [i_4]);
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_3] [i_4])) || (((/* implicit */_Bool) arr_11 [i_4])))) ? (((((((/* implicit */long long int) 4294967295U)) != (arr_3 [i_4]))) ? (-4848613458335765513LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))))) : (((/* implicit */long long int) (-(((var_5) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))))))))));
            arr_15 [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_5))))) ? (4848613458335765507LL) : (((((/* implicit */_Bool) arr_13 [12LL] [i_3])) ? (arr_3 [14LL]) : (((/* implicit */long long int) arr_0 [i_4])))))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18007896315662452536ULL) - (((/* implicit */unsigned long long int) 1048568U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) : (arr_0 [i_3])))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) (signed char)7)) ? (arr_13 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1755252554017710244ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [16U]))) : (var_16)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_11 [i_5])) : (var_2)))))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_4 [i_3] [18LL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_16 [9U] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))))) ? (((/* implicit */int) (unsigned char)164)) : (((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-86))))))) : (max((((((/* implicit */_Bool) -4848613458335765507LL)) ? (arr_16 [i_7] [i_6] [i_5]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))))));
                        var_26 |= (~(min((((/* implicit */unsigned int) arr_14 [i_3])), (2063272201U))));
                        arr_23 [7U] [i_7] [i_5] [i_5] [i_5] [(short)7] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (signed char)-88)), (arr_18 [i_5] [i_5] [i_5] [i_5])))));
                        var_27 = ((/* implicit */long long int) (-(var_11)));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_8] [i_8 - 2] [i_8])), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (((((/* implicit */_Bool) arr_12 [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (arr_12 [i_8 - 1])))));
        arr_28 [i_8] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2])) ? (((/* implicit */int) arr_6 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8])) : (((/* implicit */int) arr_6 [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 + 1]))))), ((-(var_0))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_31 [(unsigned char)2] = ((arr_22 [i_9] [i_9] [i_9] [i_9]) | (arr_22 [8U] [i_9] [i_9] [0U]));
        var_30 = ((/* implicit */signed char) (_Bool)1);
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_17 [i_9]))));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
        var_32 -= ((/* implicit */short) (-(((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) (~(-2394861404621276617LL)));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((/* implicit */int) var_6)))))));
    }
}
