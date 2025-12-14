/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/324
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
    var_16 = ((/* implicit */int) min((max((((((/* implicit */_Bool) (unsigned char)121)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_12))))))), (((/* implicit */long long int) var_1))));
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((unsigned long long int) var_4)) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) - (18446744073709551611ULL)))));
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))))))) > (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_8)) : (var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)-64)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-64)) : (arr_6 [i_0] [i_0])))))), ((+(max((((/* implicit */long long int) var_13)), (var_10)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                    arr_9 [i_0] [i_1 - 1] = ((/* implicit */int) ((arr_6 [i_1] [i_1]) != ((~(((/* implicit */int) var_0))))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1])))), (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_2]))))));
                }
            } 
        } 
    } 
}
