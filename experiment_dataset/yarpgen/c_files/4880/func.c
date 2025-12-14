/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4880
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (0LL) : (arr_0 [i_1])))) ? ((~(((((/* implicit */_Bool) arr_2 [i_1])) ? (var_13) : (arr_5 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (min((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1])) ? (arr_4 [i_0 - 2] [i_0 - 1]) : (arr_4 [i_0 - 2] [i_0 - 1]))), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1])))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((3266525110U) == (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) arr_1 [i_0] [14U]))))))) ? (((((/* implicit */long long int) arr_3 [i_0 + 1] [10U])) + (arr_0 [(unsigned char)1]))) : (((/* implicit */long long int) ((int) ((-1023403895104294951LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26358))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_15), (max((arr_10 [(short)20] [i_3] [i_3] [i_2] [i_2] [i_1] [15LL]), (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_0 + 1])))));
                                var_20 = ((/* implicit */unsigned char) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))));
                                var_21 = ((/* implicit */unsigned short) ((arr_12 [7LL] [i_1] [i_2] [20U] [i_4]) ? (((((/* implicit */_Bool) arr_6 [3U] [i_2] [i_3] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [22LL] [10] [i_3] [i_0 - 1] [i_0 - 2]))) : (((((arr_9 [15] [(unsigned short)19] [0U] [i_1] [(unsigned char)18]) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((long long int) -6803537117274630166LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (+(var_13)));
}
