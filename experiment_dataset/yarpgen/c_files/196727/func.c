/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196727
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = (unsigned char)193;
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) min((var_7), ((unsigned char)178))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((11500582908490975458ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                arr_6 [(unsigned char)17] = ((/* implicit */signed char) 11500582908490975458ULL);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)197), (((unsigned char) (unsigned char)27))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_3])) : (11500582908490975458ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)229), ((unsigned char)201))))) : (((unsigned long long int) var_3))));
                arr_15 [i_3] = (unsigned char)55;
            }
        } 
    } 
    var_22 = ((unsigned char) var_16);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)193)) + (((/* implicit */int) min(((unsigned char)193), ((unsigned char)50))))))) : (var_11)));
}
