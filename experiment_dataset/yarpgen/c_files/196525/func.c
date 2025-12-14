/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196525
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54239))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) ^ ((+(arr_7 [i_1] [i_1])))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((unsigned char) -1970458176285496609LL))))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((-1970458176285496608LL) / (1970458176285496600LL)))))) || (((/* implicit */_Bool) (~(arr_7 [i_2] [i_2]))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [i_2]))))))))));
        var_24 = ((/* implicit */unsigned char) (!(((4031951257884166703ULL) > (((/* implicit */unsigned long long int) (~(arr_10 [i_2] [i_2]))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_9))) ^ (((/* implicit */unsigned long long int) min((arr_7 [i_2] [i_2]), (((/* implicit */int) arr_4 [i_2] [i_2]))))))))));
    }
    var_26 = ((/* implicit */unsigned char) ((unsigned short) ((long long int) (-(((/* implicit */int) var_17))))));
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)18039), (((/* implicit */unsigned short) (signed char)61)))))))) ? (((/* implicit */int) ((-1970458176285496612LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))))) : (((((/* implicit */int) ((_Bool) -1970458176285496609LL))) >> (((max((11487766241324603108ULL), (((/* implicit */unsigned long long int) (unsigned char)17)))) - (11487766241324603082ULL))))))))));
    var_28 = ((/* implicit */unsigned short) var_6);
}
