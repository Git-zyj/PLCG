/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215816
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
    var_19 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_18);
                    arr_7 [i_2] [i_0] = (!(((/* implicit */_Bool) (~(arr_6 [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 1])))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_4 [i_2] [6ULL])), (arr_6 [i_1] [i_1] [(short)9] [i_0]))), (((arr_1 [i_0] [i_0]) ? (arr_6 [(unsigned short)9] [(unsigned short)9] [7ULL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)9] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (482685900826400087ULL)))) || ((!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))))))))));
                }
            } 
        } 
    } 
}
