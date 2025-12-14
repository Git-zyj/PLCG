/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208383
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) arr_1 [i_0]);
        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((var_8), (((/* implicit */unsigned short) var_2)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (1164439144295525918LL))) : (var_3)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_2 [i_1] [(short)3]), (4611123068473966592LL))) : (((((/* implicit */_Bool) arr_3 [(signed char)0])) ? (arr_2 [i_1] [(unsigned short)5]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_2 [i_0] [i_0])))));
            arr_4 [8LL] [8LL] [i_1] = (signed char)31;
            var_14 = arr_0 [i_0];
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (signed char)-92)))));
            var_15 -= ((/* implicit */long long int) (unsigned short)8192);
        }
        var_16 = ((/* implicit */short) -1164439144295525918LL);
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_2])) ? (-1164439144295525918LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [(short)14]))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)16965)))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_6 [i_2])), ((unsigned short)2048))))) : (min((((((/* implicit */_Bool) (unsigned short)31085)) ? (((/* implicit */int) arr_7 [i_2] [(unsigned short)10])) : (((/* implicit */int) arr_7 [16LL] [(short)18])))), (((/* implicit */int) min((arr_7 [i_2] [(short)2]), (((/* implicit */unsigned short) arr_6 [i_2])))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_2])), (max((((/* implicit */long long int) arr_7 [i_2] [i_2])), (6956843485803892927LL)))))) ? (((long long int) min(((unsigned short)24193), ((unsigned short)34468)))) : (((long long int) min((1164439144295525931LL), (((/* implicit */long long int) arr_6 [i_2])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_3]))));
            arr_12 [i_2] [i_2] [i_2] = ((short) arr_7 [i_2] [i_2]);
            var_18 = ((((-1164439144295525930LL) < (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (-1164439144295525931LL));
        }
        for (short i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            var_19 = min((((((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2]))))) / (var_3))), (((/* implicit */long long int) arr_6 [i_2])));
            var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) & (8796093022207LL))))));
        }
        arr_15 [i_2] [i_2] = ((short) min(((unsigned short)31085), (((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_2]))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((short) arr_10 [i_2] [16LL])))));
    }
    var_22 -= ((/* implicit */long long int) var_9);
    var_23 = ((/* implicit */long long int) var_5);
}
