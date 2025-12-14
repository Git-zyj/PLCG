/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43707
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
    var_16 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) : (max((((/* implicit */unsigned long long int) (unsigned short)3072)), (18446744073709551615ULL))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (unsigned short)36120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551587ULL))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned char)120)), (arr_0 [i_0]))), (((long long int) (unsigned char)120))))))))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) 262143U)) ? (((long long int) -8188692586576389554LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) var_4))));
        var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-8188692586576389555LL)))))), (((unsigned long long int) var_11))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) var_13);
                    arr_10 [i_1 + 4] [i_2] [(signed char)10] = ((/* implicit */long long int) (!((_Bool)0)));
                }
            } 
        } 
    }
}
