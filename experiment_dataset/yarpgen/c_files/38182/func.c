/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38182
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
    var_17 = ((/* implicit */long long int) (-((((-(var_9))) / (max((var_9), (((/* implicit */unsigned int) (short)-19665))))))));
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((long long int) 1813129260736147388ULL)))))));
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned char) 14769625730149024071ULL))) || (((/* implicit */_Bool) -3253857164459694864LL)))), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) (-(arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11921)) ? (arr_1 [18ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : ((+(arr_2 [i_0])))))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (arr_0 [(signed char)12]))))))))))));
    }
}
