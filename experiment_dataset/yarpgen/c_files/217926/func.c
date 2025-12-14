/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217926
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : ((~(((((/* implicit */int) (signed char)73)) & (((/* implicit */int) var_13))))))));
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 3])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_0] = min(((signed char)(-127 - 1)), ((signed char)-107));
                                arr_18 [(signed char)9] [(signed char)9] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_3 - 2] [i_3])))) <= (((/* implicit */int) min((arr_13 [i_1 + 2] [i_3 - 1] [i_4] [i_0] [i_4]), (arr_13 [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) var_10))))) * (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5)))))))))));
}
