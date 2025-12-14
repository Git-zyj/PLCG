/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30094
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
    var_10 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5425984744839595687ULL)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) var_9))))), (min((var_6), (var_4)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (var_4))))));
                        arr_9 [(_Bool)1] [18ULL] [i_2] [i_2] = (!(((/* implicit */_Bool) min((var_7), (var_1)))));
                        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (min((var_4), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) var_3))))))))));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_4)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_7)))) : (((/* implicit */int) var_1))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = var_2;
                        var_14 = ((/* implicit */unsigned int) max((var_14), ((+(min((var_6), (((/* implicit */unsigned int) var_0))))))));
                    }
                    for (short i_5 = 4; i_5 < 18; i_5 += 3) 
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((max((var_7), (var_1))), (((/* implicit */unsigned char) var_2))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_4))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
                        var_15 -= ((/* implicit */unsigned int) var_3);
                        var_16 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_7))))), (var_9));
                        arr_17 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (+(((var_9) + (((/* implicit */unsigned long long int) var_6))))));
                        arr_18 [i_2] [i_2] [0LL] [0LL] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) max((min((var_6), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_3)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_7), (var_7)))), (((var_9) - (var_9)))));
                                var_18 -= ((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)15)))), (((/* implicit */int) var_1))));
                                var_19 = ((/* implicit */unsigned int) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                                arr_23 [i_2] [(short)7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18268574850669820825ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))), ((~(var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
