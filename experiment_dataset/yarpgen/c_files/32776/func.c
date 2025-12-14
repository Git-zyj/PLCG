/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32776
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22077)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)22074)))) : (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)43446))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_20 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43478)) && (((/* implicit */_Bool) -1LL))))))));
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (unsigned short)43460)))) : (((/* implicit */int) var_12))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (unsigned short)22069))))) ? (max((var_11), (((/* implicit */unsigned long long int) (unsigned short)43431)))) : (((/* implicit */unsigned long long int) 948076817))));
                        var_22 = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned char)160)));
                    }
                    arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(536870911U)));
                    var_23 = ((/* implicit */unsigned long long int) ((long long int) ((int) var_17)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_1))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10627396270778511450ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned short)43478))))) : ((~(var_7)))));
}
