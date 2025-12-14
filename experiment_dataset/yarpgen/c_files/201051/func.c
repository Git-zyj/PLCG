/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201051
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
    var_17 = ((/* implicit */unsigned short) 752802399);
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)143))))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_13))))), (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        var_18 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) var_11)))))));
        var_20 = ((/* implicit */unsigned char) ((long long int) var_2));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((unsigned char) (short)-128));
        var_22 |= max(((!((_Bool)1))), ((((_Bool)1) && ((_Bool)1))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_11 [i_3] |= ((/* implicit */unsigned long long int) ((arr_10 [i_3]) == ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_3])))));
        var_23 = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
    }
    var_24 = ((/* implicit */unsigned int) var_6);
    var_25 *= ((/* implicit */unsigned int) (_Bool)0);
}
