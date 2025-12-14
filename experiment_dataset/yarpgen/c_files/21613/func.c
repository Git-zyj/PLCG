/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21613
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
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 867817965U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)511))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-128))) : (((((/* implicit */_Bool) ((1626196806U) >> (((9223372036854775807LL) - (9223372036854775783LL)))))) ? (2668770489U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)207))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)49))));
                                arr_12 [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)512)), (867817972U))) ^ ((-(2668770501U)))))) || (((/* implicit */_Bool) max((arr_10 [i_4]), (((((/* implicit */unsigned int) ((/* implicit */int) (short)24598))) * (1626196806U))))))));
                                arr_13 [6U] [(short)3] [i_2] [9U] [i_2] = (-(((((/* implicit */int) (unsigned char)65)) << (((((((/* implicit */_Bool) (short)-4801)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) : (arr_11 [i_0] [i_1] [i_2] [i_3]))) - (191U))))));
                                arr_14 [1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) 791473866)) ? (((/* implicit */long long int) 867817972U)) : (9179242176475578835LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) : (arr_11 [(unsigned char)6] [i_1] [i_2] [i_3]))))))));
                                var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(arr_7 [i_2] [22U] [22U] [(short)14])))) ? (-651385676) : (((((/* implicit */_Bool) 2016845640U)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)47))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) min(((short)0), (((/* implicit */short) (unsigned char)208))))) != (((/* implicit */int) arr_8 [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
}
