/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223733
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((min((((/* implicit */unsigned int) var_2)), (856315835U))), (max((((/* implicit */unsigned int) var_8)), (var_3))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)14365)))))));
    var_12 = ((/* implicit */signed char) ((short) (signed char)67));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(var_4)));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                var_13 = ((/* implicit */int) 3438651461U);
                arr_15 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(3438651461U)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 2]))));
            }
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_4))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((long long int) arr_10 [i_5 - 2] [i_5 - 1] [i_5 - 2]))));
                var_16 = var_6;
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_26 [i_0] [i_0] [11ULL] = ((unsigned int) var_2);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 3])) - (99))))))));
            }
            arr_27 [i_0] = ((/* implicit */_Bool) var_6);
        }
        arr_28 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (var_6)));
        arr_29 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
}
