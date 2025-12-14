/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238750
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
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) var_5)), (arr_1 [i_0])))))) ? (((/* implicit */int) var_9)) : ((~(((arr_4 [i_0] [i_1] [i_2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
                    var_13 = ((/* implicit */unsigned short) max((((int) (-(((/* implicit */int) arr_6 [(short)10]))))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3])) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 - 2] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])))))) : (arr_3 [i_1 - 2] [i_1 - 1])));
                }
            } 
        } 
    } 
}
