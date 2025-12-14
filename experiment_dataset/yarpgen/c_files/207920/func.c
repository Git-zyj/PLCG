/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207920
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
    var_16 |= ((/* implicit */unsigned int) min((0ULL), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15ULL))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_5))))) : (max((866715359U), (((/* implicit */unsigned int) var_9))))));
                    arr_8 [i_2] [(signed char)10] = ((/* implicit */long long int) ((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)40)))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2542956523139398832LL)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3453917129099147715LL)))))) : (min((-2613391750615803552LL), (((/* implicit */long long int) (unsigned char)218))))))));
                }
            } 
        } 
    } 
}
