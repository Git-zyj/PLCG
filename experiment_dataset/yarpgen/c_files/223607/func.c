/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223607
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)65))))) ? (var_3) : (min((((/* implicit */unsigned long long int) max((var_9), (6351890808719465434LL)))), (((((/* implicit */_Bool) 6351890808719465434LL)) ? (12196052523137953713ULL) : (((/* implicit */unsigned long long int) 6351890808719465434LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_2 [i_0 + 2] [i_0 + 2]) + (2147483647))) << (((((-6351890808719465434LL) + (6351890808719465447LL))) - (13LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_2 + 2] [i_0 + 1])))) : (min((1569445854349658850LL), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_1] = (unsigned short)0;
                }
                var_14 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_6 [i_0] [i_1])))));
                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) -223821600355079042LL)), (arr_6 [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0])))))));
            }
        } 
    } 
}
