/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197509
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((((var_4) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12)))))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_11)) - (124)))))) && (((/* implicit */_Bool) max((var_11), (var_10)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (min((0ULL), ((~(0ULL))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_0)) << (((var_5) - (1040677292315166540LL))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_2))))))) : (min((min((((/* implicit */long long int) var_3)), (var_4))), (((/* implicit */long long int) (~(var_8)))))))))));
                                arr_16 [i_1] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_6)))) : ((+(((/* implicit */int) var_1))))))) ? (min((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                                arr_17 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) <= (((var_8) >> (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_3)) - (60461)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_8)))) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) var_3))));
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) (((~((~(((/* implicit */int) var_0)))))) >> (((/* implicit */int) var_6))));
        arr_20 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_8)))) : (((((/* implicit */_Bool) 11324783634181202310ULL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 629573465U)))))));
        var_17 = min(((~(((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_8)));
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((((/* implicit */int) var_11)) + (((/* implicit */int) var_12))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_8))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))));
}
