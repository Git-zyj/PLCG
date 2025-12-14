/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193209
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)13320)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))) ? ((+(11237162587878769797ULL))) : (((/* implicit */unsigned long long int) ((var_0) | (8U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_8))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) ((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) var_17)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_1] [i_2] [i_3 - 3])) : (((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_17))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3 - 3] = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) & (-8353802375407833059LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)0), (var_9))))) > (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) & (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0)))))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (arr_7 [i_0] [i_0] [i_0] [i_0] [8U])))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-2951163804089845361LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32760)))));
                var_22 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((long long int) var_12)))))));
                arr_12 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_5 [i_0])))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (11237162587878769797ULL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1621))) - (var_7))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min((var_6), (((/* implicit */unsigned int) var_13)))))))));
}
