/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246862
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
    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) ^ (var_1)))))) ? (((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)-8993)) + (2147483647))) >> (((((/* implicit */int) (signed char)-92)) + (115)))))))) : (((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) -4319759111561193840LL)) : (14120131542473539233ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
    var_21 = ((/* implicit */unsigned long long int) (~(var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)243))))) > (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))));
                                arr_15 [i_4 + 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) * (((/* implicit */int) min((var_6), (var_13))))))) ? (((((/* implicit */_Bool) ((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ? (max((var_17), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_15)))) >> (((max((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_15)))), (min((((/* implicit */unsigned int) var_14)), (var_2))))) - (2782688747U)))));
                                var_24 = ((/* implicit */unsigned long long int) (~(var_11)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_25 = ((/* implicit */short) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) min((max((var_3), (var_3))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))))))) : ((~(max((((/* implicit */long long int) var_15)), (var_8)))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_3))))) : (((var_6) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_27 *= ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                                arr_26 [i_0] [i_0] [i_0] [10U] [i_0 + 2] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_5))));
                                var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 11; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) (short)-4357)) ? (-8716329676067058657LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4356)))))));
                                arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                }
            }
        } 
    } 
}
