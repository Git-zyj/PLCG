/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191527
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
    var_12 = ((/* implicit */unsigned short) ((_Bool) 3959008859U));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_2 + 1] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) max((arr_2 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_0])))))) > (max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) max((arr_3 [i_1] [i_2]), (arr_3 [i_0] [i_1]))))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_0] [i_2])) << (((arr_1 [i_0]) - (3237727387U))))), (((/* implicit */int) ((_Bool) arr_7 [i_0])))))), (max((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((arr_7 [i_2]), (arr_0 [i_1] [i_0 + 1])))))))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((arr_1 [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (arr_2 [i_2] [i_1]))))), (((/* implicit */unsigned long long int) max((min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_4 [i_2] [i_2])))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))))))));
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (_Bool)0))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_1 [i_2]), (arr_1 [i_2])))) + (((unsigned long long int) arr_1 [i_0]))))) && (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_1]))) % (arr_2 [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((_Bool) ((short) (_Bool)0)));
}
