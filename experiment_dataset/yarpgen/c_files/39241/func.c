/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39241
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (arr_1 [i_0 + 1])))) ? ((~(arr_2 [i_0 - 2] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (0)))));
        var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (0) : (((/* implicit */int) arr_1 [i_0 - 2])))) | (max((((/* implicit */int) arr_0 [i_0 + 1])), (min((0), (((/* implicit */int) arr_1 [i_0 - 2]))))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_2 [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (arr_2 [i_0 - 1] [i_0 + 1])))))));
    }
    for (unsigned char i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_1 - 2] [i_1 - 2])))) ? (((2987674791106167154ULL) - (((/* implicit */unsigned long long int) -1073741824)))) : (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */int) var_2)) : (arr_2 [i_1 + 2] [i_1 - 1]))))))));
        var_13 = var_9;
        var_14 = ((/* implicit */unsigned int) 1753833492);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) (+(1544319445)))) : (((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((/* implicit */unsigned long long int) var_10)) : (2987674791106167154ULL)))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_5))) / (max((((/* implicit */int) (unsigned short)65535)), (var_10)))))) ? (max((((/* implicit */unsigned long long int) var_3)), ((-(15459069282603384462ULL))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)63)))))))));
}
