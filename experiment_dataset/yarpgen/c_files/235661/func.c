/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235661
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
    var_11 = ((/* implicit */int) (+(max((((unsigned long long int) var_10)), (((unsigned long long int) var_3))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                arr_8 [i_1] = ((/* implicit */signed char) ((short) ((signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_2))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_3] [i_1] [i_1] [i_0] = ((long long int) var_9);
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_0))))))));
                    }
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_2))))));
                    var_14 -= ((/* implicit */signed char) ((short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_5)))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_20 [(unsigned short)6] [i_0] [i_0] [i_1] = ((signed char) ((unsigned short) var_2));
                    arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((int) -1520023943)));
                }
            }
        } 
    } 
}
