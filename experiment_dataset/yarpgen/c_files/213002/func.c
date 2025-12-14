/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213002
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5177194834301414691LL)) ? (((((/* implicit */int) (signed char)119)) / (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])))) : (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)119))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) : (arr_6 [12ULL] [11U])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) arr_1 [(short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1] [i_2])))))) : (((((/* implicit */_Bool) (unsigned short)1375)) ? ((+(var_2))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_2])))))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) >= (((unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_2])), ((unsigned short)40709))))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-114)), (((((/* implicit */_Bool) (short)426)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(unsigned short)2] [(unsigned short)2]))))))), (arr_8 [(short)12] [i_3])));
            var_20 = ((/* implicit */signed char) max((min((((/* implicit */int) (signed char)102)), (-1124159688))), (((/* implicit */int) min((arr_2 [i_1 + 2] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 + 2]))))));
        }
        var_21 = ((/* implicit */int) (unsigned char)6);
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))))), (((unsigned long long int) max((((/* implicit */int) (signed char)-103)), (var_3))))))));
}
