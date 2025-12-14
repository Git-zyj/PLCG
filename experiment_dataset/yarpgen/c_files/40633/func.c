/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40633
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 10499847331056407230ULL)))));
                                var_17 = ((/* implicit */short) -1386553183);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-78))))) ? ((~((-(var_12))))) : (((/* implicit */long long int) ((arr_13 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])))))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_4)))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (12887989995689408277ULL) : (((/* implicit */unsigned long long int) 14U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15)))));
    var_20 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))))), (((/* implicit */int) var_4))));
}
