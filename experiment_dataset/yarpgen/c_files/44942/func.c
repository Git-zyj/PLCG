/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44942
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
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
    var_19 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23522))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52383))) : (var_17)))));
    var_20 = ((/* implicit */long long int) (~(var_17)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */int) (unsigned short)18);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [(unsigned short)5] [i_0]);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52387)) ? (723966778) : (0)))), ((((~(var_3))) >> ((((~(var_1))) - (983559726U))))))))));
            arr_5 [i_1 - 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13149)) ? (((/* implicit */int) (unsigned short)18)) : (-112111259)))) ? (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) (unsigned short)52387))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) ^ (-7LL))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52391)) || (((/* implicit */_Bool) (signed char)-88)))))));
        }
        arr_6 [i_0] = (~((-(((((/* implicit */long long int) var_1)) / (arr_0 [i_0]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4 - 1] [i_3 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52411))))))))));
                    arr_17 [7] [i_2] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)220)) ? (min((((/* implicit */long long int) var_7)), (7470679190556006611LL))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_12 [i_3])) : (var_4))))), (((long long int) (unsigned short)65535))));
                    var_25 = ((/* implicit */unsigned long long int) 1953058443);
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_6), (((/* implicit */unsigned long long int) arr_0 [i_2]))))))) ? (arr_16 [i_2]) : (((/* implicit */unsigned int) arr_12 [i_2]))));
        var_27 ^= arr_8 [i_2];
        arr_18 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
        arr_19 [i_2] = ((/* implicit */unsigned int) var_11);
    }
}
