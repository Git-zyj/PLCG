/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2364
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (var_9) : (((/* implicit */int) ((var_11) > (max((((/* implicit */long long int) 372909266U)), (3261913513132428294LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((arr_3 [i_0] [i_0]) & (((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_0 [i_0])) + (78)))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((2032U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((long long int) (unsigned char)114)) : (((/* implicit */long long int) ((/* implicit */int) (short)-32755)))));
                var_16 = ((/* implicit */short) var_6);
                var_17 &= ((/* implicit */unsigned char) (~(((((arr_3 [i_0] [i_1]) + (2147483647))) << (((((arr_3 [i_1] [i_0]) + (1116082308))) - (4)))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-95))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 44235245937356458LL)))))) % (((/* implicit */unsigned long long int) ((-2189252333196835048LL) | (((/* implicit */long long int) 11U)))))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) arr_9 [i_2]))))) : (arr_8 [i_3 + 2] [i_6 - 1])))));
                            var_19 -= ((/* implicit */long long int) var_13);
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_4] [i_5]);
                            var_20 = ((/* implicit */long long int) (~(arr_11 [i_3] [i_6 - 2])));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) 1142665647U);
                            var_21 = (((!(((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5] [i_7 + 1] [i_7] [i_7])))) || (((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_7] [i_7 + 1] [i_7] [i_7])) || (((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 1] [i_7 - 1] [i_7] [i_7])))));
                            arr_26 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_5] [i_7] [i_5] [i_7])) + (((/* implicit */int) (short)-32755))))))))));
                            arr_27 [i_2] [i_2] [i_3] [i_3] [i_5] [i_7] |= ((/* implicit */unsigned int) (~(-1681541929)));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)43281)) : (((/* implicit */int) (unsigned short)31360))));
                            arr_30 [i_2] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */short) max((((unsigned int) arr_8 [i_2] [i_4])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3 - 1])) || (((/* implicit */_Bool) arr_8 [i_2] [i_3])))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_19 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]), (((/* implicit */unsigned short) (unsigned char)61))))) ? ((~(3877751482683275686ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32755))))))));
                        }
                        var_24 = ((/* implicit */signed char) 3710004138U);
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        arr_34 [i_9] = ((/* implicit */short) min((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9]))) & (8U))), (((/* implicit */unsigned int) ((((-1704511854) + (2147483647))) >> (((arr_31 [i_9]) - (3884608055U)))))))), (((/* implicit */unsigned int) (~(arr_33 [i_9] [i_9]))))));
        arr_35 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_33 [i_9] [i_9]), (arr_33 [i_9] [i_9])))) - (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (10834014245323209995ULL) : (((/* implicit */unsigned long long int) 761325225U))))));
        var_25 *= ((/* implicit */unsigned long long int) arr_31 [i_9]);
        arr_36 [i_9] [i_9] = ((/* implicit */long long int) arr_32 [i_9]);
        var_26 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_9] [i_9])) < (((18446744073709551602ULL) >> (((arr_31 [i_9]) - (3884608028U))))))))) <= (((7190069390951068397LL) >> (((2147483647) - (2147483600))))));
    }
    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (arr_11 [i_10] [i_10]) : (arr_11 [i_10] [i_10])))) ? (arr_11 [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_10] [i_10]))))))));
        var_27 = ((/* implicit */int) ((signed char) arr_9 [i_10]));
        var_28 += ((/* implicit */signed char) var_10);
        var_29 = ((/* implicit */long long int) arr_37 [i_10]);
    }
    var_30 = ((/* implicit */int) var_13);
}
