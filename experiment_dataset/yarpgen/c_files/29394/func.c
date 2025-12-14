/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29394
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)10)) ? (-1) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_1])) & (((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1])))));
        arr_7 [2U] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) arr_8 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12297403398880262378ULL)))))))) ? (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_9 [i_2])))) : (((((/* implicit */int) arr_5 [i_2])) ^ (((/* implicit */int) max((((/* implicit */short) var_14)), (arr_5 [i_2]))))))));
        var_20 ^= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) || (((/* implicit */_Bool) arr_8 [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (9223372036854775807LL))) : (((/* implicit */long long int) max((-694901164), (((/* implicit */int) arr_9 [2]))))))), (((/* implicit */long long int) ((unsigned short) ((arr_4 [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))) : ((+(((/* implicit */int) var_3)))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) -1))));
    }
    var_23 = ((/* implicit */unsigned short) var_11);
}
