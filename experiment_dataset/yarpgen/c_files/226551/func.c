/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226551
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8919083916766098356ULL)) ? (1149250107) : (((/* implicit */int) var_0))))) ? (max((var_1), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1093750286)) ? (4902285794736317191LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) - (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (max((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))) ^ (max((max((var_7), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554432)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))))))));
                var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (var_3)))) ? ((~(max((var_6), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) : (((((int) arr_2 [i_1] [i_1])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_5 [i_0] |= ((/* implicit */int) -4902285794736317187LL);
            }
        } 
    } 
    var_14 -= max((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_9))))) ? ((~(var_1))) : (((var_3) - (1394339976472186330ULL))))), (var_4));
    var_15 ^= ((/* implicit */long long int) (+(var_10)));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((var_5), (var_10)))));
    var_17 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_9)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_2))))))));
}
