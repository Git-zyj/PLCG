/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19067
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
    var_11 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1])) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                    arr_10 [(signed char)10] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_1]))));
                    arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [7U] [i_1] [i_2]) : (((/* implicit */int) arr_7 [i_0] [i_2]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) arr_7 [i_1] [i_4]);
                            var_14 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) var_2)), (var_10))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? ((-(arr_5 [i_0] [i_3] [i_4]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_3] [i_4])), (arr_6 [i_0] [i_0] [i_3])))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (+(var_10)));
            }
        } 
    } 
}
