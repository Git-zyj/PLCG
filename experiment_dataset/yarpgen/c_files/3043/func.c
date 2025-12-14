/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3043
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) != (7072726658629297974LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1314802685) : (((/* implicit */int) var_17))))) : (var_15))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) ((1314802685) >> (((var_4) + (8086802020413048249LL)))))) : (max((((414217489U) / (((/* implicit */unsigned int) -1314802690)))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_12))))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 10572266227500303060ULL)) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_18)), (var_9))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -1314802709)) ? (1314802669) : (1314802681))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_16)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((arr_8 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (-1314802670)))) != ((-(((/* implicit */int) (short)0)))))))));
                        var_23 -= ((/* implicit */unsigned long long int) arr_5 [i_1]);
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >= (var_11))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) 18446744073709551607ULL))));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_26 = ((/* implicit */long long int) ((((long long int) min((((/* implicit */long long int) (short)-6522)), (var_4)))) != (((/* implicit */long long int) min((arr_12 [i_4] [i_4]), (((/* implicit */unsigned int) var_7)))))));
        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_13 [i_4])) + (34))))) >> (((((((/* implicit */int) (unsigned short)56497)) >> (0))) - (56485))))))));
    }
}
