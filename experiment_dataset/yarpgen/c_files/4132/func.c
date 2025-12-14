/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4132
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (var_16) : (var_19)))))) ? (((((var_2) < (((/* implicit */unsigned long long int) var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_3)))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_10))))) : (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
    var_21 = var_1;
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (var_6)))), (((unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) -880045619)) ? (((/* implicit */unsigned long long int) var_4)) : (var_0))) : (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((var_4) >> ((((-(arr_1 [i_2] [i_0]))) - (4244958195U)))))));
                    var_23 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [(unsigned char)5] [i_2] [i_2]))));
                    var_24 = ((/* implicit */_Bool) (unsigned short)0);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 2])) + (((/* implicit */int) arr_3 [i_0 - 1]))))))))));
                        var_26 = ((/* implicit */long long int) -880045629);
                    }
                    arr_11 [i_0] [7ULL] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) max(((_Bool)1), (var_5))))))), (max((arr_5 [i_0 - 2] [i_1] [i_2]), (arr_5 [i_2] [(unsigned char)0] [i_0])))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) -880045619))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? ((-(var_6))) : (min((880045628), (((/* implicit */int) (_Bool)1)))))) : (max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_14))))));
}
