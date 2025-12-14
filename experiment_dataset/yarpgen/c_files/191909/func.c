/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191909
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
    var_20 = ((/* implicit */_Bool) (signed char)(-127 - 1));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (signed char)-126))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (-4992130554999066973LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 807070736U)) ? (3487896559U) : (3487896559U))))))) : ((-(((/* implicit */int) (short)32013))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (unsigned short)44193)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (var_15)))) == ((~(arr_2 [(short)10] [i_1]))))))));
                var_24 = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) 807070736U)) ? (((/* implicit */unsigned int) var_4)) : (var_11))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3 + 1] [i_2 - 1] [i_3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((signed char) 3487896559U))) == ((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_0] [i_4])))))))));
                                arr_14 [i_0] [i_3] [i_2 - 1] [i_2] [(signed char)16] [i_3] [i_0] = ((/* implicit */unsigned char) var_18);
                                arr_15 [i_1] [i_0] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) (-(((int) arr_9 [i_0] [i_3 - 2] [i_2] [i_3] [i_3]))));
                                arr_16 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 3487896547U)), (((long long int) 3601569278U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
