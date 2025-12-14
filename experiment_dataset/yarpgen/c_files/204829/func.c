/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204829
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
    var_20 = (~(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)12)))));
    var_21 = ((/* implicit */long long int) max((var_1), (((/* implicit */short) (unsigned char)12))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 ^= ((/* implicit */unsigned long long int) min((max(((~(((/* implicit */int) (short)5027)))), (((/* implicit */int) (short)-2986)))), (((/* implicit */int) (unsigned char)245))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 2])))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max(((unsigned short)40583), ((unsigned short)24964)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2970)) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)24959)), (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)121), ((signed char)-44))))))))));
                        arr_14 [(short)19] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((_Bool) (short)-2955));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)21)) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)5027)))))));
                        arr_17 [i_0] [20LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29217)) ? (-5LL) : (-12LL)));
                        var_25 += ((/* implicit */unsigned char) (+(((min((((/* implicit */int) (unsigned short)19354)), (838837310))) | (-838837328)))));
                    }
                }
            }
        } 
    } 
}
