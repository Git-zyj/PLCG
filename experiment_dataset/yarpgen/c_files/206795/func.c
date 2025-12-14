/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206795
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */int) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                        var_21 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        arr_12 [i_0] [(signed char)9] [1] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775802LL)) && (((/* implicit */_Bool) var_14))));
                        var_22 = ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_2 - 4] [i_2 + 2])) ? (9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_1] [i_2 - 3]))));
                        arr_13 [i_0] [i_2 + 2] [i_1] [i_0] [i_0] = arr_1 [(signed char)0] [i_0];
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        var_23 |= ((/* implicit */int) (-((~(-9223372036854775802LL)))));
                        arr_16 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((-9223372036854775802LL) / (-9223372036854775806LL))) / (((/* implicit */long long int) (-2147483647 - 1)))))) ? ((~(9223372036854775806LL))) : (((/* implicit */long long int) max((arr_15 [11] [i_1] [i_2] [i_4] [i_4 - 2] [i_4]), (((/* implicit */unsigned int) var_13)))))));
                        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) arr_1 [i_0] [i_2 + 1])) : (-2147483644))))))) - (var_13)));
                    }
                    var_25 = (-((-((-(arr_8 [i_0] [i_1] [i_0] [i_0]))))));
                    var_26 = ((/* implicit */_Bool) max(((((-(9223372036854775802LL))) - (max((((/* implicit */long long int) 0)), (-9223372036854775799LL))))), (((/* implicit */long long int) min((((/* implicit */int) (short)-17523)), (var_13))))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */int) (((-(var_9))) / (((((/* implicit */_Bool) -9223372036854775802LL)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(_Bool)1] [i_2 - 1] [i_2 - 3] [6])) ? (((/* implicit */int) (short)26916)) : (((/* implicit */int) (signed char)-11)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) min((var_27), ((~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)59980)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))))) != (min((0LL), (((/* implicit */long long int) (signed char)11)))))))))));
}
