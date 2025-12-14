/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224105
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) arr_0 [i_0]);
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)158)) > (((/* implicit */int) (_Bool)1))));
        var_18 = ((short) var_4);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_19 = ((/* implicit */long long int) ((((_Bool) (unsigned char)216)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (arr_3 [i_0] [i_0]) : (4294967279U))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)41357)))) >> (((((arr_5 [i_1] [i_1]) >> (((var_7) - (17762012765769633083ULL))))) - (705965361050989ULL)))));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_14))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) (unsigned short)15871)), (-1029035507884243146LL)))))));
    var_22 = ((/* implicit */unsigned char) -3686287277590657921LL);
}
