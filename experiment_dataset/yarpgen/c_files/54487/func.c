/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54487
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
    var_12 = ((/* implicit */signed char) min((min((((/* implicit */short) ((((/* implicit */int) (short)8934)) == (((/* implicit */int) var_8))))), (((short) var_1)))), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((_Bool) arr_1 [i_0] [i_0])) ? ((((_Bool)0) ? (((arr_0 [i_0]) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) | (((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (unsigned char)139)))) == (((/* implicit */int) max((((/* implicit */short) (unsigned char)139)), (var_1)))))))));
        var_13 = ((/* implicit */unsigned char) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)116)))) * (((arr_0 [i_0]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) > (var_3)))) : (((/* implicit */int) min(((short)-32749), (((/* implicit */short) var_11)))))))));
    }
}
