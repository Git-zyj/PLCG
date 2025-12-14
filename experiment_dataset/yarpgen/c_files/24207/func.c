/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24207
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
    var_11 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    var_12 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 5569757487290316097ULL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (signed char)5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) min((12876986586419235519ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (var_4)));
                                var_15 = ((/* implicit */short) (+((-(((/* implicit */int) (short)(-32767 - 1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_5] = ((/* implicit */_Bool) min(((-(min((((/* implicit */unsigned long long int) var_5)), (arr_17 [i_5] [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5])))))) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))) : (((/* implicit */int) ((5569757487290316097ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
                var_16 &= ((/* implicit */_Bool) (~(((int) arr_18 [i_5 - 1] [i_5 + 1]))));
            }
        } 
    } 
}
