/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220499
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((17092818367293952840ULL), (1353925706415598776ULL)));
        var_17 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) > (((/* implicit */unsigned long long int) 1044480U)))))) & (((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) - (var_2))));
        arr_4 [i_0] = (!(((/* implicit */_Bool) 14181121158017013850ULL)));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_16 [0LL] [i_3] [(unsigned short)12] [i_2] [i_1] [0LL] &= ((/* implicit */unsigned long long int) ((var_13) & (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1353925706415598795ULL)))) + (-1LL)))));
                        arr_17 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) var_16);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4]))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) 4294967295U))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_26 [i_4] [i_5] [14U] [i_4] &= ((/* implicit */short) ((var_3) / (((/* implicit */unsigned int) arr_22 [i_4] [16] [i_6] [i_7 - 1]))));
                        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_7 - 1])) >> (((((((/* implicit */_Bool) var_0)) ? (1239068825200416818ULL) : (var_15))) - (1239068825200416807ULL)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (144115188075855871LL) : (((/* implicit */long long int) 16383U))))) ? (((((/* implicit */_Bool) 3103201161330893277LL)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) : (((/* implicit */int) (signed char)-49)))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_31 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_27 [i_8] [i_8 + 1])) > ((~(var_7)))));
                        arr_32 [12U] [12LL] [6ULL] [6ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [14U])) ? (((((/* implicit */unsigned int) var_10)) - (2002713875U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [6] [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                        var_22 = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            arr_35 [(_Bool)1] [i_10] = ((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_10]);
            arr_36 [12U] [i_10] [i_4] = ((((((/* implicit */_Bool) -7134811257573853362LL)) && (((/* implicit */_Bool) 2LL)))) ? (((/* implicit */unsigned long long int) arr_27 [i_4] [i_10])) : (((arr_23 [i_4] [i_4] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
            var_23 = ((/* implicit */int) (short)-19976);
            var_24 = ((/* implicit */_Bool) arr_33 [i_4]);
            var_25 = ((/* implicit */unsigned short) var_8);
        }
        var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) - (-9076927417167788890LL)))) ? (((var_8) << (((arr_34 [i_4] [8] [i_4]) - (1212781845U))))) : (((/* implicit */unsigned long long int) (-(var_4))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_23 [i_4] [i_4] [i_4]) : (arr_23 [i_4] [i_4] [i_4]))))));
    }
    var_28 = ((/* implicit */int) var_15);
}
