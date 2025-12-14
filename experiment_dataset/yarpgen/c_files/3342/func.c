/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3342
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) max((var_6), (var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4147851107U)))) : (((long long int) min(((unsigned short)4092), ((unsigned short)61444))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3] [i_0 + 1])) ? (((/* implicit */int) var_4)) : (arr_6 [i_0] [i_1 - 2] [i_3]))), (((/* implicit */int) ((unsigned char) arr_4 [i_0 + 1] [i_0])))));
                        arr_12 [i_0] [15] [i_2 + 2] [i_3] = ((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned short)61444))));
                        var_12 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) < (min((((/* implicit */unsigned int) (unsigned short)61436)), (arr_2 [i_0 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 4) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_4 + 2] [i_5 - 1] [i_5 - 1]), (((/* implicit */int) arr_13 [i_0 - 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_4 - 4] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)61444)) : (arr_11 [(short)19] [i_0 + 2] [(unsigned char)5] [i_4 - 2] [i_5] [(unsigned char)15]))) : ((+(arr_11 [i_0] [i_0 - 1] [i_4] [i_4 + 1] [i_4] [i_5 - 1]))))))));
                    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_4 + 2] [i_0] [i_5 - 1] [14LL])) : (((((/* implicit */int) (unsigned short)4091)) ^ (((/* implicit */int) arr_10 [i_0])))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */unsigned long long int) var_5);
}
