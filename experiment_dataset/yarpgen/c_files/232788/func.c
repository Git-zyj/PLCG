/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232788
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
    var_10 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max(((~(arr_2 [i_4]))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0 + 1])), (arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_3 + 1]))))));
                                arr_16 [i_2] [i_3 - 1] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1172979950U)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_10 [i_2] [i_1] [i_0] [i_0 + 4] [i_0] [i_2])))) ? (((/* implicit */int) arr_14 [i_2] [i_0] [5LL] [i_0 + 3] [i_0] [i_2])) : (max((arr_10 [i_2] [i_1] [i_1] [i_0 + 3] [i_0 + 2] [i_2]), (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_0 + 3] [i_0 - 1] [i_2]))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) -607775365)) : (4LL)));
                                var_13 = ((/* implicit */long long int) (signed char)-111);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) min((max((arr_4 [i_1]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_2])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2])))))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)7486)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
}
