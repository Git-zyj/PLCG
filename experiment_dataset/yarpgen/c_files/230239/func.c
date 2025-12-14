/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230239
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 7573694238674610387LL)) && (((/* implicit */_Bool) ((int) var_5)))))), (((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))) + (-7573694238674610364LL)))));
        var_18 = ((/* implicit */short) arr_2 [i_0]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) arr_1 [(unsigned short)22])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) (short)32754)))))) : (min((443256774), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)32766)))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? ((-(arr_4 [i_1 + 1] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((arr_3 [i_1 + 2]) ^ (((/* implicit */int) (unsigned char)62)))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-76)))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_2 [12]))));
    }
    var_23 |= ((/* implicit */short) var_7);
    var_24 = ((/* implicit */short) ((var_12) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)65)) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)56)), ((short)21239))))))) : (((((/* implicit */int) (unsigned short)1008)) + (((((/* implicit */_Bool) (unsigned char)60)) ? (1683701592) : (((/* implicit */int) (unsigned char)62))))))));
    var_25 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)5294))));
}
