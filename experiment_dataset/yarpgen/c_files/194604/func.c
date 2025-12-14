/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194604
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_17 = (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1]))))));
                            arr_10 [i_0 + 2] [i_1 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))));
                            var_18 -= ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_11))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1] [(_Bool)1]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) (short)-20359)) : (((-171084180) & (((/* implicit */int) (short)-20359)))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [(unsigned char)4])) | (arr_9 [i_0] [i_0 - 1] [i_1 + 1] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((((~(arr_8 [i_4 - 1]))) + (2147483647))) << (((((/* implicit */int) (signed char)119)) - (119))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(16339363401906069018ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_1 + 2] [i_5] [i_0])))) : (((unsigned int) ((((/* implicit */_Bool) (short)20359)) ? (1840570498) : (((/* implicit */int) (short)-18480)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (((-(arr_8 [i_0 + 2]))) > ((-(((/* implicit */int) (short)18472))))))));
                            var_22 = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0 - 1] [i_0])))))) : (((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 + 1] [i_0])) && (((/* implicit */_Bool) (short)20756)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1 + 2]))) : (arr_0 [i_5])))));
                            var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 2] [8ULL] [i_0 - 3])) ? (((/* implicit */int) (short)18472)) : (((/* implicit */int) (signed char)-1))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [10]))) & (var_11))))))));
                        }
                    } 
                } 
                arr_17 [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (-(max((5245963528628969027ULL), (7579001059231154508ULL))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20359))))) : (((var_16) ? (((/* implicit */unsigned long long int) var_0)) : (var_11))))));
}
