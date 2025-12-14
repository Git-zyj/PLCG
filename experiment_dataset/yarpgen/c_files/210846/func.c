/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210846
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
    var_17 &= ((/* implicit */signed char) (((-(min((2006902945U), (((/* implicit */unsigned int) (signed char)99)))))) != (((/* implicit */unsigned int) max((var_14), (((var_14) + (((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = ((int) (+(var_12)));
                                arr_13 [i_0] [i_3] [i_3] = ((((unsigned int) ((unsigned short) var_3))) >> (max((((((/* implicit */_Bool) var_10)) ? (var_6) : (var_14))), (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(383861086U)))) ? (var_6) : (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) var_5))))));
                                var_19 &= (unsigned short)46500;
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)13] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)24783))))) ? (((/* implicit */int) (unsigned short)56242)) : (((/* implicit */int) ((var_6) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [3LL])))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_4);
                                var_21 = var_15;
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) arr_24 [i_9] [i_0] [i_1] [i_0])) ? (((((/* implicit */int) var_0)) << (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) - (2180461826U))))) : (((/* implicit */int) var_15))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) var_13)) ? (arr_26 [i_0] [i_1] [i_1] [i_0] [i_9] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -1782850418)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))))))))))));
                                var_23 = ((((/* implicit */int) var_15)) >= ((-2147483647 - 1)));
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((max((((unsigned long long int) 1754338575U)), (((/* implicit */unsigned long long int) ((unsigned int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_1] [i_1])) ? (arr_4 [i_5 + 2] [i_1] [i_5]) : (var_16))))));
                }
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_13)) : (-3223642225354735731LL))), (((/* implicit */long long int) max((arr_24 [i_10] [i_10] [i_1] [i_0]), (arr_24 [i_10] [i_10] [i_0] [i_0]))))));
                    arr_34 [i_1] [i_10] = ((/* implicit */short) (signed char)2);
                }
                var_25 = arr_17 [i_0];
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_3))));
    var_27 = ((/* implicit */unsigned long long int) (+(max((var_11), (((/* implicit */unsigned int) var_6))))));
}
