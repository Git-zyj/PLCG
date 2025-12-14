/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239397
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((3814152785U), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */long long int) (+(((int) (unsigned short)50681))))) : (((long long int) var_8))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */short) ((((arr_0 [i_2]) + (2147483647))) << (((((unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 2])) - (10498940478504423801ULL)))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0 - 2]) : (arr_8 [i_0 - 2])))) : (((((/* implicit */unsigned long long int) arr_8 [i_0 - 1])) ^ (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [10U] [10U] [i_2])) : (arr_3 [i_2]))))))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) -12LL)))));
                }
            } 
        } 
    } 
    var_18 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40646)) + (((/* implicit */int) var_10))))) ? (985042543967995310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))))));
    var_19 = (!(((/* implicit */_Bool) min((((var_3) ? (17461701529741556325ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_0))))));
}
