/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47709
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
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2 + 2] [(unsigned char)22]))))) : (max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) 879445674U)) : (2270352402501216047ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [6LL])) ^ (((/* implicit */int) arr_8 [i_2] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_11 [i_0 - 1] [i_0 - 1]), (arr_11 [5] [i_1])))) + ((-(((((/* implicit */int) arr_8 [i_2] [i_3] [i_2])) + (((/* implicit */int) arr_13 [i_0 - 2] [i_1] [(signed char)15] [i_3] [i_4] [i_3]))))))));
                                arr_16 [(signed char)3] [i_1] [i_1] [9LL] [14] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */short) arr_6 [i_2] [i_1] [i_2])), (arr_12 [i_2] [i_1] [i_2]))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) <= (((((-3340873473831422874LL) + (9223372036854775807LL))) << (((arr_15 [i_0 + 2]) - (5631233823788353259ULL)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (3415521616U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_1] [i_1] [i_1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (3415521619U) : (3740420998U)))) && (((/* implicit */_Bool) 3625836781U))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_0)) << (((((/* implicit */int) var_10)) + (21753)))))));
}
