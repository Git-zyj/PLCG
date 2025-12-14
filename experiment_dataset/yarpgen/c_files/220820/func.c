/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220820
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1676389664)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24576))) : (-4200395970762682208LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) max((((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (max((528482304), (((/* implicit */int) arr_7 [5U] [5U]))))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_2] = ((/* implicit */_Bool) (-(max((-528482315), (((/* implicit */int) max((var_3), (arr_14 [i_4] [i_4]))))))));
                                arr_16 [i_4] [i_2] [i_3] [22U] [i_4 - 1] = ((/* implicit */signed char) (+(max(((+(((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned short)1] [(unsigned short)1] [i_3] [(signed char)9] [(signed char)9])))), ((~(((/* implicit */int) (unsigned short)4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (short)31981);
    var_15 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)48)))))));
    var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((signed char) var_11)), (var_3))))));
}
