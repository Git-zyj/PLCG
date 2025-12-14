/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1947
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
    var_20 = var_4;
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57614))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_16))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) 131283324U)) && (((/* implicit */_Bool) 576460752303422464ULL))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [8] [i_2] [8] |= ((/* implicit */short) ((((/* implicit */_Bool) -1520933619)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */int) arr_6 [i_2] [i_4 + 1] [i_4]))))) : (min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))))));
                                var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)49885)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (signed char)127))) ? (max((((((/* implicit */int) var_11)) / (((/* implicit */int) var_19)))), (arr_9 [i_4] [i_4 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) : (((((/* implicit */_Bool) (signed char)102)) ? (((((/* implicit */int) (signed char)116)) % (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))))));
                                var_25 -= ((/* implicit */int) (signed char)-112);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
