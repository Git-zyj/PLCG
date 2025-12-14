/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235360
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                var_13 ^= ((/* implicit */unsigned long long int) ((short) var_1));
                arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((int) arr_7 [i_1 + 2] [5LL] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((16879025070206951182ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_0]))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-846885069)));
    var_16 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38106))))) < (min((2788554040U), (((/* implicit */unsigned int) (short)32767)))))))));
}
