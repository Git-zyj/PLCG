/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249558
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) == (3180911606059239912ULL))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_3 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) && (var_5))))));
        var_21 = ((/* implicit */unsigned int) ((min((arr_2 [i_0 + 1]), (arr_0 [i_0 + 1] [i_0]))) | (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) 1832576735))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((((/* implicit */unsigned long long int) ((arr_6 [i_1]) + (arr_6 [i_1])))) | (var_10));
        arr_8 [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) var_0);
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))));
                    var_23 = ((/* implicit */short) (+(((unsigned long long int) 17179868928LL))));
                }
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 + 2])) ? (arr_11 [i_4 + 2]) : (arr_11 [i_4 + 2])))) ? (max((((/* implicit */unsigned long long int) (signed char)127)), (15265832467650311709ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_25 = ((/* implicit */short) 6555966133050551759ULL);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_26 [i_4 - 1] [i_5] [i_4 - 1] [i_4 - 1] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_17 [i_7 - 3])) / (((/* implicit */int) var_18))))));
                        arr_27 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) 11890777940658999856ULL);
                        arr_28 [i_4] [i_5] [i_6 + 2] = ((/* implicit */int) arr_15 [i_4] [i_5] [20]);
                        arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_19)), (var_8)));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        arr_32 [(unsigned short)10] [i_8] = ((/* implicit */unsigned long long int) var_1);
        var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_8 + 2] [i_8 - 1])) ? (var_4) : (arr_30 [i_8 + 1] [i_8 + 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_8 + 1] [i_8 - 1]) >= (arr_30 [i_8 + 2] [i_8 + 2])))))));
    }
    var_27 &= ((/* implicit */unsigned long long int) var_8);
    var_28 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)7826)) >> (((11890777940658999857ULL) - (11890777940658999841ULL))))));
}
