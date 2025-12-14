/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27491
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-5948355042234341037LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_2 [(signed char)6]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [(unsigned char)7] [(short)2])))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_0) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (!(var_0))))))) ? (min((((/* implicit */unsigned long long int) ((var_11) && (((/* implicit */_Bool) var_3))))), (((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_1)))), (((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (max((((/* implicit */unsigned int) 32512)), (var_9)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_16 [i_4] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) arr_10 [i_3] [i_3])), (var_14))));
                    var_18 = ((/* implicit */unsigned int) (-(((arr_6 [i_2]) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_6 [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [8U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_33 [i_5] [i_8] [8U] [8U] [i_9] [i_8] |= ((/* implicit */unsigned long long int) (-(-5948355042234341059LL)));
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_5]))));
                                arr_34 [i_5] [i_6] [(_Bool)1] [i_8] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_24 [i_6] [i_7] [i_8] [i_9]))))), (((((/* implicit */int) arr_24 [i_5] [i_6] [i_8] [(_Bool)1])) | (((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_6]))))));
                                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_12 [i_6]))), (((arr_26 [i_5] [i_7] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_9])))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5]))) >= (max((max((((/* implicit */long long int) var_8)), (arr_19 [i_5]))), (((/* implicit */long long int) var_3)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((min((min((var_4), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((int) var_3)) : ((-(1680724838))))))));
}
