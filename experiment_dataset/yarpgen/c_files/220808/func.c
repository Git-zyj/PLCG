/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220808
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))))), ((-(2520705392U)))));
                arr_7 [i_1] |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((unsigned int) (_Bool)1))) / (((1353216130519855842LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0] [0U]), (((((/* implicit */long long int) ((/* implicit */int) (short)1131))) > (-1353216130519855843LL)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) var_5);
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))), (3646738527U)));
}
