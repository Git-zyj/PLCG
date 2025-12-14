/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39702
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
    var_19 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_20 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_2 [i_0 - 1])))), (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))) ^ (min((((/* implicit */int) (_Bool)0)), (-1777572662)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2] [i_1]))));
                    arr_10 [i_2] [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) (((((-(((((/* implicit */_Bool) arr_7 [(_Bool)1] [(unsigned char)0] [(_Bool)0] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)5])))))) + (2147483647))) << ((+(((1073741820LL) >> (((/* implicit */int) (signed char)32))))))));
                    arr_11 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) -2540475);
                    arr_12 [i_2] [(unsigned short)9] [(unsigned short)7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min(((-(max((((/* implicit */unsigned int) arr_6 [14U] [(signed char)14])), (arr_7 [(short)5] [9U] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((int) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 845897470102897904LL)) && (((/* implicit */_Bool) -845897470102897904LL)))) ? (((((/* implicit */_Bool) var_3)) ? (-2028080624) : (var_6))) : (((/* implicit */int) arr_13 [i_3 - 3] [i_3 - 2])))))));
        arr_15 [i_3] = ((/* implicit */unsigned int) (~(-845897470102897904LL)));
    }
    var_23 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)43981)) % (var_11))))) ? (((((/* implicit */_Bool) var_13)) ? ((+(-2028080624))) : (((/* implicit */int) max((var_2), (var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((-1777572662), (((/* implicit */int) (signed char)(-127 - 1))))))))));
}
