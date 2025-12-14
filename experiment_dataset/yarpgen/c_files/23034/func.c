/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23034
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) 4294967295U);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = min((max((arr_14 [i_1] [i_0] [i_2] [9ULL]), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((((/* implicit */int) (signed char)-27)) + (47))) - (20)))))))), (((/* implicit */unsigned int) min(((short)15831), (((/* implicit */short) arr_10 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4]))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(var_0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = var_1;
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 7; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) (short)-15831)) ? (arr_20 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) (short)32767);
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_8] [i_5] [i_5] [i_5])) ? (-2111046411607446884LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 5594810600856998011LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) max((min(((unsigned short)18832), (((/* implicit */unsigned short) (signed char)54)))), (((/* implicit */unsigned short) ((-2111046411607446897LL) != (((/* implicit */long long int) 0U))))))))));
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (5594810600856998011LL))))), (max(((~(2232634649923206197LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -4132984142947196117LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967284U))))))));
                            arr_34 [i_5] [i_6] [i_5] [i_5] = -2111046411607446920LL;
                        }
                        for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) ((unsigned short) var_0))), ((~(2379205336U))))));
                            var_20 = ((/* implicit */short) max(((+(((/* implicit */int) arr_19 [(unsigned short)0] [i_7 + 2] [i_7 + 1])))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)1984)) - (1984)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            for (unsigned short i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_9 [i_5] [(signed char)14] [i_5])) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))));
                    arr_42 [i_5] [i_5] [(short)9] [i_13] = ((/* implicit */unsigned short) var_9);
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_19 [i_13 - 1] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_19 [i_13 + 2] [i_13 - 1] [i_13 + 2]))))), (((unsigned int) 2111046411607446875LL))));
                    arr_43 [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_13] [i_5] [i_13 + 1]))) >= (2111046411607446861LL))), (((((/* implicit */int) arr_30 [i_13] [i_5] [i_13 + 2] [i_13 + 2] [i_5] [i_13 + 1])) != (((/* implicit */int) arr_30 [i_13] [i_5] [i_13] [i_13 - 1] [i_5] [i_13 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_5] [i_5])) || (((/* implicit */_Bool) (unsigned short)39459))))), ((-(-2LL)))));
                        var_24 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned int) arr_2 [i_5])), (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_14])) < (((/* implicit */int) (_Bool)0)))))))), (((/* implicit */unsigned int) (short)-15849))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((9223372036854775805LL), (((/* implicit */long long int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned char)250)) || (var_11))), (((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) (unsigned char)25)))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (5U)))) || ((!(((/* implicit */_Bool) (unsigned short)0))))))));
        var_27 = ((/* implicit */_Bool) var_8);
    }
    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_13 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7))) : (2147483136U))), (((/* implicit */unsigned int) var_1))));
        arr_54 [i_17] = (+(max((9223372036854775794LL), (((/* implicit */long long int) arr_8 [i_17] [i_17] [i_17])))));
    }
}
