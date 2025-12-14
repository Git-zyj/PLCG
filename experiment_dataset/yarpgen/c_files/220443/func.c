/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220443
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_1 [i_1 + 2]);
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)20814);
                    var_16 = ((/* implicit */unsigned int) max((arr_1 [9U]), (((/* implicit */unsigned long long int) min(((short)-27456), ((short)0))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) arr_4 [i_0]))))) % (((((/* implicit */int) (signed char)52)) % (((/* implicit */int) arr_6 [i_0])))))));
        arr_10 [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_4 [i_0])) <= (arr_7 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : ((-(arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) 3758096384U)) : ((-(15700768429963959441ULL)))));
    }
    var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) / ((+(((5697330984415855810ULL) / (var_1)))))));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_12))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) + (10601861041648716822ULL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) 536870912U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
}
