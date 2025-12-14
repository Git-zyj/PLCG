/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246316
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (min((arr_1 [i_0]), (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0])))))) : (((/* implicit */int) ((_Bool) (+(arr_5 [i_0] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) arr_9 [10] [i_1] [(unsigned char)3] [(unsigned char)3]);
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_7 [i_0]))))), (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_3] [i_3] [i_2]) : (arr_5 [i_0 - 1] [i_0 - 1] [3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_12 [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_12 [i_6]), (var_8)))) : (((/* implicit */int) var_3))))) ? (arr_6 [i_6] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_1 [i_0]), (((/* implicit */int) var_13)))), ((-(((/* implicit */int) (signed char)-15))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((arr_5 [i_0] [6] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_8 [i_0] [(unsigned char)8] [i_0])))))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((max((arr_9 [i_5] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((-2147483646) + (2147483647))) >> (((((/* implicit */int) (unsigned char)200)) - (187)))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0])) << (((/* implicit */int) arr_10 [i_0] [i_6] [i_4 + 1] [i_5]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5))))));
}
