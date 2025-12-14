/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248018
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
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */int) ((unsigned short) var_5)))));
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) arr_3 [i_1])) | (-5124314221406849423LL))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_0] [i_0])))))))) == (max(((~(0ULL))), (((/* implicit */unsigned long long int) ((-5124314221406849423LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [4LL]))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_1] [i_4]))))) / (((long long int) arr_2 [i_2] [i_2])))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0 - 4] [i_1] [i_0 - 4] [i_3] [i_3] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))))))))));
                                arr_14 [i_0 - 4] [i_0] [(signed char)2] [i_0] [i_0] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_8 [i_3 - 2] [i_2] [i_0] [i_0])))) && ((!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_2] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_3 [i_0])), (var_4)))))));
                var_18 |= ((/* implicit */signed char) var_12);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_9);
}
