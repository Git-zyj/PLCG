/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233778
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
    var_14 = ((/* implicit */unsigned char) var_7);
    var_15 = ((/* implicit */unsigned char) min((var_15), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_0 [i_1 + 1] [i_1]), (arr_0 [i_1 + 1] [i_1 + 1])))), (min((((/* implicit */int) (_Bool)1)), (arr_4 [i_1 + 1] [i_1 - 1] [i_1])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65532)) != (((/* implicit */int) ((arr_1 [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                                arr_15 [i_0] [i_4] [i_3] [i_3] = min((((/* implicit */int) (_Bool)1)), (1844602576));
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1 - 1] [i_4 + 1])) >= (((/* implicit */int) min((arr_0 [i_1 + 1] [i_4 - 1]), (arr_0 [i_1 - 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0] [i_1 + 1]))))) / (arr_1 [i_1 + 1]))))));
            }
        } 
    } 
}
