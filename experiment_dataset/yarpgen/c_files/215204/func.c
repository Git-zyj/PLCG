/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215204
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (-(arr_0 [i_0])));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_1 [i_0]))))), ((+(((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [(unsigned char)6]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [4U]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((unsigned short) arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) (-(var_19)))) ^ (((unsigned long long int) (unsigned short)30356)))));
                    var_24 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_9 [i_3])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))), (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1] [i_3])) ? (max((arr_9 [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [23ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_4))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(max((arr_0 [(_Bool)1]), (arr_0 [0U]))))))));
        var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_7 [i_1] [i_1])))), (((/* implicit */int) arr_11 [i_1] [i_1]))))), (max((var_2), (((/* implicit */unsigned long long int) (~(var_10))))))));
    }
    var_28 = ((/* implicit */_Bool) var_5);
}
