/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190714
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) arr_1 [i_1]);
                    var_13 &= ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65532))));
                        var_14 = ((/* implicit */unsigned short) arr_2 [i_1 - 2] [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (var_6)))) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_2))));
                            arr_12 [i_2] [i_1 - 1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_2] [i_3] [i_3] [i_3 - 2])) + (((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_3 + 3] [i_2] [i_3] [(unsigned short)10] [i_3 + 2])))) - (((((/* implicit */int) (unsigned char)6)) * (((/* implicit */int) var_1))))));
                            arr_13 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) (unsigned char)21))));
                        }
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) % (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_1))))) ? ((((-2147483647 - 1)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))))));
}
