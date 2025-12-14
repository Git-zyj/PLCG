/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223289
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
    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((-402399148), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_6 [i_1 + 1] [8U] [i_3] [(short)7]))))));
                                arr_12 [(signed char)0] |= ((/* implicit */unsigned short) 4294967295U);
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1650420750)) || (((/* implicit */_Bool) 13LL))))), ((-(-17LL))))), (((/* implicit */long long int) ((unsigned int) arr_7 [5] [i_1] [i_0] [i_0] [i_1 + 1] [i_1 + 1])))));
                var_22 ^= ((/* implicit */int) var_7);
            }
        } 
    } 
}
