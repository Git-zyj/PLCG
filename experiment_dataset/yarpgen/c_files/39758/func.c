/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39758
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)2]))))), (((/* implicit */unsigned int) (unsigned short)0)))) ^ (max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [(unsigned short)5] [4U])))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (+(((arr_2 [i_1 - 1] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
            }
        } 
    } 
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) max(((unsigned short)0), (((/* implicit */unsigned short) var_3)))))), (13972536350155681154ULL)));
    var_14 = ((/* implicit */_Bool) var_2);
}
