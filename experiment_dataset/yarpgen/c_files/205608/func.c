/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205608
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
    var_16 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */int) (signed char)121)) ^ ((+(((/* implicit */int) (signed char)116))))));
                                var_18 = ((/* implicit */_Bool) 137608441);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_2 - 3])) : (((/* implicit */int) arr_4 [i_2 - 1]))));
                        var_20 = ((/* implicit */short) ((unsigned int) ((short) var_14)));
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                    }
                    for (int i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) var_13);
                        var_23 |= ((/* implicit */signed char) var_8);
                        var_24 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2]);
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (min((arr_8 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [i_6 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-118)) / (-137608449)))) ? (((/* implicit */unsigned int) min((-137608442), (var_4)))) : (((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (((/* implicit */unsigned int) var_4)) : (var_0))))))))));
                    }
                    for (int i_7 = 3; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                        var_26 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_2] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_8 [i_2 + 1] [i_8] [(unsigned char)17] [15] [i_8 - 1] [i_2 + 1]))), (((/* implicit */unsigned long long int) ((unsigned char) var_4)))));
                                arr_31 [i_1] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_8 + 1])) : (min((var_13), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_8] [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2 - 3] [i_8 - 1] [i_8 - 1])) ? (arr_18 [i_2 - 2] [i_8 - 1] [i_8 - 1]) : (arr_18 [i_2 + 1] [i_8 - 1] [i_8 - 1]))))));
                                var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_26 [i_9] [i_1] [i_2] [i_2 - 2])) ? (arr_29 [i_2] [i_2 - 3] [i_2] [i_2] [i_8 - 1] [i_8] [i_8]) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_2 - 2])))), (((/* implicit */int) (((~(arr_9 [7] [i_8] [i_8] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                                var_29 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(var_4)))), (min((arr_9 [i_2 + 1] [i_8] [i_8] [i_0]), (arr_9 [i_2 - 3] [i_8] [i_8] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) var_1);
}
