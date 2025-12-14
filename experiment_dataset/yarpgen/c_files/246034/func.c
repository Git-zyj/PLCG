/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246034
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((-(14ULL))) & (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)65535))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_5) > (((/* implicit */int) arr_3 [i_0] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [15ULL] [i_1 - 1] [i_2])) ? (arr_7 [i_0] [i_1 - 1] [(_Bool)1] [i_2 + 2]) : (arr_7 [i_0] [i_1 - 1] [i_2] [i_2 + 2])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_1 - 2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [12] [i_2 + 1])) : (var_13)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned char) var_11);
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2] [i_3])))) ^ (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))) : ((-(arr_11 [i_0] [i_0] [i_1]))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_2 - 1] [i_1 + 1] [i_0] [i_0])) == (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_2 - 1] [i_1 + 1] [i_0] [i_0]))))) : (((unsigned int) arr_12 [i_2 - 1] [i_1 + 1] [i_0] [(signed char)19]))));
                }
            } 
        } 
    } 
}
