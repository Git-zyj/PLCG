/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32572
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((arr_2 [i_1 + 2]) >> (((max((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (arr_4 [(signed char)11] [i_1 - 2])))))) - (1527503952253538616ULL)))));
                arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-16LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_2))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)173)), (3802220582U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (max((arr_5 [i_1] [i_1] [i_1 + 1]), (492746731U)))))));
            }
        } 
    } 
    var_14 = var_8;
    var_15 = ((/* implicit */unsigned int) 0LL);
}
