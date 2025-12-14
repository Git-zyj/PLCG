/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52842
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_2))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) 18446744073709551615ULL)))));
        arr_2 [i_0] = ((/* implicit */short) min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7939217794985614275ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) : (arr_6 [i_0] [i_1] [i_2] [i_0])));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) min(((short)-16626), (((/* implicit */short) var_17))));
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) min(((short)16626), (((/* implicit */short) var_14)))))))) + (((((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (signed char)-1))))));
                    var_23 = ((/* implicit */unsigned long long int) (unsigned char)214);
                }
            } 
        } 
    }
}
