/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192593
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
    var_19 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (_Bool)0)))));
    var_20 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */unsigned long long int) ((int) var_5))) ^ (var_5)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (((+(min((((/* implicit */unsigned int) arr_0 [i_0])), (1048575U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)116)) >= (((/* implicit */int) arr_2 [i_0 + 4]))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */long long int) 507904)))) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_18)) == (arr_1 [i_0])))), (min((((/* implicit */long long int) arr_0 [i_0])), (var_6)))))));
        var_22 *= ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(1197713149100205718ULL))))))));
        arr_6 [i_1] |= ((/* implicit */_Bool) var_1);
    }
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        arr_10 [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2 - 2])) - (((/* implicit */int) arr_0 [12]))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((unsigned long long int) ((long long int) var_10)))));
    }
    var_25 += ((/* implicit */unsigned int) var_17);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-115))))) ? (4294967280U) : (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max(((_Bool)1), (var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_7)))) ? (max((var_12), (((/* implicit */long long int) var_10)))) : ((+(var_6)))))));
}
