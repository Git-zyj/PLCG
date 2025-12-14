/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212540
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
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
                    var_18 = ((/* implicit */short) (((((-(arr_7 [i_1]))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_2])) + (((/* implicit */int) var_3))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_7 [i_1]))), (((/* implicit */unsigned int) (signed char)-106))))) ? (((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])) : (min(((+(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (270279414U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_2] [i_3]);
                                arr_19 [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((-1353017861), (((/* implicit */int) (signed char)-106))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82))))) << (((max((var_13), (((/* implicit */unsigned long long int) var_7)))) - (18446744073709551475ULL))))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (-1353017861) : (((/* implicit */int) (signed char)23))))) ? (max((((/* implicit */unsigned int) var_12)), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7851)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-7)))), (((/* implicit */int) min((arr_5 [i_5 - 1]), (arr_5 [i_5 + 3]))))));
        var_19 = (signed char)105;
    }
}
