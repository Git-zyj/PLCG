/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249576
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_2 [i_0])))), (arr_0 [i_0] [i_0])))), (min((arr_2 [i_0]), (((arr_1 [i_0]) ^ (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (((arr_1 [i_1]) << (((arr_1 [i_2]) - (10847946347024601932ULL))))))) & (((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)56944)))) & (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((arr_1 [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))))), (min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_0 [i_0] [i_2])))), ((-(((/* implicit */int) var_4))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) var_16);
                    var_21 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]);
                    var_22 = var_11;
                }
            } 
        } 
        arr_8 [3] = arr_0 [i_0] [i_0];
    }
    var_23 = ((/* implicit */long long int) var_0);
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((long long int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8363427959520610776LL)) / (2881612481265547516ULL)))) ? (((((/* implicit */unsigned long long int) var_10)) | (var_5))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_10))))))));
    var_25 |= ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) 8363427959520610776LL)), (max((var_3), (((/* implicit */unsigned long long int) -8363427959520610776LL)))))));
}
