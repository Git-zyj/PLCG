/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192952
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [15LL] [15LL])))) + ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (~(arr_3 [i_0]));
                    var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2])), (var_2))), (min((((unsigned int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned int) var_14))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((3037231588U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                    var_24 = ((/* implicit */short) (~(arr_10 [i_3])));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3] = arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1];
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(arr_11 [i_3] [i_3 - 2]))))));
                            arr_24 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_6] [i_3 + 2] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 1778863656U))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_7])))))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_8] [i_3] [i_6] [i_5] [i_4 - 1] [i_3] [(signed char)17] = ((/* implicit */signed char) arr_22 [i_4 - 1] [i_4 - 1] [i_3 + 1]);
                            var_26 -= ((/* implicit */unsigned char) ((((var_1) / (arr_13 [i_3] [i_8]))) - (((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_3] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_6] [i_8]))) : (-5687763339130114281LL)))));
                            var_27 = ((/* implicit */unsigned int) ((((552757767U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (18446744073709551615ULL)))))));
                            var_28 = ((/* implicit */short) arr_0 [i_4 - 1]);
                        }
                        arr_29 [10U] [i_3] [i_3] [i_3] = arr_12 [i_3];
                    }
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)107)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                {
                    var_30 = (~(1778863664U));
                    var_31 = ((/* implicit */unsigned int) ((arr_10 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_10]))))))));
                    arr_35 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3 - 1])) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)105)) > (((/* implicit */int) arr_33 [i_9])))))));
                    var_32 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    arr_42 [i_11] [i_11] [i_11] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (2516103631U) : (2516103631U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11])))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        arr_45 [i_3 + 1] [i_13] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)170))));
                        var_33 = ((unsigned short) 552757767U);
                        arr_46 [i_3] [i_3] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_3 + 2] [i_3 + 2] [(short)19])) ? (arr_38 [i_3 + 2] [i_11] [i_12]) : (arr_31 [i_3 + 2] [i_11] [i_12])));
                        var_34 = var_1;
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_3] [i_11] [i_13])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_3))))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) arr_22 [i_3] [i_11] [i_12])) : (var_0)))));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        arr_51 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_18 [i_3 - 1]))));
                        arr_52 [i_3] [i_12] [i_14] [i_14] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-2753))));
                        arr_53 [i_3] [i_11] [i_3] [i_3] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_3] [i_3] [i_12]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_3] [i_12] [i_14]))))) : (18014398509481983LL)));
                        var_36 = ((/* implicit */int) ((unsigned char) arr_1 [i_3 - 1] [i_11]));
                    }
                    arr_54 [i_3 - 2] [i_11] [i_3] = ((/* implicit */signed char) (+(((int) arr_3 [i_3]))));
                    var_37 = ((/* implicit */int) ((var_0) << (((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_17)))) - (1)))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */short) 2516103640U);
}
