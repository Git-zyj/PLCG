/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224527
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_17 -= ((((/* implicit */int) ((unsigned char) ((unsigned int) (unsigned char)128)))) / (min(((+(((/* implicit */int) var_2)))), (arr_4 [i_1]))));
                        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_1 [i_0]))) / (max(((~(((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_3] [i_2] [i_3])) : (((/* implicit */int) arr_2 [i_2 + 2]))))))));
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */int) arr_2 [i_0]);
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
        var_19 = ((arr_10 [i_0]) | (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0]) : (arr_7 [i_0] [i_0]))) : (var_6)))));
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (_Bool)1))))) : (arr_8 [i_0] [i_0] [i_0])));
    }
    var_20 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) | (((/* implicit */long long int) var_10))))));
}
