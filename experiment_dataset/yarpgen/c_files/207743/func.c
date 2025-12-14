/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207743
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) min((var_6), (((/* implicit */short) var_4)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */signed char) var_3);
    var_15 = ((/* implicit */int) (_Bool)1);
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (((~(var_8))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (var_7)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))), ((~((+(arr_1 [i_0])))))));
        var_18 = ((/* implicit */signed char) -267819499);
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (-1061154032)))) & (min((arr_1 [6]), (((/* implicit */unsigned long long int) (short)255)))))))))));
        var_20 = ((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_4)))) - (arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)53702))))))) + (min((min((arr_3 [i_1 - 3] [i_1]), (((/* implicit */int) arr_2 [0U] [i_1])))), (((/* implicit */int) ((unsigned char) (unsigned short)11832)))))));
        var_23 ^= ((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2]);
    }
}
