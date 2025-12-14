/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238461
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
    var_20 *= ((/* implicit */unsigned char) (-(17669703773606577060ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (14812122205573734979ULL)))) ? (164328600U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)24306)) > (((/* implicit */int) (signed char)100)))))))) != (((/* implicit */unsigned int) -1226124888))));
                    var_21 = ((/* implicit */unsigned short) ((signed char) max((-462911346), (((/* implicit */int) (_Bool)0)))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)54417);
                    var_22 |= ((((/* implicit */unsigned long long int) 1963895202)) - (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_2] [i_0])) ? (((((/* implicit */_Bool) 5126131845121276741ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41219))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)-110)))))), (((/* implicit */int) var_6))));
    var_24 = ((/* implicit */unsigned short) ((2015114829U) > (2161239215U)));
}
