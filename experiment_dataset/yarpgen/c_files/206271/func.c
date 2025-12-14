/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206271
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_3 [i_0] [(signed char)10] [i_2]))))) >> (((var_10) - (15935368707917678057ULL)))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) : ((-(((((/* implicit */_Bool) -1208015004)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20172))) : (arr_6 [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((min((11ULL), (((/* implicit */unsigned long long int) (signed char)127)))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))))))))))));
                                var_12 = ((/* implicit */unsigned long long int) (+((-(((var_4) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_0))))))));
                                var_13 = min((((arr_12 [12] [i_4 + 1] [i_2 - 2] [i_0] [i_4]) ? (((/* implicit */int) arr_12 [i_0] [i_4 - 2] [i_2 - 2] [i_0] [i_4])) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_10 [i_4 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_2] [i_4 - 2] [i_2 - 3] [i_0] [i_4])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-20177)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(short)9])))) << (((((((/* implicit */int) var_4)) + (((/* implicit */int) var_1)))) - (5799)))))) & (var_10)));
                }
            } 
        } 
    } 
    var_15 = var_5;
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned short)15)))) > (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) min(((short)14191), (((/* implicit */short) var_6))))))))))));
    var_17 = (((+(((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) & (((/* implicit */int) var_8)));
}
