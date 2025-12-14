/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190866
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_0)), (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) 2U))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_2)))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_13)))))))));
    var_15 -= ((/* implicit */unsigned int) var_11);
    var_16 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 15521608188023726562ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_2 [(_Bool)1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) max(((((~(((/* implicit */int) (unsigned char)77)))) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))))), (((/* implicit */int) ((max((arr_0 [i_0]), (arr_1 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17423)) >> (((arr_0 [i_0]) + (1768881444219207384LL)))))))))))) : (((/* implicit */unsigned long long int) max(((((~(((/* implicit */int) (unsigned char)77)))) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))))), (((/* implicit */int) ((max((arr_0 [i_0]), (arr_1 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17423)) >> (((((arr_0 [i_0]) + (1768881444219207384LL))) - (424935216178391615LL))))))))))));
        var_18 |= ((max((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (arr_0 [6U]))), (((arr_1 [(unsigned short)0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [10U])))))));
        var_19 = ((((/* implicit */_Bool) ((((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? ((~(arr_0 [i_0]))) : (arr_1 [i_0])))) ? (((/* implicit */int) (unsigned short)63024)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((min((var_2), (((/* implicit */int) var_13)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)1)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551600ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
