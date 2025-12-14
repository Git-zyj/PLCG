/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36783
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) -205552430)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0)))) ? (((var_13) ^ (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_1] = (~((((!(((/* implicit */_Bool) 205552428)))) ? (var_11) : (max((var_0), (arr_2 [i_0 - 1] [i_0 - 1] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_7 [i_0 - 2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 8128)) | (14ULL)));
                    arr_8 [i_0] [i_1] [i_1] [i_2] |= ((((/* implicit */long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0 + 2] [i_0 + 2]) ? (var_11) : (((/* implicit */long long int) arr_3 [i_1] [i_0]))))))))) | (((((/* implicit */_Bool) 4294967278U)) ? (-6670197967093031992LL) : (6LL))));
                }
            }
        } 
    } 
    var_18 *= max((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) (unsigned char)255))))), ((~(var_1))));
    var_19 = ((/* implicit */unsigned long long int) (+(var_6)));
}
