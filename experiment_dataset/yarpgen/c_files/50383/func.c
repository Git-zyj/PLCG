/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50383
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
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [7LL] [7LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_0 [i_0 + 3]))));
                    var_13 -= ((/* implicit */unsigned int) (~(10237371889620085126ULL)));
                    arr_8 [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (~((((~(arr_4 [i_0]))) % (((/* implicit */long long int) (+(2927180898U))))))));
                    var_14 = min((((/* implicit */long long int) (-(((((/* implicit */_Bool) 2927180885U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8))))))), (min((max((0LL), (arr_4 [i_0 + 2]))), (((/* implicit */long long int) ((unsigned char) var_1))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) var_11);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_3] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (511ULL))))))));
                                arr_16 [(unsigned char)6] [8U] [6LL] [i_3] |= min((((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))))), ((+(min((31LL), (18005602416459776LL))))));
                                var_16 = ((/* implicit */signed char) (~((~(arr_11 [i_0 + 1] [i_1] [i_1 - 1] [i_3 + 1] [i_3] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
