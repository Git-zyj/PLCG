/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192332
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
    var_18 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))))))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -940689132))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((3577563942U), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))));
        var_20 = ((/* implicit */short) min((var_20), (((short) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(16ULL)))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)17]))) & (3665517040U)))), (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) 3665517037U)) : (-9223372036854775790LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 629450254U)))))) : (1219134803U))))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) var_15);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */signed char) max((arr_8 [12U]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (~(-795814943941010198LL)))))))));
                    var_23 -= ((/* implicit */unsigned char) arr_5 [i_2] [(_Bool)1]);
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) var_6))))))) % (max((((/* implicit */long long int) 3665517041U)), (arr_4 [i_1 + 1])))));
    }
}
