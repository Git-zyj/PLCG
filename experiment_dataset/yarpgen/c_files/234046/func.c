/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234046
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [0ULL] |= ((/* implicit */unsigned char) (((_Bool)0) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                arr_5 [(unsigned short)16] [i_1] [(unsigned short)16] = ((min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_12)))))) + ((((-(((/* implicit */int) (short)-19832)))) + (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 - 2]);
            }
        } 
    } 
    var_19 = ((((max((((/* implicit */long long int) (unsigned char)177)), (-5121777407399483949LL))) + (((/* implicit */long long int) var_11)))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (var_11)))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_10), ((unsigned short)5170)))) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((5139658998024124769LL) != (-4570603639123673908LL)))))) <= (((var_1) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_2)))))))));
    var_21 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3384551634U))) - (3384551635U)))))));
}
