/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51746
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
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3306)) ? (((/* implicit */int) (short)-3321)) : (((/* implicit */int) var_7))))), (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3316)))))))) ? (((var_18) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_16)), (var_9))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-22)))))));
    var_20 |= ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 3]))))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((((4202395771U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [2]))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [(short)7] [i_1])))))))) + (((var_0) / ((+(((/* implicit */int) arr_3 [i_1])))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) * (var_1)))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) var_4)))) : (min((-1806400046), (((/* implicit */int) arr_2 [i_1] [i_0 - 3])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) || (((/* implicit */_Bool) arr_3 [i_0 - 3])))))));
                var_24 = ((/* implicit */int) ((((((var_17) % (((/* implicit */long long int) var_1)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) != (5075819030764302452ULL))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_14))) ? ((-(((/* implicit */int) (short)11176)))) : ((-(((/* implicit */int) arr_3 [i_0])))))))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_0 - 2])))), ((-(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2])))))))));
            }
        } 
    } 
}
