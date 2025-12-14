/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227718
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 3]))))) : ((~(var_4))))) >> (((((long long int) (~(arr_0 [i_0])))) + (3778192652572686415LL)))));
        var_16 += max((((/* implicit */long long int) ((unsigned int) arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0 - 1])), (arr_0 [i_0 - 1])))) ? (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 536869888LL)) ? (((((/* implicit */_Bool) (unsigned short)55562)) ? (-1LL) : (-1LL))) : (-536869894LL)));
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                arr_7 [i_1 - 1] [i_1 + 1] = ((/* implicit */unsigned short) ((0LL) == (1LL)));
                var_18 = (~(arr_0 [i_1]));
                var_19 = ((/* implicit */signed char) arr_4 [i_1 + 2] [i_2]);
                var_20 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_4 [i_1 + 1] [i_2])))), (((/* implicit */int) arr_3 [i_1 + 1]))));
            }
        } 
    } 
    var_21 = ((long long int) var_3);
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(((2251799813668864ULL) - (2147221504ULL)))));
        arr_10 [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_9 [i_3 + 1] [i_3 + 1])))) : ((+(var_5)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_23 &= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_12), (var_12))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (arr_22 [i_7])))), (max((((/* implicit */unsigned long long int) var_6)), (var_9))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) arr_16 [i_3] [i_3]);
                }
            } 
        } 
    }
}
