/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39771
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
    var_18 = ((/* implicit */long long int) var_12);
    var_19 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (short)-32747)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */long long int) -1500066943)) <= (1316175815584680035LL)))))) - (max((((/* implicit */int) var_17)), (var_16)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) ((arr_2 [i_0] [i_1]) >= (arr_2 [i_0] [i_1]))))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_6 [i_0] [i_1] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36428)))))), (max((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) 1558436063))))))) ? (min((7386830866168656095ULL), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_1])))) / ((+(arr_2 [i_0] [i_1])))));
                }
            } 
        } 
        arr_9 [8LL] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [5LL] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (var_11))) : (arr_5 [(signed char)8] [i_0] [i_0] [(signed char)8])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */short) 534773760);
        arr_15 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)246)), ((+(((/* implicit */int) arr_0 [i_3]))))));
    }
}
