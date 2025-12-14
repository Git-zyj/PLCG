/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227538
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1])))));
                        arr_11 [i_3] [i_2] [i_2] [i_1] [(unsigned char)14] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)13]))) - (3922789990U)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [(signed char)12] [i_1])) ? (arr_6 [i_2 - 3] [(signed char)1] [i_2 - 3]) : (((/* implicit */int) (unsigned char)204)))) : (((((/* implicit */_Bool) (~(372177305U)))) ? (((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [16U])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [13] [(unsigned char)14] [i_2])) : (((/* implicit */int) (_Bool)0))))))));
                        arr_12 [7ULL] [i_1] [i_1] [i_1] [5U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 372177306U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_1] [18] [i_2] [i_1] [i_1]) : (arr_10 [(unsigned char)8] [i_1] [i_2] [i_3] [i_1])))))) ? (-4355016212490174935LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_4 [i_1] [(unsigned char)13] [i_2 - 1]) : (((/* implicit */unsigned int) arr_6 [i_2] [i_2 - 3] [3])))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) << (((3922789990U) - (3922789965U))))) == (((/* implicit */int) arr_2 [(signed char)18]))))), (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 2]))))))));
                    }
                } 
            } 
        } 
        arr_13 [16] = ((/* implicit */unsigned long long int) ((int) min((arr_7 [i_0]), ((unsigned char)227))));
    }
    var_19 = ((/* implicit */unsigned short) (+(var_11)));
}
