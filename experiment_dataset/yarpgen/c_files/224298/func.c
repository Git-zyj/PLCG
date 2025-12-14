/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224298
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
    var_16 &= ((/* implicit */unsigned int) ((min(((~(var_8))), (min((((/* implicit */unsigned int) 0)), (var_6))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-1223708612))))))))));
    var_17 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_13)))) ? (var_5) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (var_1)))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1118353665)) || (((/* implicit */_Bool) var_6))))), (var_10))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [4U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [18]), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (var_0) : (var_5))) : (min((-1118353665), (var_11)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [12] [i_1] [i_2] &= ((/* implicit */int) (-(((((/* implicit */_Bool) (~(284828099U)))) ? (((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 + 1])) : (min((arr_3 [0U] [14U] [i_2]), (((/* implicit */unsigned int) var_13))))))));
                    arr_11 [i_0] [i_1] [18] &= (-(((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */unsigned int) var_13)) : (2564218244U))));
                    arr_12 [i_0] = ((/* implicit */int) min(((((-(arr_1 [i_0]))) - (2147483647U))), (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
                    var_18 = (i_0 % 2 == 0) ? (((/* implicit */int) (+(((arr_3 [i_0] [9U] [i_0]) << (((arr_3 [i_0] [17U] [i_0]) - (1792822727U)))))))) : (((/* implicit */int) (+(((arr_3 [i_0] [9U] [i_0]) << (((((arr_3 [i_0] [17U] [i_0]) - (1792822727U))) - (749598728U))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */int) (((-((+(var_8))))) != ((~((+(386134107U)))))));
}
