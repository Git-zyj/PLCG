/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200158
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
    var_19 *= ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) (unsigned char)97))));
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((/* implicit */int) min((var_2), (((/* implicit */short) var_11)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_0 + 1] [i_1 + 3])))) ? (((/* implicit */long long int) min((arr_2 [i_0 + 1] [i_1 - 1]), (arr_2 [i_0 + 1] [i_1 - 2])))) : ((+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) | (222058181240192915LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1 - 3] [2LL] [i_3] [i_1 - 3] [i_0 + 1] = (-(min((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (var_9))));
                                var_22 = ((/* implicit */unsigned char) min(((+(arr_9 [i_0 + 2] [i_1 + 1] [i_2]))), (arr_9 [i_0 + 1] [i_2] [i_2])));
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [4] [i_3])) ? (((/* implicit */int) (short)32767)) : (arr_0 [i_4 - 1] [i_4 + 1])))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967281U))))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) var_13)))) >> (((/* implicit */int) var_12))))) : (((222058181240192915LL) << (((4294967285U) - (4294967283U)))))));
                                var_24 = ((/* implicit */unsigned int) ((arr_3 [i_0]) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
