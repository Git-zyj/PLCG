/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30757
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
    var_18 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (86))))));
                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) - (((/* implicit */int) arr_3 [13] [i_1] [i_0]))))))))) == (-2462100350291904318LL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_21 |= (signed char)-23;
                    var_22 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_6 [(signed char)5] [i_1])))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 2) 
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_5 [(signed char)2] [i_0] [i_1] [i_3 - 2]))));
                    var_24 += ((/* implicit */long long int) (-(((/* implicit */int) (short)32760))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) -20))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 3; i_4 < 24; i_4 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_6 [i_3 - 3] [i_4 - 1]));
                        var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))));
                        arr_13 [18U] [(unsigned short)24] [i_0] [i_4] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [4ULL] [i_4] [0U]))) : (0U)))));
                        arr_14 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) ((signed char) 0ULL));
                    }
                    for (signed char i_5 = 4; i_5 < 24; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_3 - 1] [i_1] [i_3]))));
                        arr_17 [(short)12] [i_1] [i_0] [i_5] &= ((/* implicit */long long int) ((short) arr_4 [i_5 + 1] [i_5 + 1]));
                        var_29 = (-(((/* implicit */int) var_10)));
                    }
                    arr_18 [i_3] [i_3] [i_3] [i_1] = arr_9 [i_0] [i_1];
                }
            }
        } 
    } 
}
