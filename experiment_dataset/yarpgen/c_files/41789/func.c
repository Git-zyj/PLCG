/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41789
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
    var_15 = ((/* implicit */int) max((max((((/* implicit */long long int) var_0)), (min((2618250683199183498LL), (-1584433492275832394LL))))), (max((((/* implicit */long long int) ((((/* implicit */long long int) var_13)) <= (1584433492275832397LL)))), (max((2618250683199183498LL), (var_14)))))));
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (690407598))) & (((((/* implicit */int) var_9)) % (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) var_2);
                var_19 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_2 [i_1 - 1] [i_0])))));
                var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_3 [i_1 - 2] [i_1] [i_1])), (2618250683199183495LL)));
                var_21 |= ((/* implicit */unsigned short) max(((+(arr_3 [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) ((-1342167584571892861LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)69))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (unsigned short)36740);
}
