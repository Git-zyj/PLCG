/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195343
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) (_Bool)0);
                var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) && (((/* implicit */_Bool) arr_4 [i_1])))));
            }
        } 
    } 
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((524287) | (((/* implicit */int) var_6))))) ? (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2400342107U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (3051276111U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])) : (18014398509481983ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) arr_5 [i_2] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2]))))))) * (((/* implicit */int) (unsigned char)64)))))));
                var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) <= (((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_1 [i_2]), (arr_1 [i_2])))) - ((+(((/* implicit */int) arr_1 [i_3]))))));
            }
        } 
    } 
}
