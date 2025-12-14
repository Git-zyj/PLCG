/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240163
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
    var_18 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) var_9)), (12538732226930456479ULL))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((_Bool) arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            {
                arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)66)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) << (((var_10) - (875646716U)))))) - (max((5908011846779095136ULL), (((/* implicit */unsigned long long int) 312587036036016658LL)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27953)) == (((/* implicit */int) (unsigned char)62))))), (max((12538732226930456479ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_2 + 1]))))))));
                var_20 *= max((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 2]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(((unsigned int) ((unsigned long long int) var_10))))))));
}
