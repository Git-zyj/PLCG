/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23914
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) min((-2229049612991643122LL), (var_10))))))), ((-(var_7)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */signed char) ((arr_5 [(_Bool)1] [i_2 + 2] [i_2 + 2]) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-46)))))));
                    arr_10 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)21)), (arr_6 [i_2 - 1]))))));
                    arr_11 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) var_1)));
                    arr_12 [i_0] [i_0] [i_1 - 3] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */int) arr_3 [i_2 + 1] [i_1 + 2] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_2 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */short) (signed char)40)))))) : ((~(1202803655U)))));
                    arr_13 [i_0] [i_0] [i_0] [12ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10)))) ? (((((/* implicit */_Bool) ((var_9) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) 5807346353229752363LL))))) ? (min((arr_5 [i_2 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) -1781170466)))) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (min((18446744073709551602ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (14ULL))) & (((/* implicit */unsigned long long int) -1))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)32092))))) % (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
