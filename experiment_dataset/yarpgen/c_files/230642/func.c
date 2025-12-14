/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230642
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
    var_10 = ((/* implicit */unsigned long long int) (signed char)-120);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)18)) | (((/* implicit */int) arr_0 [i_0]))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33393))) / (max((var_3), (15860666685769397438ULL)))))));
        var_11 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (signed char)120))))));
        var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) min(((unsigned short)8063), (arr_0 [i_0])))) | (((((/* implicit */int) var_0)) & (arr_1 [i_0] [i_0 - 1])))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((arr_1 [i_1] [4ULL]) > (((/* implicit */int) arr_0 [8]))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (((((/* implicit */int) (unsigned short)9083)) >> ((((~(((/* implicit */int) (signed char)-120)))) - (107)))))));
        var_14 -= (~(arr_4 [i_1]));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned long long int) max((arr_0 [10ULL]), (((/* implicit */unsigned short) (short)27374))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)5]))) * (var_3)))))))));
    }
}
