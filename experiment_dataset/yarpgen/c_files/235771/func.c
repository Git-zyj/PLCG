/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235771
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
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4294967295U)) ? (-1366386763) : (((/* implicit */int) ((signed char) arr_0 [(signed char)5] [1])))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_20 = max(((-(((((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_1] [i_0])) + (((/* implicit */int) arr_9 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])))))), ((-(((/* implicit */int) var_10)))));
                            var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((short) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 2]))), (((long long int) arr_9 [i_4 + 1] [i_4 + 2] [i_3 - 1] [i_3 - 3] [i_3 - 1]))));
                        }
                        var_22 = ((/* implicit */unsigned int) (-(((unsigned long long int) 17344439019997892745ULL))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) max(((short)16), (((/* implicit */short) var_5))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_5] [i_5] [i_0] [i_0] [1ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (-1366386761)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9)), (arr_16 [i_0] [i_5]))))));
            var_25 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_5]) : (arr_0 [i_0] [i_5]))), ((~(arr_0 [i_5] [i_5])))));
            var_26 = ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_1)))))) ? ((((-(((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) 1129846243)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) : ((~(((/* implicit */int) var_9)))));
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) 287104476244869120ULL)) ? (((((/* implicit */_Bool) -1366386763)) ? (arr_14 [i_0] [i_0] [i_5] [(unsigned short)3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [6ULL] [6ULL]))) <= (arr_14 [(unsigned char)8] [9ULL] [i_0] [i_0] [4]))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))))));
            var_28 = ((/* implicit */unsigned long long int) var_0);
        }
    }
    var_29 += ((/* implicit */unsigned short) var_6);
    var_30 = var_0;
}
