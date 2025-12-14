/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234609
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = arr_1 [(short)10] [i_0];
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_8 [i_3] = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_4 [i_3 + 2] [i_1] [i_2] [i_0])), ((-(((/* implicit */int) var_8))))))));
                        var_13 = ((/* implicit */_Bool) (-((+(min((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_0] [i_1] [i_2] [i_2])))))));
                        var_14 = 1048575;
                        var_15 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) : (((/* implicit */int) var_8)))) << (((min((arr_5 [i_0]), (arr_1 [i_0] [i_0]))) + (3502885708888126439LL))))) - ((~(((/* implicit */int) var_0))))));
                        var_16 = ((/* implicit */unsigned int) ((((unsigned long long int) 794019136846759077ULL)) % (3754088290468875568ULL)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) arr_6 [i_0]);
        var_18 ^= ((/* implicit */unsigned short) (~((-(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
        arr_9 [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) << (((((((/* implicit */int) (signed char)-93)) + (120))) - (19)))))) - (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (((-(arr_0 [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)21131)) || (((/* implicit */_Bool) -7907027614480437847LL)))))))))));
    }
    var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)41)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
