/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245305
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
    var_14 = var_8;
    var_15 = ((/* implicit */signed char) var_7);
    var_16 += ((/* implicit */short) var_1);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (min(((+(var_13))), (var_4))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(signed char)4] |= ((/* implicit */short) var_9);
        var_18 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)4)) / (((/* implicit */int) arr_0 [i_0 - 2])))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned char)240)))))) - (30917)))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 += (+(((/* implicit */int) (unsigned char)22)));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) min(((short)23107), (((/* implicit */short) (unsigned char)15))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((short) var_3))) > (((/* implicit */int) ((_Bool) arr_4 [(short)0] [(_Bool)1]))))));
        var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4137875410U)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) var_10)))))))));
        var_23 = ((/* implicit */unsigned char) (_Bool)1);
    }
}
