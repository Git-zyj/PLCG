/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45941
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
    var_10 = ((/* implicit */int) (~(max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_2)))), ((((_Bool)1) ? (3230253570247344429LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(var_1)))) : (((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (((unsigned int) var_9)))))));
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((((((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 3] [i_0 + 2])) + (((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))));
                    arr_8 [i_0] [i_1] [i_0] = ((unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) 3181660276U)) != (-3230253570247344420LL))))));
                    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (1589199255481018866ULL)))) ? (((/* implicit */int) (!(var_6)))) : ((~(((/* implicit */int) arr_1 [i_2]))))))));
                }
            } 
        } 
    } 
}
