/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226330
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
    var_13 = ((/* implicit */short) var_4);
    var_14 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)184)))), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_7))))) * (var_9))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_9))))));
                    arr_7 [8] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_6)), (((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_12)) - (6547))))))) * (((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3)))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) max((max((var_12), (var_8))), (max((var_8), (((/* implicit */unsigned short) var_6))))))) / (((/* implicit */int) max(((signed char)-84), (var_2))))));
        var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_12))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741568)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49548))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_11))), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    }
}
