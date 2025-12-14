/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40711
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
    var_18 = ((/* implicit */int) 3985004013U);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) 309963282U);
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 3985004013U))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 3985004018U))))))) : (((((/* implicit */int) (signed char)-71)) * (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 4] [i_0]))))));
                                var_21 = ((/* implicit */unsigned char) (-(((2144140175U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
                                var_22 += ((/* implicit */unsigned long long int) ((unsigned short) 3985004010U));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 309963283U))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 764827386U)) ? (arr_11 [i_0 + 4] [3ULL] [3ULL] [i_2] [i_0] [i_0 + 3] [(signed char)3]) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0 + 1] [i_2])))) ? (((/* implicit */unsigned int) ((((arr_11 [i_0] [(short)4] [(short)4] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 3]) + (2147483647))) << (((3985004015U) - (3985004015U)))))) : (var_5)));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), ((short)25670))))) - (max((((/* implicit */unsigned int) ((var_11) || (((/* implicit */_Bool) 3985004018U))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) % (309963282U))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3985004018U))));
    var_25 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-11155)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (short)8767)) : (((/* implicit */int) ((3985004012U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */int) min(((short)11), (((/* implicit */short) var_2))))) * (((/* implicit */int) var_11))))));
}
