/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232794
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((min((arr_0 [i_0]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (unsigned char)64)))) << (((9824786452352784051ULL) - (9824786452352784032ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((long long int) (signed char)-74)) <= (((/* implicit */long long int) ((/* implicit */int) (short)-27209)))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((int) var_9)) >> (((((/* implicit */int) arr_2 [i_0])) - (132))))) == (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((unsigned short) arr_2 [i_0]))))))));
        arr_7 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (signed char)49)))) : (((/* implicit */int) var_9))))) + (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (64692236U))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */short) ((min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)22))) + (arr_9 [i_1] [i_1]))))) | (max((max((((/* implicit */long long int) 1195917686)), (arr_9 [(_Bool)1] [i_1]))), (((/* implicit */long long int) var_6))))));
        arr_11 [i_1] = ((/* implicit */_Bool) min(((~(arr_9 [i_1] [i_1]))), ((+(min((arr_9 [i_1] [i_1]), (((/* implicit */long long int) var_10))))))));
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
        arr_13 [(_Bool)1] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45938))) == (arr_8 [(_Bool)1] [i_1])))));
    }
    var_11 &= ((/* implicit */short) var_4);
    var_12 = ((/* implicit */unsigned long long int) max((((unsigned int) var_2)), (((/* implicit */unsigned int) var_8))));
}
