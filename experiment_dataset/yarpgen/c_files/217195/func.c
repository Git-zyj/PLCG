/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217195
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max(((-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (2834525990U))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (-183547154) : (((/* implicit */int) (unsigned short)61618)))), ((-(((/* implicit */int) (unsigned short)3913))))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_4 [(unsigned short)21] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (((/* implicit */int) (unsigned short)3924)))));
        arr_5 [i_0] = ((/* implicit */short) min(((~(arr_2 [i_0 + 1] [i_0 - 1]))), (min((((/* implicit */long long int) arr_1 [i_0 - 3])), (arr_0 [i_0 - 3] [i_0 - 1])))));
        arr_6 [i_0] |= (-(((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0 - 3]))))) ? (((/* implicit */unsigned int) -974389601)) : ((~(1460441292U))))));
        var_16 = ((/* implicit */signed char) max((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0 - 2])))), ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 4; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 1460441305U))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [(short)13]))))), (((long long int) min((((/* implicit */long long int) arr_9 [i_1])), (arr_0 [i_1] [i_1]))))));
    }
    for (unsigned char i_2 = 4; i_2 < 21; i_2 += 4) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)28)), (arr_8 [i_2] [i_2 + 4])));
        arr_15 [i_2] [i_2] = arr_2 [i_2] [i_2];
        var_18 = ((/* implicit */short) min((max((arr_0 [i_2] [i_2 - 2]), (arr_2 [i_2 - 4] [i_2 - 4]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)217)))))));
    }
    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_18 [i_3] = ((/* implicit */short) ((signed char) ((int) (short)-31914)));
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) max(((unsigned short)22349), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))));
        arr_19 [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_3 [12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (max((0U), (((/* implicit */unsigned int) arr_16 [i_3])))))));
        var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-6))));
        arr_20 [i_3 - 3] = ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)43186)))));
    }
    var_21 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) var_8))))));
}
