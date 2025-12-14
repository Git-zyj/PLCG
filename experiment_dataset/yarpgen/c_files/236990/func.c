/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236990
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
    var_19 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1 + 2] [i_1] [i_1] [i_3] [(signed char)10] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2])))), (((((/* implicit */int) (unsigned char)177)) - (((/* implicit */int) (unsigned char)72))))));
                                var_20 = ((/* implicit */long long int) min((14U), (((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ? (((unsigned int) arr_0 [(signed char)5] [i_3])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)137)))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] = ((min((3904625414U), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)71)), (var_9)))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */int) (signed char)-67)))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_17))))), (arr_4 [i_0] [i_0] [2LL] [(short)14])))) : ((~(var_16)))));
    }
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_14 [i_5] [13U]) - (((/* implicit */unsigned long long int) var_9))))) ? (var_14) : (((/* implicit */unsigned int) -950251847)))) + (((((/* implicit */_Bool) min((7738594883903324812ULL), (((/* implicit */unsigned long long int) (unsigned char)84))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (min((((/* implicit */unsigned int) arr_13 [i_5] [15])), (4294967294U)))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (arr_3 [(unsigned char)10] [i_5] [(unsigned char)10])))) ? (((((/* implicit */_Bool) arr_9 [18U] [i_5])) ? (1304876018) : (arr_4 [i_5] [i_5] [i_5] [0U]))) : (((/* implicit */int) min((arr_3 [(short)6] [i_5] [i_5]), (var_11)))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) var_6);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6])) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)112)))));
    }
}
