/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23857
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
    var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((3145728ULL), (var_5))) : (((/* implicit */unsigned long long int) (-(var_14))))))) ? (((207546569448549062ULL) | (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_2)))) : (((/* implicit */int) var_1))))));
    var_16 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1152921229728940032ULL)))))) % ((~(arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 2])))));
                    var_18 += ((/* implicit */_Bool) (((((((_Bool)0) || ((_Bool)0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1] [i_2])) : (18446744073709551601ULL)))))) ? (((/* implicit */int) min(((!(arr_1 [i_2]))), ((!(((/* implicit */_Bool) arr_4 [9U] [i_1] [i_2] [i_0]))))))) : (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
}
