/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233826
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3])))))) : ((+(arr_2 [i_0] [i_1]))))))));
                arr_6 [i_0] [11ULL] = ((/* implicit */signed char) ((unsigned short) (!((_Bool)0))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_10)) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max(((signed char)-26), ((signed char)105)))) : ((-(((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */_Bool) var_1);
}
