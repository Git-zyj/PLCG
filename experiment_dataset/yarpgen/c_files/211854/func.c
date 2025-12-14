/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211854
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
    var_13 |= ((/* implicit */unsigned int) ((signed char) var_12));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_3] [(unsigned short)7] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)6))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) : (((unsigned int) (unsigned short)48305))));
                        arr_13 [i_3] = (unsigned char)19;
                    }
                    var_14 += ((/* implicit */unsigned char) var_5);
                    var_15 = ((/* implicit */unsigned short) 3LL);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) (unsigned short)48324)) && (((/* implicit */_Bool) (signed char)-50))))))))));
}
