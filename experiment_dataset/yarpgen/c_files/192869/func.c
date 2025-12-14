/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192869
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((int) min((((/* implicit */unsigned char) var_10)), (var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) arr_5 [i_2] [i_2] [i_1]);
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_4])) : (((/* implicit */int) arr_11 [i_2] [i_3])))) <= (((/* implicit */int) arr_2 [i_3 + 4] [i_3 + 3]))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (unsigned char)243)))));
                }
                var_13 -= ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), ((~(((((/* implicit */int) (unsigned char)237)) >> (((((/* implicit */int) (unsigned char)233)) - (211)))))))));
}
