/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220838
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) (~(((min((1021277354), (1021277328))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)25851)))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (+((-(-5388589292316233307LL)))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))))) : (min((-1021277355), (((/* implicit */int) (unsigned short)1296))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) (~((((((_Bool)1) ? (1073741822U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1296))))) >> (((((long long int) -1021277355)) + (1021277369LL)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)64240)))) * ((-(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)64249)) < (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) ((signed char) -336069025))))))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(-992323627)))), (((unsigned long long int) (unsigned short)31807))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((((((/* implicit */_Bool) ((-1021277355) & (((/* implicit */int) (short)28645))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1322))) <= (3711874939U)))) : ((-(-336069025))))) > (((336069024) + (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)22736)))))))))));
    }
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_13)))))));
    var_22 |= ((/* implicit */signed char) var_0);
    var_23 = ((/* implicit */long long int) (signed char)-7);
}
