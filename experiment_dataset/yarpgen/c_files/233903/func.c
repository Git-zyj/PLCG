/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233903
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */short) var_8);
                        var_11 = ((/* implicit */short) (!(var_0)));
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)28635)))) ? (16691275164079277303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 1])) > (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1]))))))))));
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1084075910)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (~(((int) (unsigned short)34123))));
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned long long int) ((arr_7 [i_0] [i_1] [i_2] [i_0]) ? ((+(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) (unsigned short)65535))))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2 + 3] [i_2 - 1] [i_1])), (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_2 [i_0] [i_0]))))))));
                            var_15 = ((/* implicit */unsigned char) ((5998302184053715643LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19833)))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            var_17 = (i_1 % 2 == 0) ? (((/* implicit */short) ((arr_6 [i_1 + 1] [i_1] [i_1 - 3]) >> (((arr_6 [i_1 + 1] [i_1] [i_1 - 1]) - (1525317181910662494LL)))))) : (((/* implicit */short) ((arr_6 [i_1 + 1] [i_1] [i_1 - 3]) >> (((((arr_6 [i_1 + 1] [i_1] [i_1 - 1]) - (1525317181910662494LL))) - (6892292052429638777LL))))));
                            var_18 &= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31413))));
                            var_19 = ((/* implicit */short) var_8);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */unsigned int) var_5);
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_6] [i_8] = (+(((/* implicit */int) var_9)));
                            var_21 = ((/* implicit */unsigned int) max((var_21), ((+(var_2)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            arr_30 [i_1] [i_1 + 1] [i_1] [i_9] = ((/* implicit */long long int) arr_8 [(unsigned short)15] [i_2 + 3] [(unsigned short)15] [i_1 - 3] [i_9] [i_1]);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_17 [(unsigned short)13] [(unsigned short)13] [i_2 - 1] [i_2 - 2] [i_2 + 1]))));
                            arr_31 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (arr_10 [16ULL] [i_1 - 3] [i_2 - 1] [i_6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6])))))))) ? (116772813736678244LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65533)))))));
                        }
                    }
                    var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) ? (13777611844945672045ULL) : (((/* implicit */unsigned long long int) var_4)))))))), (((unsigned int) ((var_6) && (var_0))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((int) (~(var_2)))) : (((/* implicit */int) var_0))));
    var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    var_27 = ((/* implicit */unsigned int) var_9);
}
