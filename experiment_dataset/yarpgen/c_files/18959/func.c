/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18959
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
    var_14 = ((/* implicit */short) (-(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [(signed char)10] = ((/* implicit */_Bool) max((10954251660540668774ULL), (((/* implicit */unsigned long long int) 0))));
                var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(arr_0 [(unsigned char)4])))), (max((((/* implicit */int) var_6)), (arr_2 [10ULL])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_16 = arr_1 [i_1];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (signed char)48);
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-47)) / (((/* implicit */int) arr_8 [i_2] [i_2])))) + (max((arr_7 [i_2]), (-1214054403)))));
    }
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)4052)), (-2075305471)));
    var_21 = -2147483645;
}
