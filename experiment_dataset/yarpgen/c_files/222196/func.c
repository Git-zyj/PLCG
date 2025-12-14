/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222196
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_10), (var_10))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((int) var_10)) > (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((int) ((var_7) / (((/* implicit */int) var_8)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (-(var_3))))))))));
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */int) var_9)), (var_6))), (((/* implicit */int) ((unsigned char) var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [(_Bool)1] [i_1] [i_0] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_11);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((~(((int) var_7)))))))));
                                var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_6)))) % (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                                var_20 = ((/* implicit */unsigned char) ((-7033859717704664400LL) % (((/* implicit */long long int) 1776877780))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */_Bool) ((short) ((-3519095213762277416LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) (signed char)115))) - (((/* implicit */int) var_4)))) + (((/* implicit */int) ((short) min((((/* implicit */int) var_10)), (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) var_7))))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_0))))));
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) / (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))))) + (((/* implicit */long long int) ((((((/* implicit */int) var_4)) >= (var_7))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_8))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-112)) != (((/* implicit */int) (unsigned char)212))))))))));
    }
    var_24 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-13)) - (678088434))) - (var_7))) != ((+(((/* implicit */int) ((short) var_6)))))));
    var_25 = ((((/* implicit */_Bool) ((unsigned long long int) ((var_11) ^ (((/* implicit */unsigned int) var_6)))))) ? (((int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_10))))));
}
