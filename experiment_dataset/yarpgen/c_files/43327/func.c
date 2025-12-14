/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43327
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
    var_17 |= ((/* implicit */int) var_13);
    var_18 = ((/* implicit */short) (~(134217600)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) arr_6 [i_1 + 2] [i_1] [7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1 + 4] [i_2] [i_1] [i_4 - 1] [i_2] = ((/* implicit */unsigned int) arr_10 [i_4 - 1] [(unsigned char)5] [(unsigned char)5]);
                                var_19 = ((/* implicit */int) ((-1575876857) == (max(((+(arr_0 [i_0] [10]))), (((/* implicit */int) (short)32755))))));
                                arr_14 [i_1] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1] [i_4 - 1])), (((long long int) ((4294967295U) != (((/* implicit */unsigned int) arr_6 [i_1 + 4] [i_3 + 1] [i_3 + 1])))))));
                                arr_15 [i_4] [i_1] [i_3] [i_2] [i_1 + 2] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15584699064038825037ULL)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (short)-32760))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
