/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223952
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
    var_19 = ((/* implicit */unsigned char) ((var_13) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (short)29374)) && (((/* implicit */_Bool) 63))))))) : (var_0)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((var_6) >> (((((((/* implicit */_Bool) (unsigned char)84)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (2304578491U))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_8) : ((-(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)5967)) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) (-(-41))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(452394206)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (var_8))))));
                                arr_18 [i_0] = ((/* implicit */unsigned char) min(((+((-(arr_8 [i_1] [i_3] [i_1]))))), ((~((~(var_6)))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] = ((/* implicit */int) var_1);
                }
            } 
        } 
    }
}
