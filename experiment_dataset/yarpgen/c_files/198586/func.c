/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198586
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(var_3)));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14767004849759191061ULL)) ? (((var_0) % (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)39176)) >> (((/* implicit */int) (_Bool)0))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            {
                arr_10 [i_2] = ((/* implicit */_Bool) ((((5676384869156066704ULL) <= (((/* implicit */unsigned long long int) -1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((3679739223950360554ULL), (14767004849759191061ULL)))));
                arr_11 [i_2] = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (var_13))))) : ((~(var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25329))) : (((min((var_0), (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
}
