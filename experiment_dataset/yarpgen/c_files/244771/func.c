/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244771
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
    var_14 *= min((((/* implicit */unsigned short) var_6)), (var_4));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_13)) - (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_1] [i_1] [i_0]))))))) * (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])) : (var_12))) - (min((arr_1 [i_0]), (var_12)))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [13U])) * (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (var_9)))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 - 4] [i_0] [i_2 + 1] [(signed char)4])) : (((/* implicit */int) arr_5 [i_0 - 3] [i_1])))) : (min((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4])))), (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0 - 3] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])) : (arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] [i_4] [i_0] [i_2]))))))))));
                                arr_14 [(_Bool)1] [i_1] [i_1] [i_1] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_2] [(unsigned char)8] [i_2] [8] [i_4])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_4] [i_0])) : (((/* implicit */int) arr_10 [i_0 - 2] [(unsigned char)0] [i_0 - 3] [(unsigned char)0] [i_3] [i_4])))), (((/* implicit */int) arr_10 [i_1] [i_1] [i_2 + 4] [i_2] [i_4] [i_2]))));
                                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) / ((-(max((((/* implicit */unsigned int) -1519109454)), (arr_1 [(unsigned char)7])))))));
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) arr_4 [i_0 - 4] [i_1] [i_0 + 1])))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0)))))))) ? ((~(((/* implicit */int) var_5)))) : (((((((/* implicit */int) var_10)) - (((/* implicit */int) var_6)))) * (((/* implicit */int) var_1))))));
}
