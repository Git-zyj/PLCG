/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207087
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_0])), (max((var_11), (var_11))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0]))) : (arr_1 [i_2])))))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [(signed char)11] [i_0])) ? (((/* implicit */int) arr_4 [(signed char)8] [(signed char)8] [i_2])) : (((/* implicit */int) var_2))))), (max((-7627272754275067038LL), (((/* implicit */long long int) 1445494518))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((unsigned int) min((var_10), (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_7 [i_4 + 1] [i_3] [i_3])) / (arr_3 [i_3]))))) / (min((min((arr_0 [i_3 - 3] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_4])))), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3 - 2])))))))));
            }
        } 
    } 
}
