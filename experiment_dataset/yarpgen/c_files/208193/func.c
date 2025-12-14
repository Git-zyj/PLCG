/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208193
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) max((4294967289U), (((/* implicit */unsigned int) (unsigned short)5134))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((~(arr_2 [i_0]))) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)160)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)60394);
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((unsigned short) 4294967289U)), (var_12)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5134))) | (3253348497U))));
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_7 [i_1])), (((unsigned short) min((var_8), (((/* implicit */unsigned int) var_11)))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((735429338U) != (4294967280U))) ? (((/* implicit */long long int) 4294967275U)) : (((long long int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) 2704229911U)) * (max((min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) var_3)))), (var_6)))));
                arr_15 [i_2] [i_3] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
            }
        } 
    } 
}
