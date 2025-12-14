/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26081
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
    var_10 ^= ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((2008331326U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)7680))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 4015727399U))) ? (max((((/* implicit */unsigned int) (short)-7680)), (var_0))) : (max((4015727399U), (((/* implicit */unsigned int) -911154117))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) | (((long long int) (short)-17097)))));
        var_11 = ((/* implicit */signed char) var_0);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_12 &= ((/* implicit */long long int) ((min(((-(((/* implicit */int) (short)7676)))), (-911154109))) > (var_5)));
        var_13 += ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [10U] [10U]) : (arr_3 [(short)4] [(short)4])))) ? (((((/* implicit */_Bool) arr_3 [4ULL] [4ULL])) ? (((/* implicit */int) arr_4 [(signed char)14])) : (((/* implicit */int) arr_4 [(signed char)12])))) : (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12]))))))))), (((((/* implicit */_Bool) 3920954658U)) ? (arr_3 [0LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)12])))))));
        arr_5 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) (((((~(((/* implicit */int) var_9)))) & (((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1])) + (24159))) - (24))))))) << ((((-(((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) - (8810819866726145396ULL))))) - (17344528063145917354ULL)))))) : (((/* implicit */signed char) (((((~(((/* implicit */int) var_9)))) & (((((((((/* implicit */int) arr_4 [i_1])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_4 [i_1])) + (24159))) - (24))) - (39349))))))) << ((((((-(((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) - (8810819866726145396ULL))))) - (17344528063145917354ULL))) - (8765570857270118783ULL))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) 3920954658U);
        var_14 = max(((-((+(arr_3 [i_1] [i_1]))))), (((/* implicit */long long int) 279239897U)));
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) var_5);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((int) (short)-7690));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_15 = ((/* implicit */int) ((unsigned int) 0U));
        /* LoopSeq 4 */
        for (int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            var_16 += ((/* implicit */unsigned int) ((long long int) arr_15 [i_4 - 2] [i_3]));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4])) ? (((int) (short)-32742)) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_6)))))));
            var_18 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_14 [i_3] [(signed char)22])) - (((/* implicit */int) (unsigned short)12))))));
            var_19 = ((/* implicit */int) 16U);
        }
        for (signed char i_5 = 3; i_5 < 22; i_5 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_5])) / (((/* implicit */int) arr_14 [i_3] [i_5])))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(arr_16 [i_5] [i_5 - 1] [4LL]))))));
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 7U)) : (arr_16 [i_5] [i_5] [i_3])))));
            var_23 = ((/* implicit */_Bool) arr_16 [(signed char)23] [(signed char)7] [(signed char)23]);
        }
        for (signed char i_6 = 3; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_6 - 1] [i_6]))) : (4ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
            var_25 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_14 [i_3] [7U])))));
            arr_22 [i_3] [i_3] [i_3] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [2U] [i_3] [i_6])) && (((/* implicit */_Bool) arr_20 [i_3] [i_6] [i_6]))))));
            var_26 &= ((/* implicit */long long int) ((unsigned int) (-2147483647 - 1)));
        }
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) -911154117);
            var_27 = ((/* implicit */long long int) (+(4015727386U)));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                for (long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    {
                        arr_31 [i_3] [i_8] [i_3] = ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_9 - 1] [i_9 + 1]))) : (arr_23 [i_9 - 1] [i_8 + 2]));
                        arr_32 [i_9] [i_9] [i_9] [i_8] [i_7] = (-(((4128401632685604870LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))))));
                        arr_33 [(_Bool)1] [i_8] = ((/* implicit */long long int) arr_27 [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1]);
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned short) var_3);
}
