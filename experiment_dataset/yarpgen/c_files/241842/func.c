/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241842
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_16)))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10)))))))) < (min((max((((/* implicit */unsigned long long int) var_7)), (12992208546349351478ULL))), (((/* implicit */unsigned long long int) var_1))))));
    var_21 &= ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) | (var_3)))));
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_17) > (((/* implicit */long long int) 3080754786U)))))));
        var_24 &= ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (9223372036854775807LL)));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (~((-(min((((/* implicit */long long int) (_Bool)1)), (var_17)))))));
        arr_7 [(signed char)10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (12992208546349351478ULL)))));
    }
}
