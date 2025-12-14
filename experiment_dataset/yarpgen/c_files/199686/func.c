/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199686
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((((/* implicit */_Bool) 3366709855U)) && (((/* implicit */_Bool) (short)-24)))), (((var_7) <= (((/* implicit */int) var_4))))))) > (((/* implicit */int) var_10))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */unsigned short) (short)-24);
                    var_14 &= ((/* implicit */int) var_3);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_9 [i_1] [i_2] [i_2 - 1] [i_3] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (3366709855U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))))), (((/* implicit */unsigned int) var_3))));
                        var_15 |= min(((((_Bool)0) ? (3366709855U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (928257446U));
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-24)), (min((((/* implicit */int) (short)6)), (-238499543)))));
                    }
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)32775)), (928257446U)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (!((!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) < (83060746U)))))));
    var_19 = ((/* implicit */unsigned char) var_9);
}
