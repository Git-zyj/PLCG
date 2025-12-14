/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248605
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
    var_20 = ((_Bool) (-((~(((/* implicit */int) var_16))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)61)), (-8788089590425426587LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) -2758544307177530542LL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + ((((_Bool)0) ? (11404119432640230983ULL) : (7042624641069320632ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)153)), (11404119432640230986ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (var_5)))) : (((/* implicit */int) var_8)))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (max((((/* implicit */int) ((signed char) 9223372036854775807LL))), (((int) var_12)))) : (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)133)))))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (signed char)-33))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_15))) ? (min((((var_0) ? (7816091005236984303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (-5913032138797879727LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_15)))))))));
}
