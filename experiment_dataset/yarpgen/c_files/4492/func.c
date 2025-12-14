/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4492
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
    var_20 = ((/* implicit */short) min((var_20), (((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) -1393891963)) : (11359364801462934860ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))))) : (((unsigned int) var_6)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [5ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_3 [7LL])))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_15) : (((/* implicit */unsigned long long int) 1425091786U)))))) : (((((_Bool) (signed char)-2)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_0] [i_0 + 3] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (((unsigned long long int) ((int) (_Bool)1)))));
            }
        } 
    } 
}
