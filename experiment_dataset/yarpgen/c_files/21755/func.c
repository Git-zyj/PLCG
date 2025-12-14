/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21755
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (signed char)-114)), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) / ((~(((/* implicit */int) arr_8 [i_0]))))));
                    var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_2]) != (((/* implicit */int) arr_8 [i_2]))))), (4836842274440794386ULL)))) ? ((+(((/* implicit */int) arr_6 [i_2] [i_0])))) : (min((arr_1 [i_1] [i_2]), (((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((14366844541461369034ULL) != (((/* implicit */unsigned long long int) (-((+(arr_0 [i_2]))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(var_4)))), (-1LL)));
}
