/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218824
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
    var_17 *= ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9)))) >> (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [1LL] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) : ((((_Bool)0) ? (((/* implicit */long long int) 4100921367U)) : (2034165993188647374LL)))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) (~(((unsigned long long int) (unsigned char)237))));
        }
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_11 [i_2] [17LL] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        arr_12 [i_2] = ((/* implicit */_Bool) (unsigned short)61664);
        arr_13 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4100921367U))))), ((unsigned short)39824)));
        var_19 = ((/* implicit */unsigned short) (signed char)-14);
        arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
    }
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (max((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned char)240)) + (((/* implicit */int) (unsigned short)16))))))));
}
