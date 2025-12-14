/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245811
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) 1447290141475854189LL);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_7))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (arr_6 [i_3] [i_3] [i_2] [i_1]))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((arr_4 [i_1] [i_1]), (666388615U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2] [i_3])))))))))));
                    arr_8 [i_1] [i_1] [i_1] = min(((-(arr_7 [i_3] [0] [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2403803902448476144LL)) < (var_11)))) > (((/* implicit */int) ((arr_6 [i_1] [i_3] [13ULL] [i_3]) < (((/* implicit */int) (signed char)-3)))))))));
                }
            } 
        } 
    } 
}
