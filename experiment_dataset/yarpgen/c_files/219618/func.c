/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219618
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
    var_20 = ((/* implicit */_Bool) var_19);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) (short)-8)), ((~(((/* implicit */int) (unsigned short)65535)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [(unsigned short)2] [i_1] = ((_Bool) (signed char)-90);
                    var_22 = ((((/* implicit */_Bool) (-(-6779058799943237914LL)))) && (((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (arr_4 [i_1] [i_1] [i_1])))), (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_1]))))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 6; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) 4611123068473966592LL);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_17 [(_Bool)1] [i_4] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */unsigned int) (unsigned short)24);
                                arr_18 [i_0] [i_0] [i_1] [0] [i_4 - 2] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47784)))))) - (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) 473447829U)) : (1152921504606845952LL))) == (((/* implicit */long long int) min((1123659452U), (((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_5 + 1]))))))))));
                                var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_3] [2LL] [i_3] [i_3 + 4])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59420)) - (((/* implicit */int) arr_6 [2U] [2U]))))) ? (((/* implicit */int) arr_14 [4ULL] [i_3 + 1] [i_3] [i_1 - 1])) : (((/* implicit */int) var_15)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)12))))));
                            }
                        } 
                    } 
                }
                arr_19 [i_1] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
}
