/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30022
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) -971144217)) ? (((/* implicit */int) arr_1 [i_0])) : (-1343636450));
                    arr_7 [i_0] [i_1] [14U] [i_2 + 3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((2880300056U), (((/* implicit */unsigned int) -1029144055))))) ? (991017731) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)193)))))) / (1343636432)));
                    var_16 = ((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2] [i_2 - 4]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((max((-991017732), (((/* implicit */int) (unsigned char)197)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)195)) : (1343636451)))))));
    var_18 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_13)))) & ((~(((/* implicit */int) var_10))))))) ^ (((((unsigned int) (unsigned char)99)) & (((/* implicit */unsigned int) -1343636466))))));
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 803374256U)))))) : (min((var_5), (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((4128768U), (((/* implicit */unsigned int) var_15))))) ? ((-(((/* implicit */int) (short)-16670)))) : ((+(((/* implicit */int) var_15)))))))));
}
