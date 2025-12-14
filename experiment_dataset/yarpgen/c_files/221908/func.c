/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221908
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((min((((/* implicit */long long int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((2975379757580393570LL), (((/* implicit */long long int) (_Bool)1)))))) & ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3596089843694455620LL))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3596089843694455620LL)) ? ((-(18014398509481984ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 1])) ? (3264887485U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))) && ((((_Bool)1) && (((/* implicit */_Bool) var_8))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_12 += ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) <= (4285367338U))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 4611404543450677248ULL)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_9))))));
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13030028282345665130ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3596089843694455620LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_8 [i_2] = ((/* implicit */unsigned int) (((~(12941721172658294924ULL))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_11 [0U] [0U] |= ((/* implicit */unsigned char) ((max((3264887478U), (4294967293U))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), ((+(((((/* implicit */_Bool) (unsigned short)9716)) ? (max((((/* implicit */unsigned int) var_6)), (3264887478U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) && (((/* implicit */_Bool) (unsigned short)8128))))))))))));
    }
}
