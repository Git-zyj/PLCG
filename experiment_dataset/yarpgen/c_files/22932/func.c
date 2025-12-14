/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22932
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((516886034U), (((/* implicit */unsigned int) (unsigned char)12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) << (((/* implicit */int) (signed char)15))))), (var_3))) : (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((max((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) var_8)))) ^ (((arr_0 [i_0 + 3]) << (((arr_0 [i_0 + 4]) - (2950405387U)))))));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (unsigned char)48))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned char) ((arr_8 [i_2 + 1] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) (signed char)33))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0 + 3])));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 2])) && (((/* implicit */_Bool) var_3))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) (unsigned char)32))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_16 = ((arr_3 [i_0 + 2] [i_3 - 1]) ^ (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_0 - 1])));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_14 [i_0 - 2] [i_3 - 1]) : (arr_14 [i_0 + 2] [i_3 + 1])));
                            var_18 = ((/* implicit */int) arr_0 [i_3 + 1]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0 + 3] [i_0])) ? (((/* implicit */long long int) var_3)) : (var_5)))));
                            var_20 += ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0 + 2]);
                            var_21 = (+(var_5));
                        }
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-27))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_25 [i_3] = ((/* implicit */unsigned int) (-(arr_24 [i_3 - 1] [i_0] [i_0] [i_0 - 2])));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)59)) << (((4294967295U) - (4294967289U)))))) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)5))));
                        var_24 -= ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) -847039343);
                            arr_30 [i_8] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_3 - 1])) << ((((+(arr_12 [i_0] [i_1] [i_3] [i_7] [i_8] [i_0]))) - (8997138217920708116LL)))));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_4 [(unsigned char)8] [i_0 + 2])) % (arr_14 [i_0 - 1] [i_0])));
                        }
                    }
                }
            }
        } 
    } 
}
