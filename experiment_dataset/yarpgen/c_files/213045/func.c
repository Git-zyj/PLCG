/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213045
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((~(var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1522496578U)))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 7104604942944319676ULL)))))) < (max((((/* implicit */long long int) min((4068341347U), (((/* implicit */unsigned int) var_0))))), (var_3)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (!(((min((((/* implicit */unsigned long long int) 0)), (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_1]))))));
                    var_14 = max((min((arr_2 [i_0]), (arr_2 [i_2]))), (min((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_1)))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [(short)16] [i_1] [i_1] [i_2]) * (arr_6 [i_0] [i_0] [7U] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_1])) + (arr_1 [i_0])))))))) ^ (((((/* implicit */_Bool) 284822396U)) ? (min((arr_4 [i_2] [i_1] [i_0] [(signed char)11]), (((/* implicit */unsigned int) (unsigned char)248)))) : (((/* implicit */unsigned int) min((-903282269), (-903282269))))))));
                }
            } 
        } 
    } 
}
