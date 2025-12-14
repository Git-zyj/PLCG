/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226957
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_5 [i_2])) : (var_5)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */int) ((min((var_3), (((/* implicit */unsigned int) arr_5 [i_1])))) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                arr_12 [i_0] [5] [i_4] [i_0] [i_0] [i_0] [5] = (i_4 % 2 == zero) ? (((/* implicit */_Bool) min((((/* implicit */int) min((arr_8 [i_3 + 1] [i_2 - 3] [i_4] [i_2 - 4] [i_2]), (arr_8 [i_3 + 1] [i_2 - 3] [i_4] [i_2 - 4] [i_0])))), (((((((/* implicit */int) (signed char)-74)) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_4] [i_3 - 1] [i_4] [i_3 + 1] [i_2 - 2])) - (4407)))))))) : (((/* implicit */_Bool) min((((/* implicit */int) min((arr_8 [i_3 + 1] [i_2 - 3] [i_4] [i_2 - 4] [i_2]), (arr_8 [i_3 + 1] [i_2 - 3] [i_4] [i_2 - 4] [i_0])))), (((((((/* implicit */int) (signed char)-74)) + (2147483647))) >> (((((((/* implicit */int) arr_8 [i_4] [i_3 - 1] [i_4] [i_3 + 1] [i_2 - 2])) - (4407))) + (36526))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)-40))));
                                arr_13 [i_4] [i_4] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4] [i_0] [i_0])) ? (max((1536099403), (((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
