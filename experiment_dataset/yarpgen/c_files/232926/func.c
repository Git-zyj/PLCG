/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232926
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
    var_17 |= ((((/* implicit */_Bool) var_8)) ? (((unsigned int) (~(3112374630602072894ULL)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-36))))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (signed char)127)))))))), (var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) arr_6 [(unsigned short)1] [i_2] [i_2]));
                    arr_10 [i_2] |= max(((~(var_9))), (((/* implicit */int) var_10)));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])), (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) (~(max((arr_2 [i_3] [i_3] [i_1]), (arr_2 [i_0] [i_3] [i_2])))));
                                var_21 = ((/* implicit */int) var_0);
                                var_22 = arr_4 [i_1] [i_3];
                                var_23 = ((/* implicit */unsigned short) max((((12651386832721281424ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_0] [i_2])) ^ (var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
