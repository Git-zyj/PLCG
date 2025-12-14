/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201090
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_10 += (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */unsigned int) (_Bool)0)), (4272829673U))))));
        var_11 = ((/* implicit */long long int) var_8);
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        arr_6 [8LL] = ((/* implicit */long long int) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_2 [i_1 - 1] [i_1 - 1])))))));
        arr_7 [i_1 + 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2))) : (2438814011U)))) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 1])) : ((+(((/* implicit */int) var_4))))))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1] [i_1 - 2]))))) ? ((+((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */int) ((short) 0))) >= (((/* implicit */int) ((unsigned char) (_Bool)1)))))))))));
        arr_8 [9LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1 - 2] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (var_7)));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) >= (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_1);
                arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
}
