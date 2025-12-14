/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217676
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
    var_15 = ((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)37569))))) <= (min((((/* implicit */unsigned long long int) var_5)), (var_8))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) 0LL))), ((short)21322)))), (max((((unsigned long long int) 20)), (max((((/* implicit */unsigned long long int) (unsigned char)83)), (arr_3 [(unsigned char)18]))))));
        var_17 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) arr_3 [i_1]);
        var_19 *= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)27979)))), (((((/* implicit */_Bool) -19)) ? (13146893124657082123ULL) : (((/* implicit */unsigned long long int) 4963286411463092389LL))))))));
        var_20 = ((/* implicit */short) arr_2 [(_Bool)1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_2])), (arr_0 [(_Bool)1]))))))) ? (min((max((arr_1 [i_2] [i_2]), (arr_8 [i_2]))), (((/* implicit */unsigned long long int) min((3644221470U), (arr_0 [i_2])))))) : (((arr_3 [i_2]) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)16)))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_5 [(unsigned short)8]))))));
    }
}
