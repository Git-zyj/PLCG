/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3162
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((short) max((4294967295U), (((/* implicit */unsigned int) (signed char)0)))));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)245)), (4294967293U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0])))) : (min((((/* implicit */long long int) (unsigned char)26)), (-7153462990832680814LL))))) >> (((((/* implicit */int) min((((signed char) (unsigned char)164)), (min((arr_7 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1 + 1] [i_2])))))) + (109)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned int) max(((signed char)38), ((signed char)-37)))), (min((((/* implicit */unsigned int) var_7)), (var_9))))));
                    arr_9 [i_0] [i_0 + 3] [i_2] = ((/* implicit */unsigned short) min((max((max((7153462990832680814LL), (((/* implicit */long long int) (signed char)1)))), (((/* implicit */long long int) ((unsigned int) var_11))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)209)) ? (var_9) : (29U))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned char) var_7))))))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_10)))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_11))))))))) > (max((((long long int) var_9)), (((/* implicit */long long int) min((var_0), (((/* implicit */short) var_5)))))))));
    var_15 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned int) var_7)), (var_2))), (((/* implicit */unsigned int) min((var_0), (var_1)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) var_10))), (((unsigned short) var_0)))))));
}
