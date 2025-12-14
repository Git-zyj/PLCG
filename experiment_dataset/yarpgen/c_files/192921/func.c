/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192921
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_1 [13LL]))))))) ? (((((4724355211914596569LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(32767LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((-(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))));
        var_12 = max((-4724355211914596567LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (2125264733)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (4724355211914596569LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))));
        var_13 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (signed char)-7)) == (((/* implicit */int) (unsigned char)0)))));
    }
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_14 -= ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-2310)) : (arr_4 [i_1])))))));
        var_15 = ((/* implicit */short) arr_4 [i_1]);
    }
    var_16 &= ((/* implicit */unsigned int) min((((int) var_1)), (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (max((var_10), (((/* implicit */unsigned char) (signed char)10)))))))));
}
