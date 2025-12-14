/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27261
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
    var_19 ^= ((/* implicit */signed char) 212771348U);
    var_20 *= ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2)))))), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [(unsigned char)7] [i_2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18090)) << (((((((/* implicit */int) arr_0 [i_1 + 1] [i_0])) + (122))) - (15)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (~(var_15))))))) : (((/* implicit */int) min((var_0), (var_18))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18090)) << (((((((((((/* implicit */int) arr_0 [i_1 + 1] [i_0])) + (122))) - (15))) + (10121))) - (8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (~(var_15))))))) : (((/* implicit */int) min((var_0), (var_18)))))));
                            var_22 = ((/* implicit */signed char) ((short) 3390394416U));
                            arr_10 [i_0] [i_1] [i_1 + 1] [i_1 - 1] [i_1] = ((short) min((((unsigned char) (unsigned char)255)), (((/* implicit */unsigned char) ((_Bool) (unsigned char)0)))));
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(5841689203473635249ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (0ULL))) | (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_12))))));
                            var_24 = ((/* implicit */signed char) ((short) arr_1 [i_0]));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(short)10] [i_0] [i_0] [i_0] [i_0] [(unsigned char)6])) ? (1893238995U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (-1)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_16))))) : (max((5841689203473635236ULL), (((/* implicit */unsigned long long int) (signed char)2))))));
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3935894096U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [8U] [8U])))))) ? (((((-1571181582) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)50)) <= (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */int) (short)-18075))));
            }
        } 
    } 
}
