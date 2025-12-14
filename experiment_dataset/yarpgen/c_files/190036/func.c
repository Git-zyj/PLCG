/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190036
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
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) var_10))) ? (min((var_8), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) var_15);
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] = ((/* implicit */unsigned char) (~(var_9)));
            arr_11 [i_1 + 1] [i_1] = (~(((unsigned long long int) ((arr_0 [i_1] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1])))))));
            var_19 &= ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((long long int) arr_8 [i_1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */unsigned char) ((arr_13 [i_1 + 1] [i_1 - 1] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            var_20 = ((/* implicit */unsigned long long int) (-(var_13)));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (var_8) : (var_8)))));
            arr_16 [i_3] &= ((/* implicit */_Bool) arr_8 [i_1 - 1]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
        {
            arr_19 [i_1] [i_4] = ((/* implicit */_Bool) ((((-355749125) + (2147483647))) << (((((/* implicit */int) (unsigned char)178)) - (178)))));
            var_21 = ((/* implicit */signed char) min((((arr_0 [i_1 + 1] [i_1 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), ((!(((/* implicit */_Bool) arr_0 [i_4] [(signed char)7]))))));
            arr_20 [i_1] = ((/* implicit */signed char) var_3);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_33 [i_7] &= ((/* implicit */unsigned int) ((((var_16) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_29 [8U] [i_7] [i_6 + 1] [i_7 - 1])))) & (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) var_5))))));
                            arr_34 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_12))))));
                            var_22 = ((/* implicit */int) ((signed char) arr_4 [i_1]));
                            arr_35 [i_1] [i_8] [i_7 - 1] [i_6 + 1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (-(arr_4 [i_1]))));
                            arr_36 [i_1] [i_5] [i_5] [i_7] [i_5] [i_1] = ((((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) var_11)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [15U])) : (((/* implicit */int) var_16))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) var_11);
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-355749127) + (2147483647))) << (((355749125) - (355749125)))))) ? (((/* implicit */int) ((8946997513081720866LL) <= (((/* implicit */long long int) 355749127))))) : ((((_Bool)0) ? (-1202511557) : (((/* implicit */int) var_14))))));
            }
        }
        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_41 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_22 [i_9] [i_9]);
            var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_37 [i_1] [i_9] [i_1])), (((((/* implicit */_Bool) ((var_12) ? (arr_0 [i_1] [i_9]) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) (-(var_1)))) : (max((((/* implicit */long long int) var_1)), (var_15)))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) var_16);
        var_27 &= ((/* implicit */_Bool) (-((-(arr_5 [4])))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_11] [i_11] [i_11]))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_11] [(_Bool)1])) ? (((/* implicit */unsigned int) var_0)) : ((~(var_7)))));
        arr_46 [i_11] [i_11] = (+(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
    }
}
