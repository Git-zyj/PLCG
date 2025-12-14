/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243383
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
    var_20 |= ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 13296270789029567184ULL)) ? (450712855665963266ULL) : (var_10))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_0)) % (((/* implicit */int) var_11))))))));
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */unsigned char) var_10);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 450712855665963263ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (450712855665963250ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-51)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_1])) - (98))))) / ((-(((/* implicit */int) arr_1 [i_0]))))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */signed char) 1603866672U);
                                var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)49)), (var_16))))) + (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (10249872154642313390ULL) : (arr_7 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)236))))) : (max((var_10), (((/* implicit */unsigned long long int) var_17)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3180485580689401278ULL)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (signed char)117))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) + (3180485580689401274ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
