/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222550
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (17183285853310619413ULL)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_0 [i_3]))));
                        arr_10 [i_2] = (-((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (17183285853310619396ULL)))))));
                        arr_11 [i_0] [i_1] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((min((17183285853310619421ULL), (((/* implicit */unsigned long long int) (unsigned char)208)))) & (((/* implicit */unsigned long long int) min((max((var_6), (((/* implicit */long long int) (short)12657)))), (((/* implicit */long long int) arr_2 [i_3])))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (var_3)));
    var_15 *= ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (max((var_1), (((/* implicit */int) (signed char)(-127 - 1))))) : (((1465356273) | (((/* implicit */int) (signed char)127))))))));
}
