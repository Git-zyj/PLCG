/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54836
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_4))))))) ? (max((var_7), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4893762130482505567ULL))), (var_11)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((unsigned short) ((((/* implicit */_Bool) var_4)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((/* implicit */unsigned short) (unsigned char)20))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (4893762130482505579ULL)))) ? (((min((((/* implicit */unsigned long long int) var_0)), (8452455766667478098ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_0)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1])), (min((67108862), (((/* implicit */int) (unsigned char)128))))))))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (short)31014))));
}
