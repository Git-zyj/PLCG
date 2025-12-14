/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46527
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
    var_19 += ((/* implicit */long long int) var_11);
    var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) ((unsigned short) 0ULL)))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-17)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_6))))) : (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))) ? (((/* implicit */unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((1075694172U) - (1075694164U)))))))))) / (16735474305781852863ULL)));
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -3047587375361501087LL)) == ((-(18446744073709551615ULL))))))));
                var_24 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_1) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_2 [i_0]));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_9)) << (((((/* implicit */int) (short)13279)) - (13266)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (arr_3 [i_0 + 1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) <= (arr_2 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((arr_15 [i_2] [i_3] [i_4] [i_5] [i_6]) % (min((arr_18 [i_6] [i_5] [i_4] [i_3] [i_2]), (((((/* implicit */_Bool) arr_12 [i_2] [i_4] [i_6])) ? (arr_18 [i_3] [i_3] [i_5] [i_5] [i_6]) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_5])))))))))));
                                var_26 = ((/* implicit */unsigned char) ((long long int) min((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6 + 1]), (((/* implicit */unsigned long long int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_14 [i_2 + 1] [i_3] [i_3] [i_2])) / (14744196194436327986ULL))));
                    arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3]))) : (1711269767927698752ULL))), (((/* implicit */unsigned long long int) ((3322870262U) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_28 = ((/* implicit */signed char) 18446744073709551605ULL);
                    var_29 = ((/* implicit */unsigned short) arr_18 [i_4] [i_3] [i_3] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
