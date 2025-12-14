/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46871
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) ((unsigned char) arr_1 [i_0])))))), (((int) ((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) var_3)) - (216))))))));
                    var_10 = ((/* implicit */unsigned int) min((min(((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2])))), (max((2147483647), (((/* implicit */int) (short)-27752)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7)))) : (max((var_0), (((/* implicit */int) var_5))))))));
    var_12 = ((/* implicit */short) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (-356677327795650282LL)))))));
}
