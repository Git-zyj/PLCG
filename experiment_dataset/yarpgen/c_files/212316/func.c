/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212316
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
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_5)))) : (((/* implicit */int) var_1))))) ? (max((1494183365), (((/* implicit */int) ((1494183361) == (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)31))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_2 - 3])) ? (((/* implicit */int) arr_5 [i_2 - 2] [i_3 - 1] [i_2 - 2])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_3 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) (short)-16279)) ? (((((/* implicit */unsigned long long int) arr_1 [i_0])) | (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [i_0]) | (arr_1 [i_0])))) ? (((unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((arr_2 [i_1]) ^ (((/* implicit */long long int) arr_0 [6])))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (((~(arr_0 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1))))))) | (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)153))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1508966792U)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [0ULL]))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((((((/* implicit */int) (short)-5506)) + (2147483647))) << (((4294967295U) - (4294967295U))))))) >> (((((/* implicit */_Bool) ((short) arr_2 [i_1]))) ? (1) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((var_11) < (max((((-20) / (((/* implicit */int) (unsigned char)179)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-62))))))));
}
