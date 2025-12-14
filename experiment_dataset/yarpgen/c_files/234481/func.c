/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234481
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_15 = (-(arr_12 [i_2] [i_2] [i_2] [i_2 + 1]));
                            arr_16 [i_4] = ((((/* implicit */_Bool) ((int) 0LL))) || ((!(((/* implicit */_Bool) var_13)))));
                            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0LL)) ? (0LL) : (-1LL)))));
                            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (0LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [i_3])))))));
                            arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] = (-((+(4294967295U))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = arr_4 [i_2] [i_1] [i_0];
            }
            for (int i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
            {
                arr_21 [i_0] |= (-(4294967295U));
                arr_22 [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_5] [i_5 + 4])) : (((/* implicit */int) ((var_11) == (4180791082374349296LL))))));
            }
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4180791082374349296LL)) ? (arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) : (arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_6]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) arr_19 [i_0] [i_0]);
            arr_31 [i_1] = ((/* implicit */unsigned short) (((~(-4924775479879140481LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164)))));
        }
        var_21 = ((/* implicit */unsigned char) (+(var_9)));
    }
    /* vectorizable */
    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 4) 
    {
        var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-10832)) : (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_9 + 1] [i_9])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)12074))));
            /* LoopNest 2 */
            for (short i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_42 [i_12] = ((/* implicit */_Bool) ((long long int) (unsigned short)55281));
                        arr_43 [i_9] [i_10] [i_10] [i_10] [i_12] |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                        arr_44 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_11 - 1] [i_9 - 1])) ? (arr_3 [i_11 - 1] [i_9 - 2]) : (arr_3 [i_11 - 2] [i_9 - 3])));
                    }
                } 
            } 
        }
    }
    var_24 = (-(((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) (_Bool)0))))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4180791082374349296LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)24453))))))));
}
