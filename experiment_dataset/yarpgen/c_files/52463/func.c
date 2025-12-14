/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52463
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
    var_20 += ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_14)) ? ((~(var_10))) : (min((((/* implicit */int) (signed char)-114)), (-2147483627))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (signed char)-26)) + (43)))))))) != (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-28)) - (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)148)) ? (var_7) : (((/* implicit */long long int) var_18))))))));
                arr_7 [i_0] = ((/* implicit */short) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126))))) >= (((/* implicit */int) ((-312416215) >= (((/* implicit */int) (unsigned char)148))))))))));
                var_21 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((int) var_0))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0])) ? (8615074304511125638ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */int) var_14)) * (((/* implicit */int) var_14)))))));
                                var_23 = ((/* implicit */signed char) -2123354493);
                            }
                        } 
                    } 
                } 
                arr_22 [i_3 + 1] [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_16 [i_3 - 3] [i_3] [i_2] [i_2 - 2])) ? (arr_16 [i_3 - 3] [i_2] [i_2 + 3] [i_2 + 3]) : (arr_16 [i_2] [i_2] [i_2 - 1] [(signed char)0]))), (min((((/* implicit */unsigned int) 312416197)), (arr_16 [i_2 + 1] [i_3 - 2] [i_2 + 1] [i_3 + 1])))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) (signed char)-117);
                            var_25 *= ((/* implicit */unsigned char) min(((-((~(var_9))))), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((var_7) <= (((/* implicit */long long int) var_5))))), (min((var_9), (((/* implicit */int) var_16)))))) * (((/* implicit */int) ((var_10) >= (((((/* implicit */_Bool) 13151161261687781940ULL)) ? (((/* implicit */int) var_15)) : (var_9))))))));
}
