/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40572
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (arr_1 [i_1])))) / (min((((/* implicit */unsigned long long int) 7663746737078845781LL)), (5512273848546279124ULL)))))) && (((/* implicit */_Bool) var_7))));
                var_11 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((((/* implicit */long long int) arr_3 [18ULL] [i_1] [i_0])), (72057594037403648LL))) > (min((562949953421311LL), (((/* implicit */long long int) arr_1 [18LL])))))))));
                var_12 -= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) -2LL)) && (((/* implicit */_Bool) 562949953421311LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3866425750U)) && (((/* implicit */_Bool) (short)-8721))))) : (((/* implicit */int) (signed char)-64)))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((((var_5) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) >= (((/* implicit */int) ((min((var_4), (((/* implicit */int) var_8)))) != ((-(((/* implicit */int) (signed char)0)))))))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3))))))));
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 |= ((/* implicit */_Bool) min((max((min((72057594037403642LL), (((/* implicit */long long int) (short)8737)))), (((/* implicit */long long int) ((var_5) > (((/* implicit */int) (unsigned char)8))))))), (((/* implicit */long long int) var_2))));
}
