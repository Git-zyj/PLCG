/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28959
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) var_2))));
    var_16 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (-((+(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26198))) / (arr_0 [(_Bool)1]))) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_0 [i_0]) / (((/* implicit */unsigned long long int) 1626718012U))))))) : (min((((/* implicit */long long int) (unsigned short)29427)), ((+(var_6)))))));
    }
    for (short i_1 = 3; i_1 < 8; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8U)))) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 2] [i_1 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) <= (max(((+(((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) ((unsigned short) arr_3 [i_1])))))));
        var_21 = ((/* implicit */unsigned short) var_11);
        var_22 = ((/* implicit */long long int) ((unsigned short) ((-1926608989) > (((/* implicit */int) (short)22585)))));
    }
    var_23 = ((/* implicit */long long int) 458917658U);
}
