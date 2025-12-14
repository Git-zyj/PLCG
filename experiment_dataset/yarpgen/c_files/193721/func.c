/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193721
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */int) (short)-2754)), (var_9))), ((+(var_8)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                arr_5 [i_0] = ((/* implicit */short) ((unsigned int) ((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)90)))) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_2 [7]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (var_13)));
    var_18 = ((/* implicit */unsigned int) (unsigned char)0);
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : ((((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
}
