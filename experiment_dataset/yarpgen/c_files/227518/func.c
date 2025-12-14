/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227518
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (+(var_17)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] = ((/* implicit */signed char) (((-(arr_6 [i_0] [i_0] [i_0 + 2]))) / (((((/* implicit */_Bool) (unsigned short)15689)) ? (var_16) : (0)))));
                        arr_12 [i_2] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10169835011210553426ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (var_4)))) ? (((arr_4 [i_0]) + (((/* implicit */int) arr_1 [i_2] [i_3])))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned char)192))))));
                        arr_13 [i_0 - 2] [i_0] [i_2] [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)15689);
                    }
                } 
            } 
        } 
        var_21 = var_14;
    }
    for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_15 [i_4 + 2])), (max((arr_14 [i_4]), (((/* implicit */unsigned long long int) var_6)))))) >> (max((((/* implicit */int) arr_15 [i_4])), (min((((/* implicit */int) (unsigned char)48)), (0)))))));
        arr_17 [i_4 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) - (3316573594U)));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned char) (unsigned short)49855)))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)229))))) && ((!(((/* implicit */_Bool) ((unsigned long long int) var_13))))))))));
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) var_7)), (((((/* implicit */int) (unsigned char)220)) * (((/* implicit */int) (short)-28541))))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_0)))));
}
