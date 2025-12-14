/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199809
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
    var_11 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((_Bool) (short)30170))) ^ (((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (~(4294901760U)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [10U] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (~((+((+(arr_5 [i_2] [i_1])))))));
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)30170)), (3506487211U)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_2))), ((~(((((/* implicit */int) arr_6 [i_4] [i_4] [4U])) ^ (((/* implicit */int) arr_9 [i_3] [i_4]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -2108094744462562551LL)) && (((/* implicit */_Bool) arr_22 [7U] [i_6] [i_5] [i_4] [(short)1]))))) << (((var_10) - (10793727615003334866ULL)))));
                                var_16 += ((/* implicit */unsigned int) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_17 = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_3] [0ULL]));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)159)))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [5U] [1LL] [i_3]))) == ((-(var_7))));
                        arr_26 [(_Bool)1] [i_4] [i_3] [6LL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)172)) >> (((((/* implicit */int) (short)30170)) - (30160)))));
                        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) + (((/* implicit */int) var_9))));
                    }
                }
                for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (short)-30149)))));
                                arr_33 [i_3] [i_4] [(short)9] [(short)4] [i_3] = ((/* implicit */int) ((((max((((/* implicit */unsigned int) var_2)), (arr_17 [i_3] [i_9 + 1] [(unsigned char)0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_3] [8U] [i_9 + 1] [(unsigned short)0] [9ULL]) != (arr_17 [i_3] [i_3] [i_3]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)19)) <= (((/* implicit */int) (unsigned char)159))))))));
                                arr_34 [i_4] [i_3] [(unsigned short)4] [i_11] = ((unsigned int) min((arr_11 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) & (1246671144U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 2; i_12 < 6; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                arr_40 [i_3] [(short)9] [(short)3] [4U] [i_3] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((short) arr_1 [i_4] [(_Bool)1])), (((/* implicit */short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)97))))))), ((~(var_7)))));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) ((unsigned short) (short)-9608)))), (((unsigned int) ((unsigned char) arr_38 [2U] [6U] [i_9 - 1] [i_12 + 3] [(_Bool)1] [(short)2])))));
                                var_23 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((unsigned short) var_8))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) max((var_24), (max(((+(4259020502U))), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) / ((~(((/* implicit */int) arr_28 [(short)5])))))))))));
                    arr_41 [i_3] [9U] [i_3] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_14 [i_9 - 1] [(signed char)7])))), (((((/* implicit */int) (unsigned char)118)) == (((/* implicit */int) (unsigned short)27843)))))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_14 = 1; i_14 < 7; i_14 += 3) 
                {
                    var_25 = ((/* implicit */int) max((((/* implicit */long long int) min((arr_8 [(unsigned short)6] [i_14 + 2]), (var_3)))), ((+((~(arr_44 [(_Bool)1] [i_4] [i_4])))))));
                    var_26 = ((/* implicit */unsigned long long int) max(((-(max((2711934694U), (arr_19 [(signed char)6]))))), (((/* implicit */unsigned int) ((signed char) 1488344531U)))));
                    var_27 = (+(min((((/* implicit */long long int) ((unsigned int) (signed char)-117))), (min((var_6), (((/* implicit */long long int) 788480085U)))))));
                    var_28 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((short) arr_39 [i_3]))), (((unsigned long long int) (unsigned char)0)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) arr_21 [7LL] [i_14 + 1] [i_14 + 2] [9ULL]))))))));
                    arr_45 [6U] [i_3] [i_14 + 2] = ((/* implicit */unsigned short) (-((~((+(3978379185U)))))));
                }
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) (short)31071))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [(unsigned char)4] [8U] [9U] [(unsigned char)2] [i_17]))) <= (-9223372036854775793LL))))), ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)34684)))))))));
                                var_31 += ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (3441994206U)))), (max((arr_35 [(signed char)3] [i_4] [(short)4] [i_16] [3] [i_3]), (((/* implicit */unsigned int) (signed char)43)))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [(unsigned char)2] [(short)10]), (arr_1 [i_3] [i_15])))))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */_Bool) min((((long long int) (_Bool)1)), ((-(arr_14 [i_4] [i_4])))));
            }
        } 
    } 
}
