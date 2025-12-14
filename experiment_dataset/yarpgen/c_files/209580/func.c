/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209580
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = min((((((arr_1 [i_0]) / (arr_1 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) 4630710299841024453LL)));
                var_15 = ((/* implicit */unsigned short) min(((unsigned char)155), ((unsigned char)101)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5602)) ? (((/* implicit */int) (unsigned short)5602)) : (((/* implicit */int) (unsigned short)18096))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (2305772640469516288ULL)))));
    var_17 ^= ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */unsigned int) var_12);
}
