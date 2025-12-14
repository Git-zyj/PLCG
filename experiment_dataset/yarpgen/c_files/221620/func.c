/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221620
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1910024927U)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 5623336290889482613ULL)) ? (316797631440031705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1404))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)60350)))));
                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18129946442269519910ULL)))))) : (18446744073709551615ULL))), (6563261573498593578ULL)));
                arr_10 [i_0] |= ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (min((((/* implicit */unsigned long long int) -1966801412)), (18129946442269519903ULL)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            {
                var_16 += ((/* implicit */_Bool) min((((/* implicit */long long int) (+(arr_14 [i_2 + 3] [i_3 + 1])))), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) arr_12 [i_2 + 4]))))));
                arr_15 [i_3 + 2] [24ULL] = ((/* implicit */_Bool) var_11);
                var_17 = ((/* implicit */unsigned long long int) (signed char)-20);
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7741390140753591635LL)) ? (1773140060U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 2195923012275686742ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-20)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            }
        } 
    } 
}
