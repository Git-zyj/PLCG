/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229945
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
    var_10 = ((/* implicit */short) ((unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) && (((/* implicit */_Bool) ((unsigned long long int) var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] [16ULL] [i_2] &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) + (arr_6 [i_0] [i_0] [i_2]))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((unsigned short) ((arr_5 [1U] [i_1 + 1]) / (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [0U] [i_2])))))));
                }
            } 
        } 
        var_12 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11037))) ^ (arr_6 [i_0] [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (arr_5 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [17U] [i_0]))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)26)), (arr_6 [i_3] [i_3] [i_3]))))) + (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_3)), (arr_10 [i_3])))))));
        var_14 = ((/* implicit */unsigned char) ((((((arr_4 [i_3] [i_3]) - (var_0))) - (((unsigned int) arr_4 [i_3] [i_3])))) + (((/* implicit */unsigned int) min((((2147483647) - (((/* implicit */int) (unsigned char)24)))), (((int) arr_1 [i_3])))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) 11096685333085990272ULL)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3]))))))))) & (max((min((((/* implicit */unsigned long long int) var_0)), (arr_6 [i_3] [i_3] [(unsigned char)13]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (2049836219))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (3)))))) * (min((((unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_5)))))));
}
