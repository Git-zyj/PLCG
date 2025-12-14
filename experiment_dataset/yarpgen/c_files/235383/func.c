/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235383
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) (unsigned char)93)) ? (var_1) : (((/* implicit */unsigned int) var_6)))))))));
                arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                var_17 = ((/* implicit */int) arr_4 [i_0]);
                var_18 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_3)))), ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (2724358623U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (arr_8 [i_2 + 2])))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3221225472U)) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (short)-13953))))))) ? (((((/* implicit */_Bool) (-(-1154460238)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_9 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41263))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_2] [(unsigned short)8]) - (var_10)))) ? ((-(((/* implicit */int) (short)-17417)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) max((var_7), (var_7)))) : ((~(((/* implicit */int) (unsigned char)208))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61430)) && (((/* implicit */_Bool) (unsigned short)65521))));
}
