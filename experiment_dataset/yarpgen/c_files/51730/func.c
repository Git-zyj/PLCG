/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51730
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
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_9 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 863203398)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) && (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 9547393350347039222ULL)))))))));
                        arr_10 [i_2] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) >= (8899350723362512393ULL)))))));
                        arr_11 [i_3] [i_3] [i_1] = ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_3]);
                        arr_12 [i_0] [i_3] [(short)7] [i_3] = arr_0 [i_3];
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((arr_5 [i_0] [i_0] [i_0] [i_0]) - (arr_5 [9LL] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_10))));
    }
    var_13 = ((/* implicit */unsigned int) var_9);
    var_14 = ((/* implicit */unsigned short) var_2);
}
