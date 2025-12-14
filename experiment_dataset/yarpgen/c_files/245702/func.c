/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245702
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
    var_12 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)12] [i_1] [i_1] [i_0] = ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (-9223372036854775800LL)));
                    var_13 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)32760)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(signed char)3])) : (((/* implicit */int) (unsigned char)176)))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((max((-9223372036854775792LL), (((/* implicit */long long int) arr_3 [i_1])))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_3 [i_1])))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)0)))), ((+((~(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_1]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_0);
}
