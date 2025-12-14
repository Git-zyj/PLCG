/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204212
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13990)) ? (780008589U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_11 &= ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) max(((+(((arr_2 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) - (var_6)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [2U] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_11 [i_2 + 1])) - (((/* implicit */int) var_7)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [9U] [i_0 - 1] [i_0 - 1]))));
                            var_14 = ((/* implicit */short) (-(((long long int) var_7))));
                            arr_16 [i_0] [(signed char)15] [i_1] [i_1] [10] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-481874179)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [(short)14] [(_Bool)0])) : (((/* implicit */int) (signed char)16))))) : (((((/* implicit */_Bool) (short)-281)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)241))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [8U] = ((/* implicit */unsigned char) 5840844392657333497LL);
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) (((+(max((arr_8 [i_0] [i_1] [14ULL] [(unsigned short)18]), (((/* implicit */unsigned int) arr_12 [i_0 - 1] [(short)22] [18U] [i_5])))))) >> (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_5] [(signed char)7])), (var_5))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [8U] [i_1] [i_2] [i_0 - 1] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_22 [i_0 - 1] [i_2 + 1]) : (arr_22 [i_0 - 1] [i_2 + 1])))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967294U)))));
                            var_18 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)126)))), (arr_15 [i_2 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) > (((((/* implicit */_Bool) (-(2973405183188751924LL)))) ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8592))))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
