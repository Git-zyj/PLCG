/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28178
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
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) min((min((((/* implicit */short) arr_2 [12U])), (var_14))), (((short) var_15))))), (((((/* implicit */int) arr_2 [i_0])) >> (((arr_1 [i_0] [i_0]) - (1103943511770920406ULL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (-((-((-(var_6)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_2])) - (33)))))) ? (arr_0 [i_1 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2])))))));
            arr_12 [i_2 + 2] = arr_8 [i_2 + 3];
        }
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            arr_17 [i_1] = (~(((/* implicit */int) arr_15 [i_3])));
            arr_18 [i_3] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_1]), (arr_7 [i_1]))))) : (arr_1 [i_3 + 2] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) -883034472295888979LL)) ? ((~(arr_10 [(unsigned char)13] [i_1]))) : (((/* implicit */unsigned long long int) (~(-883034472295888979LL))))))));
            arr_19 [i_3] [i_1] [i_1] = ((/* implicit */int) var_15);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_24 [12U] [i_4] = ((/* implicit */int) ((arr_1 [i_1] [i_1 + 1]) + (arr_1 [i_1 + 1] [i_1 + 1])));
            arr_25 [i_4] [i_1] = ((/* implicit */short) ((-2094224332) - (arr_23 [i_1 + 2])));
            arr_26 [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1 - 1]);
            arr_27 [i_1 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_15)) ? (arr_0 [i_1]) : (arr_0 [i_4])))));
            arr_28 [i_1] = ((/* implicit */unsigned char) arr_20 [i_1] [i_4]);
        }
        arr_29 [i_1] = ((/* implicit */unsigned char) (((-(arr_16 [i_1 + 2] [i_1] [i_1 + 2]))) + (arr_16 [i_1 + 1] [2LL] [2LL])));
    }
    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
    {
        arr_33 [i_5 + 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (arr_1 [i_5 + 2] [i_5 + 2]))))))), (((((/* implicit */_Bool) min((arr_15 [i_5]), (((/* implicit */unsigned short) arr_6 [i_5 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (min((((/* implicit */long long int) var_16)), (-883034472295888979LL)))))));
        arr_34 [i_5] = ((/* implicit */unsigned int) arr_21 [i_5] [i_5]);
    }
    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
    {
        arr_38 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_6 - 1] [i_6]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))));
        arr_39 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23742)) || (((/* implicit */_Bool) 883034472295888978LL))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        arr_46 [(unsigned char)2] [(unsigned char)2] [i_8] = ((/* implicit */short) arr_7 [i_9]);
                        arr_47 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned short) (short)21269);
                    }
                } 
            } 
        } 
        arr_48 [i_6] = ((/* implicit */int) max(((~(arr_31 [i_6 + 1]))), (((/* implicit */unsigned long long int) var_3))));
    }
}
