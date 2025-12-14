/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53144
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_4 [i_2 - 1] [i_0 + 2] [i_1])));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((long long int) var_11))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_6 [i_0] [i_3] [i_2] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((int) ((unsigned short) (_Bool)0)));
                        var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) | (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) var_15));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_1] = ((/* implicit */int) arr_5 [i_1] [i_2 - 1]);
                        var_20 = ((/* implicit */long long int) var_0);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_5])) == (((/* implicit */int) var_6))))) : (((/* implicit */int) var_6)))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_23 [i_0 + 2] [i_0 + 2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))));
                            var_23 = ((/* implicit */_Bool) arr_2 [i_2 - 1] [i_6]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 1] [i_1]))));
                            var_25 |= ((/* implicit */short) ((long long int) var_13));
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
                        }
                        for (short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7 + 1]))) : (var_5)));
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (short)0)) : (var_9))) * ((-(((/* implicit */int) (signed char)10))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_13)))))) < (arr_8 [i_0 + 2] [i_1])));
                        }
                    }
                    var_30 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_6))))));
                    var_31 = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_32 = var_2;
                                arr_33 [i_1] [i_1] [i_2 - 1] [i_8 - 1] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) * (max((var_1), (((/* implicit */unsigned long long int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) var_3);
    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) var_13))));
}
