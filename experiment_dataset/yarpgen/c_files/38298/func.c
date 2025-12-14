/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38298
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) * (((/* implicit */int) var_12))));
        var_19 = (~(((/* implicit */int) var_8)));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned short)28277))));
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_2 [i_1 - 2] [i_1 - 1]))), (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_5 [i_1 - 2]))))));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3926129220U))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) 1941616172316789369LL);
                    var_23 = ((/* implicit */long long int) -839109157);
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4 - 2] [i_4])))))) ^ ((-(2736917757U)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(max((var_5), (((906003787074217611LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))))))))))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */int) ((166946863U) != (((/* implicit */unsigned int) 1635629661))))) ^ (arr_12 [i_2] [i_2]))) : (arr_12 [i_2] [i_2])));
    }
    var_27 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) >= (((/* implicit */int) var_0)))));
}
