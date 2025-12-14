/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33388
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) + (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)63))))), (var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned char) ((int) -6760884998853036793LL));
                            arr_11 [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) -1816559817);
                            arr_12 [i_0] [i_0] [i_0 - 2] [i_2] [i_0 + 1] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)71)) <= (var_7))), (((_Bool) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 2]))))))));
            }
        } 
    } 
}
