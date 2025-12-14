/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22992
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
    var_17 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) min(((~(arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((arr_0 [i_2] [i_1]) != (((/* implicit */int) (signed char)-59))))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0] [i_0 + 1])) : (var_5))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((((arr_8 [i_4] [i_0 - 1] [i_2]) / (arr_8 [i_1] [i_2] [i_2]))) * (max((arr_8 [i_1] [i_2] [i_4]), (arr_8 [i_0] [i_0] [i_0]))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((max((var_7), (((((/* implicit */long long int) ((/* implicit */int) (signed char)59))) / (549751619584LL))))) << (((min((((/* implicit */unsigned long long int) 274877906943LL)), (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) - (274877906904ULL)))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) min((arr_5 [i_0 + 1] [i_0] [i_0]), (arr_5 [i_0 + 1] [i_0] [i_0 + 1]))));
                                var_20 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) (signed char)-59)) ? (549751619574LL) : (274877906955LL))) == (549751619589LL))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] &= ((/* implicit */signed char) ((((/* implicit */long long int) min((arr_8 [i_0] [i_2] [i_3]), (arr_8 [i_4] [i_3] [i_2])))) | (((((/* implicit */long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned char) (signed char)-77)))))) - (((((/* implicit */_Bool) arr_0 [i_4] [i_3])) ? (arr_15 [i_4] [i_0]) : (((/* implicit */long long int) 3398401650U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */_Bool) arr_23 [i_0] [i_5] [i_2] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 549751619589LL)) ? (((/* implicit */long long int) 420672657U)) : (549751619592LL)))) ? (min((((/* implicit */unsigned long long int) var_1)), (3261009806891248047ULL))) : (((((/* implicit */_Bool) 417464632)) ? (arr_2 [i_6] [i_5] [i_1]) : (arr_11 [i_0] [i_1] [i_2] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
