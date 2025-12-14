/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35071
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
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_4)) | (var_0)))))) ? (-5302673684838671630LL) : (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30112))) : (var_5))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_13 = ((/* implicit */long long int) max((var_13), (arr_1 [(unsigned char)22])));
        var_14 -= ((((/* implicit */_Bool) min((var_4), ((-(((/* implicit */int) arr_0 [(unsigned short)2]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 10899153384099297650ULL))))) : (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)96)) > (((/* implicit */int) (signed char)-87))))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)20)), ((short)14433)))) : (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_5 [i_1]))))), (min((((/* implicit */long long int) (unsigned short)65535)), (arr_1 [(_Bool)0])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [0]))))) ? ((-(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_0 [12LL])) : (((/* implicit */int) arr_4 [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) - (var_10)))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (arr_4 [i_1]))))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_1])) >= (((/* implicit */int) arr_9 [i_2] [i_1]))));
            var_16 = ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_2]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))))));
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_1 [i_2])));
            var_18 = ((/* implicit */signed char) arr_0 [i_2]);
        }
        arr_11 [i_1] = ((short) var_5);
        var_19 = ((/* implicit */short) ((((arr_5 [i_1]) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1])))) - ((((-(((/* implicit */int) arr_4 [i_1])))) / ((+(((/* implicit */int) (unsigned char)78))))))));
    }
    var_20 = min((((var_2) | (((long long int) (signed char)-97)))), (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) var_1)), (-4276214392673761023LL))) : (((/* implicit */long long int) (-(var_4)))))));
    var_21 |= ((/* implicit */short) var_10);
    var_22 = ((/* implicit */unsigned short) min(((short)-4096), (((/* implicit */short) (signed char)96))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) var_10))), (var_11)));
}
