/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22868
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
    var_10 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)161)), (var_7)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))))) << (((((/* implicit */int) var_5)) - (35)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) var_3);
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_4) : (((/* implicit */int) arr_2 [14U]))))) ? (((((/* implicit */int) (signed char)101)) >> (((((/* implicit */int) var_0)) - (28))))) : (((/* implicit */int) arr_6 [6U] [12ULL]))))), (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) arr_3 [i_1 + 2]))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)33))))), (1456165354U))) ^ (((unsigned int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 3])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((int) (~(2147483647))));
    var_14 = ((/* implicit */unsigned char) var_6);
}
