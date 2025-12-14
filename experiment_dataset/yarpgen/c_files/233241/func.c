/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233241
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
    var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), ((+(var_11))))) == (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [17U] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1LL)));
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) (!(var_2)));
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 + 2]) > (((((/* implicit */_Bool) arr_3 [(unsigned short)18] [i_1] [i_1])) ? (arr_2 [6ULL]) : (-4LL))))))) & (var_4)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) 0ULL);
                                var_23 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1 - 2]))))) | (((/* implicit */int) ((arr_11 [i_0 - 2] [i_1 + 1]) <= (arr_11 [i_0 + 2] [i_1 + 1]))))));
                                var_24 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */long long int) var_6))))) ? (arr_11 [i_2] [i_3 + 2]) : (((arr_11 [i_0] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) | (((((/* implicit */_Bool) ((arr_13 [i_0] [i_0]) & (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((((/* implicit */_Bool) 2097152U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))) : (arr_3 [i_0 + 3] [i_1] [i_3 + 2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (-((((-(1U))) << ((-(4294967295U)))))));
    var_26 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
}
