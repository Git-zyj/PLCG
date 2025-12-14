/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207261
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) max((min((min((((/* implicit */int) (unsigned char)130)), (1891450932))), (((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_1 [i_0])))))), (max((((/* implicit */int) max((arr_0 [(_Bool)1]), ((unsigned short)48179)))), (min((-879914393), (((/* implicit */int) var_8))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17360))), (max((arr_0 [i_0 - 1]), (arr_0 [i_0]))))), (min((max((arr_0 [i_0]), (arr_1 [i_0 + 2]))), (min((arr_1 [4LL]), (var_8)))))));
    }
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((max((var_10), ((unsigned short)17192))), (min(((unsigned short)48174), (((/* implicit */unsigned short) (unsigned char)163))))))), (min((min((-6949163600935861434LL), (((/* implicit */long long int) -185022047)))), (min((((/* implicit */long long int) var_14)), (6949163600935861416LL)))))));
    var_18 = min((((/* implicit */long long int) max((((/* implicit */int) max((var_1), (var_0)))), (min((var_14), (var_11)))))), (min((min((var_13), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_3)))))));
}
