/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5083
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_15 ^= ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 3])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0 + 4] [i_0 - 2])) + (113))) - (20))))));
                        arr_10 [(unsigned char)2] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_2] [i_2])) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))) + (1177977683458023721LL))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_16 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1177977683458023721LL)) ? (1177977683458023717LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1] [i_2] [i_4]) <= (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))) << (((min((1149523215U), (((/* implicit */unsigned int) ((int) arr_9 [i_0] [i_4] [(unsigned short)13] [i_1] [i_0]))))) - (1149523173U)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1177977683458023721LL)) ? (1177977683458023717LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1] [i_2] [i_4]) <= (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))) << (((((min((1149523215U), (((/* implicit */unsigned int) ((int) arr_9 [i_0] [i_4] [(unsigned short)13] [i_1] [i_0]))))) - (1149523173U))) - (3611589838U))))));
                        arr_13 [i_2] [i_1] [(signed char)14] [i_2] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [(unsigned char)1] [i_2] [i_2] [i_0]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((short) (+(3145444080U)))))));
                    }
                    var_18 -= ((/* implicit */signed char) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_14);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 3145444102U))));
    var_21 = ((/* implicit */unsigned short) 18ULL);
}
