/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37939
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
    var_16 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)223))))) && (((/* implicit */_Bool) arr_8 [i_2 + 1])))) ? (1011299833U) : ((~(var_13)))));
                            var_18 = ((/* implicit */unsigned char) ((((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 1]))))) ? ((~(((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [1U] [i_1 + 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                var_19 = (-(((((/* implicit */_Bool) -4294815805234673706LL)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -1669974708)) : (var_13))) : (((((/* implicit */_Bool) var_14)) ? (3413598464U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_9 [i_5 + 3])), (3132978844U)));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (((((/* implicit */int) arr_11 [i_5 + 1])) | ((~(((/* implicit */int) arr_11 [i_4])))))) : ((~((~(-1669974719)))))));
                var_22 = ((/* implicit */unsigned int) (~((~(var_2)))));
            }
        } 
    } 
}
