/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31239
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((~(var_5)))))), (min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(var_7))))))));
                arr_8 [(unsigned short)3] [(unsigned short)3] [13U] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((unsigned char) 18446744073709551615ULL))))) || (((/* implicit */_Bool) (-((~(arr_3 [i_0]))))))));
                var_16 |= ((/* implicit */unsigned short) ((int) (+((+(var_3))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), ((~((+((+(((/* implicit */int) var_13))))))))));
    var_18 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((short) var_12)))))));
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_14)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_14)))))) ? (((((/* implicit */_Bool) (~(arr_9 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((unsigned short) arr_9 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551615ULL))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_19 [i_2] [(unsigned char)12] [i_3] [i_3] [i_5] = ((/* implicit */short) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_5])) && (var_2)))), (max((arr_12 [i_2] [i_2] [i_4]), (((/* implicit */unsigned int) arr_18 [i_2 + 2] [i_3] [i_4] [i_5 - 2]))))))));
                            var_21 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL)))) ? (min((var_5), (((/* implicit */long long int) 1632375850)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                            var_22 = ((/* implicit */unsigned short) (~(min(((+(1ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((unsigned int) var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [(_Bool)1])) ? (var_5) : (var_5)))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_3])), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_5])))))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1665632762))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
