/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200010
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
    var_12 = ((/* implicit */unsigned short) (-(4088U)));
    var_13 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)17)) < (((/* implicit */int) (signed char)81))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_8 [i_3] [i_0] [i_1] [i_3 + 1] [i_2] |= ((/* implicit */unsigned short) ((unsigned char) (~(4146934277U))));
                            arr_9 [i_0] [i_0] [i_1] [i_1] [i_3] &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_2] [i_3 - 3])) && (((/* implicit */_Bool) (-(arr_7 [i_3] [i_1] [i_2])))))));
                            arr_10 [i_0] [i_2] [i_1] [i_0 - 1] = ((/* implicit */int) ((unsigned int) var_4));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) var_8);
                var_15 *= 3452361351U;
                var_16 = ((/* implicit */signed char) ((min(((((_Bool)0) ? (-10809578) : (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_1] [i_1])))), (-2))) - (var_5)));
                arr_11 [i_1] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
}
