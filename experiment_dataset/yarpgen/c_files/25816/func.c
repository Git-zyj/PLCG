/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25816
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_1 [i_0]);
                                var_16 = ((/* implicit */signed char) arr_5 [i_3 - 1] [i_3 - 1] [i_4 - 2] [i_4]);
                                arr_11 [i_0] [i_0] [10ULL] [i_0] [i_3] [i_3 - 3] [10ULL] = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (unsigned char)20)))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [i_1] [i_2]), (((/* implicit */int) arr_8 [(unsigned short)15] [(unsigned short)15] [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_0 [i_1] [i_2]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_4))))));
    var_19 = ((/* implicit */signed char) var_3);
}
