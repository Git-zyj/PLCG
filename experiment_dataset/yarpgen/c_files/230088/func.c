/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230088
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_11))));
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (-((-(arr_3 [i_0] [i_1])))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_7))));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_2])), (min((var_3), (((/* implicit */int) (unsigned short)65530))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)136))) ? (((((arr_3 [i_0] [i_0]) > (((/* implicit */long long int) var_10)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (unsigned short)65535))))) ? (max((((/* implicit */int) var_5)), (arr_1 [i_0]))) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned char) (unsigned short)18);
    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))), (((/* implicit */unsigned int) var_13))));
}
