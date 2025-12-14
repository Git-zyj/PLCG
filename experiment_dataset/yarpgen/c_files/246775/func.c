/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246775
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((-3868044699679695271LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-5298))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 *= ((((/* implicit */_Bool) (((+(var_2))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_6)) : (var_14)))))) ? (((((/* implicit */unsigned long long int) 5LL)) + (((arr_1 [i_3] [i_1]) + (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647U)) ? (-749096673049849219LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))) / (((/* implicit */long long int) var_0))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((long long int) var_8)) : (var_11))))));
                                var_22 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) 2147483647U)), (min((4507584407167428892ULL), (((/* implicit */unsigned long long int) 2912812779U)))))));
                                var_23 += (~(var_3));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    var_24 = ((((((/* implicit */long long int) var_6)) < (var_11))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_5] [i_0 - 2] [i_1])));
                    var_25 ^= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_17)))));
                }
                var_26 = arr_6 [i_1] [i_1] [i_0 - 2] [i_0];
                var_27 = ((/* implicit */short) (-(((2962456328U) << (((((var_12) << (((var_8) + (8523212637669957408LL))))) - (3623878654U)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (short)63);
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((-(3680986964U))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_12))))))));
}
