/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203919
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
    var_18 += ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((var_12) - (1160634300U)))))) < (((unsigned long long int) var_13)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned short) var_5)), (arr_2 [i_1]))), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2 - 1] [i_3])))), (((/* implicit */unsigned short) ((_Bool) arr_12 [i_1] [(signed char)0] [(short)13] [i_1])))));
                        var_20 = ((/* implicit */unsigned int) max(((+(arr_4 [i_3]))), (((/* implicit */long long int) ((((_Bool) arr_5 [(unsigned short)3] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((439074718U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        var_21 = ((/* implicit */int) (_Bool)1);
                        arr_13 [i_2 + 2] [i_1] [i_0] &= ((/* implicit */_Bool) (((-(((unsigned int) (unsigned char)2)))) - (((/* implicit */unsigned int) (((+(((/* implicit */int) var_1)))) + (1073479680))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0 - 2] [7] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_0])) ? (var_13) : (((/* implicit */unsigned int) max((1073479680), (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)255)))))));
    }
    var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_2)), (var_4))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
}
