/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245782
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */_Bool) max((max((((/* implicit */int) arr_0 [i_1 - 1] [18])), (-657264765))), ((-(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)2]))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_11 *= ((/* implicit */unsigned short) arr_2 [18LL]);
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((((unsigned long long int) 4705461502909956162LL)) == (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (var_8))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((3986699664048913798LL) - (3986699664048913793LL)))))) && ((!(((/* implicit */_Bool) arr_1 [2])))))))))));
                    var_13 ^= ((/* implicit */unsigned int) min(((-(-657264765))), (((/* implicit */int) var_4))));
                }
                for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    var_14 ^= ((min((2006398540U), (((/* implicit */unsigned int) var_4)))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))));
                    var_15 = ((/* implicit */short) ((unsigned int) max((max((((/* implicit */unsigned int) (_Bool)1)), (2288568756U))), (((/* implicit */unsigned int) max((-657264742), (var_9)))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                                var_16 ^= ((/* implicit */unsigned int) var_8);
                                arr_17 [i_5] [i_3] [i_3] [i_3] [i_1] [i_0] &= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 1] [i_1 - 1])) % (((/* implicit */int) arr_12 [i_5 + 1] [i_5 - 1] [i_1 - 1])))));
                            }
                        } 
                    } 
                    arr_18 [i_1 - 1] [i_0] = ((/* implicit */signed char) (~(var_8)));
                }
                for (int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_17 -= ((/* implicit */int) ((unsigned short) min((2006398540U), (((/* implicit */unsigned int) ((signed char) var_9))))));
                    var_18 = ((/* implicit */unsigned char) ((short) max((var_6), (((/* implicit */long long int) ((((-657264765) + (2147483647))) >> (((-657264773) + (657264782)))))))));
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */int) ((short) min((var_8), (((/* implicit */unsigned long long int) arr_3 [(short)21])))))) <= ((-(-1269627798)))));
                    arr_23 [i_0] = ((/* implicit */unsigned char) (~(-657264765)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) max((((signed char) ((((/* implicit */int) (short)-13401)) - (((/* implicit */int) var_5))))), (((/* implicit */signed char) var_0))));
                    arr_28 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (unsigned short)4111));
                    var_21 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_9 [i_0] [i_0] [i_0])))) ? (((unsigned int) -1269627812)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1))))))));
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) 2006398537U)) ? (2288568758U) : (2288568773U)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (2006398537U)))) ? (((/* implicit */long long int) 1269627812)) : (max((((/* implicit */long long int) var_3)), (arr_9 [i_7] [i_7] [i_7])))))));
                    var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (-547615656) : (((/* implicit */int) arr_27 [i_7] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_7]))))) : ((-(var_3)))))), (((unsigned int) max((2288568758U), (((/* implicit */unsigned int) var_0)))))));
                }
            }
        } 
    } 
    var_24 = min((var_9), (((/* implicit */int) var_4)));
    var_25 = ((/* implicit */unsigned short) ((short) ((min((((/* implicit */long long int) 2006398540U)), (var_6))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))))));
    var_26 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((unsigned char) var_4))), (var_2))), (((unsigned long long int) (~(((/* implicit */int) (unsigned char)44)))))));
}
