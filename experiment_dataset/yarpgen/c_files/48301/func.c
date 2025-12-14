/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48301
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(unsigned short)6] [(unsigned short)17] [i_1 - 3])) : (((/* implicit */int) arr_7 [24LL] [7U] [i_1 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2]))))) : (((/* implicit */int) ((unsigned char) (signed char)-46)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [(unsigned char)21] [i_2] [i_3] [(unsigned short)5] [i_3] = ((/* implicit */unsigned int) (((~(arr_14 [i_4 + 1] [i_3 - 1] [i_1 - 4] [i_0 - 3] [2U] [i_0]))) < (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                                var_12 = ((/* implicit */unsigned short) (((~(2346020171U))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_0] [(unsigned short)8] [i_0] [i_1 - 4]), (arr_16 [i_2] [i_2] [i_3 + 1] [(signed char)16] [(unsigned short)8])))))));
                                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                                arr_19 [2LL] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_4]), (((/* implicit */unsigned char) (signed char)-46)))))) - (max((var_3), (((/* implicit */long long int) arr_6 [i_3])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_4 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((var_8) == (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50737))))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) var_8))))))));
}
