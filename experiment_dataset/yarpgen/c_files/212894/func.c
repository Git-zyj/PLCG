/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212894
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
    var_13 = ((/* implicit */int) max((var_13), (min((((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)37)) ? (9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)65531)))))))))));
    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33155)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (unsigned char)37))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned short) 17874495441191954530ULL)))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (arr_0 [i_1] [i_2]))), (min((((/* implicit */unsigned long long int) 9223372036854775801LL)), (arr_0 [i_3] [i_1]))))) & ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_10 [i_0] [i_1]))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_1 - 2]), (var_0)))) ? (((/* implicit */int) max((arr_6 [i_1] [i_1 + 2]), (arr_6 [(unsigned char)11] [i_1 + 1])))) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2])))))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) min((((arr_4 [i_1] [i_1 + 2] [i_1 + 2]) ^ (arr_7 [i_0] [i_1 + 1] [i_1 + 2]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 + 1])) ? (arr_4 [i_1] [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 1] [i_0])))));
            }
        } 
    } 
}
