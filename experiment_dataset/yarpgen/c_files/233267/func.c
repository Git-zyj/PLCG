/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233267
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
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1 + 1]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0] [i_1 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31)))))), (arr_6 [i_2] [i_1] [i_1] [i_0]))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((unsigned short)22962), ((unsigned short)22961)))) && (((/* implicit */_Bool) (-(var_9)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(-1382130810)))) || (((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_3)))))))) : ((~((-(((/* implicit */int) var_2))))))));
}
