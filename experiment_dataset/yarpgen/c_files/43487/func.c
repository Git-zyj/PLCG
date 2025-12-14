/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43487
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
    var_12 = ((/* implicit */short) var_11);
    var_13 = var_6;
    var_14 = ((/* implicit */signed char) min((min((((((/* implicit */int) (short)-32765)) ^ (var_3))), (((((/* implicit */int) (unsigned char)246)) & (var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)176)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((long long int) var_1)), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [13ULL])) ^ (((/* implicit */int) (unsigned char)2))))), (min((var_2), (((/* implicit */unsigned long long int) var_5))))))));
                arr_5 [i_1] [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned char)143)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_6))))) != (8102259586650167511ULL)))) : (0)));
                arr_6 [8LL] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)243)), (min((((/* implicit */unsigned long long int) var_10)), (576460752303390720ULL)))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) var_4);
            }
        } 
    } 
}
