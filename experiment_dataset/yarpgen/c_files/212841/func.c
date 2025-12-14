/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212841
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
                    var_16 = ((/* implicit */int) var_11);
                    arr_9 [i_0] = (short)-20476;
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [(unsigned short)10] [i_0] [i_0]);
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)226)), (arr_10 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 2])));
                }
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0 - 1] [i_0] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [11LL] [i_1] [11LL] [8LL] [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_4 + 3])) ? (((/* implicit */int) arr_6 [i_4 + 3] [i_0 + 2])) : (((/* implicit */int) min(((short)-20481), ((short)-20476)))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)7] [(short)7] [i_5] [i_6])) ? (var_7) : (var_7)))) ? (min((((/* implicit */int) (unsigned short)65531)), (-210960495))) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0])))) : (arr_16 [i_0] [i_5] [i_4] [i_0])))));
                                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047U)) ? (((/* implicit */int) (short)-20487)) : (arr_5 [i_0] [i_0])))), (var_11)));
                                arr_21 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2037U))));
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1)))) == ((~(((/* implicit */int) (unsigned char)51))))));
                }
                for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (~(2047U)));
                    arr_26 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
                    var_23 -= ((/* implicit */unsigned char) var_12);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            {
                                arr_32 [i_0 + 1] [16LL] [i_7 + 3] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_14 [i_7 + 2] [i_0 - 1])))) ? (min((arr_14 [i_7 - 1] [i_0 - 3]), (((/* implicit */long long int) var_15)))) : (arr_14 [i_7 - 1] [i_0 - 2])));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)3584))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)4))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_7] [i_10 + 1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6474782988267794907LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134)))))) : (((((/* implicit */_Bool) (short)-3603)) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (3269345199U)))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_14))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */short) var_5);
                var_28 = ((/* implicit */unsigned char) var_12);
                var_29 &= ((/* implicit */short) 4294965249U);
                var_30 = ((/* implicit */short) arr_25 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2037U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_4)) : (1025622096U))) : (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) var_3)))))))));
}
