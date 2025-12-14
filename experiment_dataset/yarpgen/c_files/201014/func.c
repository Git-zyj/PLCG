/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201014
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (_Bool)0)), (var_10))))))));
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */unsigned int) ((((var_8) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        var_23 -= ((/* implicit */unsigned short) ((arr_4 [i_1]) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */_Bool) ((unsigned short) var_15));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) (~(-6722527695751556375LL))));
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? ((~(var_18))) : (((unsigned int) arr_6 [i_2]))))) ^ (min((((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_2] [i_2]))), (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) ((arr_13 [i_2] [i_2] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_6] [i_4])))))) : (((/* implicit */int) arr_16 [i_6 - 1] [i_3] [i_4] [i_5] [i_4] [i_4]))))));
                                var_27 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3323469303U)) && (((/* implicit */_Bool) var_2)))))) + (((((/* implicit */unsigned long long int) arr_0 [i_2])) * (15ULL)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_15 [i_2] [i_2] [i_3] [i_2])))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)34)) - (((/* implicit */int) var_11))))), (-6722527695751556356LL))) : (((/* implicit */long long int) (~((+(var_8))))))));
                    var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_2] [i_3] [i_4] [i_2] [i_4] [i_3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)204))))) : (((unsigned long long int) var_13))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_9 [i_2]))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned short) var_15)), (var_17))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) ((signed char) min((-3495694264040405587LL), (((/* implicit */long long int) (unsigned char)204)))));
                                arr_31 [i_11] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_1)), (arr_30 [i_7] [i_8] [i_9] [i_10] [i_11] [i_7] [i_8 + 3]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_8 + 2] [i_8 + 3])) < (((/* implicit */int) (_Bool)1)))))));
                                var_33 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)216))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) ((min((arr_19 [i_8 - 1] [i_8 + 2]), (arr_19 [i_8 - 1] [i_8 + 2]))) ? (((/* implicit */int) ((_Bool) 14590640809713225496ULL))) : (((int) ((arr_25 [i_7] [i_8] [i_7] [i_7]) * (var_10))))));
                }
            } 
        } 
    } 
}
