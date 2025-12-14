/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206649
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) < (var_9))), ((!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_0])) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))))) * (arr_5 [i_1] [i_0 - 1] [i_0 - 1])));
                arr_6 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), ((~(var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
                var_16 ^= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)21815));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                            {
                                var_17 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2 - 1] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_3] [i_1]))) : (arr_9 [i_1]))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [1ULL] [i_0] [i_2])) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48443)))))))) && (((/* implicit */_Bool) (((~(arr_9 [i_3]))) >> (((max((arr_5 [i_2 - 2] [i_3] [i_4]), (var_1))) - (2841062551U))))))));
                                arr_16 [i_0] [2ULL] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [2U])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1619959257U)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29014))));
                                arr_19 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_4 [i_2]));
                            }
                            arr_20 [i_0 + 1] [i_3] = var_11;
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (8708922992202064369ULL) : (((/* implicit */unsigned long long int) 3928022974U))))) ? (arr_10 [(unsigned short)4] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 1] [i_2 - 2]))))) != (arr_5 [i_0 + 2] [i_0 - 1] [i_2 - 2])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned long long int) (unsigned short)36522);
    var_22 -= ((/* implicit */unsigned int) ((unsigned long long int) var_10));
}
