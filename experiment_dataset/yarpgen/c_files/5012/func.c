/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5012
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((short) arr_0 [i_0 + 2]);
        arr_4 [(unsigned short)4] [8LL] = ((/* implicit */unsigned int) 576460752303423488ULL);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (~(((min((((/* implicit */unsigned int) (unsigned short)54856)), (1217239070U))) - (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned char)6)))))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)6), ((unsigned char)6))))))), (max((arr_5 [i_1]), (arr_5 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)249)) ^ (((/* implicit */int) (unsigned char)12)))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)5))))));
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)6)), ((-(((/* implicit */int) (unsigned char)250))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) & (((/* implicit */int) arr_9 [i_2 + 1]))))) ? (((/* implicit */int) max(((unsigned char)5), ((unsigned char)1)))) : (((/* implicit */int) ((unsigned short) (unsigned char)5)))));
        arr_11 [8LL] [i_2] = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_6 [(unsigned char)10])) <= (((/* implicit */int) arr_6 [13ULL])))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) (unsigned char)15)))), (((((/* implicit */int) (unsigned char)249)) * (((/* implicit */int) (unsigned char)4))))));
        arr_12 [i_2] = ((/* implicit */long long int) max((((((_Bool) (unsigned char)24)) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_6 [i_2])))) : ((+(((/* implicit */int) var_2)))))), ((((+(((/* implicit */int) arr_8 [i_2])))) * (((/* implicit */int) var_10))))));
    }
    var_19 = ((/* implicit */unsigned short) var_11);
}
