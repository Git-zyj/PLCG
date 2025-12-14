/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206929
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_3 [i_1]))));
                        var_15 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_3] [12LL]))) % (((unsigned long long int) 4221116507669343250LL))));
                    }
                    var_16 = ((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (((+(var_6))) >= ((+(var_6)))));
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) max((var_10), (var_0)))) ? (max((var_13), (((/* implicit */unsigned long long int) (signed char)-113)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) 32766))))))), (((/* implicit */unsigned long long int) var_7))));
}
