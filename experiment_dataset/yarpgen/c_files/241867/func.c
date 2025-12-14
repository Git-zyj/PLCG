/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241867
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_3))));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_1 [i_1]))))) > (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (short)56))))) < (((long long int) -65889734)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_0))))) ? (min((arr_2 [i_0]), (var_11))) : ((~(18084791119332785548ULL)))))));
                    var_15 ^= ((/* implicit */short) var_8);
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 1] [i_0]))) != (var_2)))) : (((/* implicit */int) (short)-1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((65889734) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) : (var_8)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (-65889705) : (((/* implicit */int) arr_11 [i_4]))))), (((unsigned int) (unsigned char)66)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49467))))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (unsigned char)66))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_3] = ((/* implicit */long long int) arr_5 [i_5]);
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_4] [i_4]);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_4] [i_4]), (((/* implicit */int) arr_5 [i_3]))))) ? (((/* implicit */int) ((signed char) arr_16 [i_4] [i_4] [i_4]))) : (max((((/* implicit */int) arr_10 [i_3] [i_3] [i_3])), (arr_8 [i_3] [i_3])))))) < (((((unsigned int) arr_4 [i_3] [i_3])) >> (((((/* implicit */int) arr_5 [i_3])) + (75)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
