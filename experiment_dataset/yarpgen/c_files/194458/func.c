/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194458
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) ((unsigned char) (unsigned short)52596)))), (2230579614904464631LL))))));
                    arr_8 [i_2] [i_1 - 1] [(short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)12961))), (1191612617421661849ULL)))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2230579614904464631LL)) ? (((/* implicit */int) var_5)) : (var_10)))))));
                    arr_9 [(short)17] [i_1] [i_1] [i_1] = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) var_6))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min(((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 1])))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2230579614904464614LL))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (((var_4) ? (((/* implicit */long long int) var_2)) : (8254177399949016597LL))) : (2230579614904464631LL)))));
}
