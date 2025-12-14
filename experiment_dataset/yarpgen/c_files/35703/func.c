/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35703
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1] [i_2]))) > (arr_1 [i_2]))))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_2 + 1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_2 + 2] [i_2 - 1]);
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : ((~(arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_8), (((/* implicit */short) arr_4 [i_0] [i_0] [(unsigned short)4] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_2 [i_0] [i_0] [i_0]))) > (((/* implicit */long long int) arr_5 [(signed char)0])))))) : (max((arr_3 [10]), (arr_3 [(unsigned short)14]))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)251))));
        arr_8 [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_6 [(short)3] [i_0] [i_0])))) >> ((((-(var_9))) - (5657289480518455788LL)))))) ? (((/* implicit */long long int) var_3)) : (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [(unsigned short)6] [(unsigned short)6] [i_0]))))));
        var_21 |= ((/* implicit */short) min(((-(arr_2 [i_0] [i_0] [i_0]))), (max((arr_2 [(unsigned char)12] [i_0] [i_0]), (((/* implicit */long long int) var_15))))));
    }
    var_22 = ((/* implicit */short) var_10);
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_5))));
}
