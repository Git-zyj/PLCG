/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190931
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) arr_3 [i_1] [i_1] [i_1]);
                var_21 = ((/* implicit */_Bool) ((unsigned char) (short)-26));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) max((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_0 - 2] [i_0 - 2])))));
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (short)-33)))));
                    var_24 *= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5928))) >= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2993132834U)))))), ((~(((/* implicit */int) (short)39))))));
                    var_25 ^= ((/* implicit */_Bool) ((short) ((((((((/* implicit */int) (short)-37)) + (2147483647))) << (((((/* implicit */int) var_15)) - (1137))))) * (((((/* implicit */int) (short)-5928)) * (((/* implicit */int) arr_3 [(_Bool)1] [i_1 + 1] [i_1 - 1])))))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((/* implicit */int) arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)58)))))));
                    arr_10 [i_3] [i_1] [i_1] [i_0 - 3] = ((/* implicit */_Bool) 2475738727U);
                    arr_11 [i_0 - 2] [(unsigned char)2] [i_1] = ((/* implicit */short) 3870561069U);
                }
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-59)) ^ (((/* implicit */int) (short)-29109))))) ? (((((/* implicit */int) (short)-26)) ^ (((/* implicit */int) arr_4 [i_0 - 3])))) : (((arr_4 [i_1 + 3]) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(var_12))))));
}
