/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32847
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
    var_19 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_9)), (((5562655922018243098ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_8)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32764)) >= (((/* implicit */int) (unsigned short)32970)))))))));
                    var_21 += ((/* implicit */unsigned short) (unsigned char)5);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32959)) ? (((unsigned int) ((((((/* implicit */int) arr_8 [7U] [7U] [i_2] [i_2] [i_2] [7ULL])) + (2147483647))) >> (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */unsigned int) ((((var_5) ? (((/* implicit */int) arr_6 [i_4] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 2])))) + (((/* implicit */int) arr_11 [i_0])))))));
                                var_22 = ((/* implicit */unsigned int) (unsigned short)32553);
                                arr_15 [i_0] [i_0] [i_3] [i_3] = min((3656821035U), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((4294967295U) - (4294967279U)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) 307687091U))))) ? ((-(-67108864))) : (var_9))) * (((/* implicit */int) var_5))));
    var_25 ^= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (short)-32760)) ? (var_17) : (((/* implicit */unsigned int) 2090712959)))) * (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) min((var_5), (var_7)))) : (((((/* implicit */int) (unsigned short)65520)) / (((/* implicit */int) var_3)))))))));
    var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((unsigned short)32553), (((/* implicit */unsigned short) var_12))))), (max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1)) + (var_6))))))));
}
