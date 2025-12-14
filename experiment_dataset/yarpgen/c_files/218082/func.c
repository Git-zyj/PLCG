/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218082
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
    var_15 = ((min((((((/* implicit */long long int) var_5)) - (var_11))), (((/* implicit */long long int) (+(var_5)))))) - (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) 399690737889934255ULL)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (18047053335819617360ULL))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)253)) : (var_4))), (((/* implicit */int) var_0))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)133))))) ? (var_11) : (var_11)))));
    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (((/* implicit */int) var_3)))))) % ((~(var_5))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) (signed char)-108);
                                var_19 = ((/* implicit */int) (signed char)-68);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 18047053335819617361ULL))));
                    arr_11 [i_0 - 2] = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)133)) != (((/* implicit */int) (unsigned char)123))))))) > (min((((/* implicit */int) (unsigned short)16)), (min((((/* implicit */int) (short)32767)), (arr_8 [i_0] [i_1] [(short)4] [i_2])))))));
                }
            } 
        } 
    } 
}
