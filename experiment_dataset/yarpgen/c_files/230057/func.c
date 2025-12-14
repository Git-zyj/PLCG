/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230057
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_5)) : (min((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (4527))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((((arr_0 [i_0 - 1]) & (arr_0 [i_0 - 1]))) + (2147483647))) << (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1])))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((unsigned short) var_8))))))) - (var_0)));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                var_12 = arr_0 [i_0];
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) ((unsigned char) var_5))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */int) max((min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (var_5))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((unsigned short) arr_12 [i_3])))));
                var_15 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_2]))))))) ? (max((((((/* implicit */long long int) arr_12 [i_3])) | (arr_10 [i_2] [i_3]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_2])) != (var_9)))))) : (arr_10 [(unsigned short)7] [(short)9]));
                arr_13 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
            }
        } 
    } 
}
