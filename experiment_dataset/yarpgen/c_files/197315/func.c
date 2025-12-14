/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197315
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
    var_14 = ((/* implicit */_Bool) ((int) var_0));
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(_Bool)1] = ((/* implicit */signed char) (~(((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) ((1132904461U) == (1132904446U))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_2] [i_1 + 1])), (9223372036854775805LL)))), (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_2]))) : (min((((/* implicit */unsigned long long int) (short)-26135)), (12751742703438956483ULL)))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 - 1]))) ? (((arr_7 [i_0 - 1] [i_0 - 1] [i_1 - 3] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : ((-(((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_3]))))));
                            var_18 = ((/* implicit */unsigned int) max((9223372036854775805LL), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
