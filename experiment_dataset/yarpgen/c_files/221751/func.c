/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221751
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-99)) != (((/* implicit */int) (_Bool)1))))) ^ ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))))));
        var_11 = ((/* implicit */signed char) var_9);
    }
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))))), (min(((-(4954162298882869032ULL))), (((/* implicit */unsigned long long int) var_1))))));
    var_13 = ((/* implicit */unsigned long long int) (-((~(4294967275U)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (unsigned short)65519)), (2114180659U)))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2386629440U)) : (((var_6) / (((/* implicit */long long int) 1816981277U))))))));
    var_15 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))), (var_6))), (((long long int) (-(((/* implicit */int) (signed char)12)))))));
}
