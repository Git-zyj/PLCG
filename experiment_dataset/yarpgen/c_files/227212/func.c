/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227212
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)45767)) >> (((/* implicit */int) (_Bool)1)))) - (((-1679259044) & (127356192)))))), (max((6298210772043851858LL), (((/* implicit */long long int) (unsigned char)67)))));
                    arr_8 [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((((var_11) << (((-5) + (25))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) -212844281)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [12] [i_0] = (+(((((/* implicit */long long int) (+(2813860537U)))) % (5679872510777847651LL))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1743520362)) ? (((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */long long int) 721516567U)) : (-5001078645603382475LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) - (var_5)))) ? (((/* implicit */int) ((signed char) var_0))) : (((((/* implicit */_Bool) 9682416945078471954ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)172)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((1490059613) << (((16626282715822663502ULL) - (16626282715822663502ULL))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (((unsigned int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) ((1364145648U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) : (var_7)));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_1))))))))) != (((long long int) (!(((/* implicit */_Bool) var_4)))))));
}
