/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52987
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2048)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3))))))) : ((~((~(((/* implicit */int) (unsigned char)9))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 &= ((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_6)), (arr_2 [i_1] [i_3])));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (var_6))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) ((unsigned int) 8542657571705452047ULL));
    }
}
