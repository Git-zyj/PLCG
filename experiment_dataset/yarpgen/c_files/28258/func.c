/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28258
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
    var_12 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_11)) - (231))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))))))));
        arr_3 [16ULL] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) var_6))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            arr_21 [i_1] [i_2] [i_1] [6U] [i_5 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) != (((/* implicit */int) var_6)))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))) : (((unsigned long long int) var_4))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (var_0))))) <= (((unsigned long long int) var_9)))) ? (var_5) : (((/* implicit */unsigned long long int) var_0)))))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) ((unsigned int) ((unsigned char) var_0))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_4))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_4)))) <= (((/* implicit */int) ((signed char) var_1))))))))))));
                        arr_22 [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))) / (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        } 
    }
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_11)))) + (2147483647))) << (((((/* implicit */int) var_7)) - (94)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) var_2))));
}
