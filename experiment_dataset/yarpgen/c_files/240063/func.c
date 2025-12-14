/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240063
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_11 = min((-3787818650838803231LL), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((-6744353197332171829LL), (min((((/* implicit */long long int) (unsigned short)65520)), (3787818650838803218LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) -3787818650838803220LL))));
                        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((6789033521100707920LL), (((/* implicit */long long int) (unsigned short)22988)))), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) min((((unsigned short) var_7)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3434015715465107822LL)))))))) : (((/* implicit */int) max((var_3), (((unsigned short) (unsigned short)41454)))))));
                    }
                }
            } 
        } 
    }
}
