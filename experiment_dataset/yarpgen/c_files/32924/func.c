/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32924
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
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_0 [10U]))))), (((unsigned short) arr_0 [i_2]))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_2]))) : (((/* implicit */int) arr_1 [i_1]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2]))))) != (((((/* implicit */_Bool) 637604832U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (393216U))))))) >= (3657362464U));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) var_4)))))) - (-5723789502357974368LL)))) ? ((+(((((/* implicit */long long int) var_14)) / (var_13))))) : (((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
                    var_17 = (-(arr_5 [i_1]));
                }
            } 
        } 
    } 
    var_18 = ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_2);
                    var_20 = ((/* implicit */unsigned short) (+(((unsigned int) (short)-6))));
                    var_21 -= ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
}
