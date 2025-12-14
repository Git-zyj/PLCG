/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31484
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) var_10)) : (arr_14 [i_0] [i_1] [i_1] [i_3 + 2] [(short)2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1016)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                                var_12 += ((/* implicit */unsigned short) arr_16 [(unsigned char)13] [i_1]);
                                arr_17 [i_4] [i_3] [i_3] [(_Bool)1] [i_2] [i_1] [i_0] |= ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_14 [10] [4ULL] [6] [i_1] [4ULL]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1008)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)1018)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)64519)))) : (708605852))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (((((((/* implicit */_Bool) var_1)) ? (var_3) : (var_7))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64498)))))))));
}
