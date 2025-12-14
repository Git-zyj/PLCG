/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191054
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 474094256U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))) | (((/* implicit */int) (signed char)(-127 - 1)))));
    var_15 = ((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_2) : (arr_3 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_9)))))) / (((/* implicit */int) ((unsigned char) (~(-934627442)))))));
                        var_18 += ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_0] [(signed char)2] [i_2] [i_3]));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_6)))));
        var_20 = max((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */long long int) arr_4 [i_0])), (arr_3 [i_0] [i_0]))));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((((short) arr_19 [i_5] [i_6] [i_6] [i_6])), (((/* implicit */short) arr_10 [i_8 - 2]))));
                                var_23 = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_5] [i_8 - 1] [i_5]))) == (arr_6 [i_8 - 2] [i_8] [i_8] [i_8 - 2])))), (var_7)));
                                arr_23 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_5] [i_7]))));
                                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) arr_9 [i_4] [i_6] [i_4] [i_7])), (arr_15 [i_5] [i_5])))))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */long long int) (~(((((/* implicit */int) arr_16 [i_6] [i_6] [i_5] [i_6])) ^ (((/* implicit */int) (unsigned char)243))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_26 &= ((/* implicit */signed char) max((arr_3 [i_4] [i_4]), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) arr_16 [i_9] [(short)18] [i_6] [i_9])))))));
                        var_27 = ((/* implicit */short) var_9);
                    }
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_28 = ((short) arr_13 [i_6]);
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_29 [i_4] [i_5] [i_5] [i_6] [i_6] [i_5])))));
                    }
                }
            } 
        } 
        arr_32 [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)251)), (10184639982857320413ULL)));
    }
    var_29 = ((/* implicit */short) var_12);
}
