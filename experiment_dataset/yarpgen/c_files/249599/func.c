/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249599
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
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_11)) ? (398874177U) : (((/* implicit */unsigned int) var_9))))))) ? ((-(-25))) : (var_8)));
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32720))))), (576179277326712832ULL)))) ? (7704913403660134506LL) : (min((((var_2) ? (((/* implicit */long long int) -531574462)) : (-7704913403660134535LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (unsigned char)0)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (68719476735LL) : (((/* implicit */long long int) 33554431U))))));
        arr_2 [i_0] [i_0] = (_Bool)1;
        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_8))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2]))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9619336016529859978ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (4261412864U)))))))) >= ((+(((((/* implicit */_Bool) 25LL)) ? (18014398509481984ULL) : (((/* implicit */unsigned long long int) 68719476735LL))))))));
        var_19 ^= ((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0U]))) : (15248758578355170648ULL))) : (((/* implicit */unsigned long long int) (~(var_8)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)247)), ((unsigned short)65510))))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1338861165U)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 7693331454634287591ULL)) ? (var_9) : (((/* implicit */int) var_3))))));
}
