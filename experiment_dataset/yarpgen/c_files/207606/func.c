/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207606
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_4 [(unsigned short)13] = ((/* implicit */signed char) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) (short)1023)), (arr_2 [i_0 - 1]))), (((/* implicit */unsigned short) (signed char)-1)))))));
        arr_5 [i_0 - 1] = ((/* implicit */unsigned char) var_0);
        var_20 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 1])) : (var_17))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_21 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-1)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_2 [2LL])) : (((/* implicit */int) arr_1 [i_0]))))), (var_3)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (short)-1023))));
                    var_23 = ((/* implicit */unsigned short) (short)-1023);
                    var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)1022)), (arr_0 [10U] [i_0])));
                    var_25 = ((/* implicit */long long int) min((var_25), (((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_14), (((/* implicit */short) var_7)))))) : (-1566402725284549484LL))) * (((/* implicit */long long int) ((/* implicit */int) (short)-4096)))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) ((int) max((var_9), (var_10))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_8)))))) ? ((~(var_17))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)110)))))))));
}
