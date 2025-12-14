/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239080
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((/* implicit */int) var_7)))))));
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 3327283506442104677LL)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (short)-12313)))) > (var_2)));
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (((/* implicit */int) arr_3 [(short)2] [i_1]))))));
            arr_4 [i_0 + 1] [i_0] [i_1] = (+((-(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(16295506687336690362ULL))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (6951682188152057613ULL)))))) ? ((+(0U))) : (((/* implicit */unsigned int) 552878672))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
            var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
        }
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 4063126841219088499ULL))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 37450471)) & (var_0))) | (((/* implicit */unsigned long long int) (~(2766629061869757675LL))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((int) max((arr_10 [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_3]))))) * (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_9))))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (max((max((0ULL), (((/* implicit */unsigned long long int) (short)32767)))), (((/* implicit */unsigned long long int) 1747819272U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (5833977624216075713LL))))));
    }
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
}
