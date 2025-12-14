/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216695
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
    var_17 = ((/* implicit */long long int) max(((((((~(((/* implicit */int) var_15)))) + (2147483647))) >> (((var_11) + (869873454101683370LL))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) <= (1053850715))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 3) 
                {
                    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((arr_7 [i_1]) << (((-1053850715) + (1053850738))))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) 1053850715);
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((int) arr_6 [6LL] [i_1] [i_2] [i_3])))))));
                        var_22 = ((/* implicit */long long int) (-(arr_6 [i_2 + 2] [i_0 - 2] [i_2] [i_3])));
                        arr_10 [i_2] [2LL] [i_2] = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_9)) >> (((arr_0 [i_0]) - (758637799))))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_0 - 2] = ((/* implicit */unsigned short) ((var_15) ? ((+(arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-14289)))));
                        var_23 = ((/* implicit */unsigned long long int) ((-571673756747973719LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1533008680)) ? (-7517623907115798572LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (arr_3 [i_2] [i_1])));
                    }
                }
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    var_26 = ((/* implicit */signed char) (short)496);
                    arr_16 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_16);
                }
                for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                {
                    var_27 += min((min((((/* implicit */long long int) (~(arr_4 [i_0] [i_1] [i_6])))), (((long long int) (_Bool)1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [2U] [i_0] [2U] [i_1] [i_6] [i_6])) ? (((/* implicit */int) var_16)) : (-388839767))))))));
                    var_28 = var_11;
                }
                arr_19 [i_1] [i_0] = max((((/* implicit */long long int) (short)496)), (min((arr_2 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_1] [i_1] [i_1] [i_1]))))))));
                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) min((((/* implicit */short) (unsigned char)99)), (arr_12 [(unsigned char)0] [(_Bool)1] [(_Bool)1] [i_1]))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_17 [i_1] [i_0] [6ULL])))) ? (((18014261070528512ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ ((~(18211536431481456720ULL))))), (min((((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0 - 2] [i_0] [i_0] [i_1] [i_0 - 1] [i_0]))), (((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))))))))));
                            var_32 = (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 2; i_9 < 8; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-((+(var_0))))))));
                                arr_38 [i_0 + 1] [i_1] [i_1] [i_1] [i_10] [i_11] [9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)500)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_11])))))))) == (min((((((/* implicit */_Bool) var_13)) ? (arr_17 [i_11] [6LL] [8LL]) : (((/* implicit */unsigned long long int) arr_2 [i_1])))), (((/* implicit */unsigned long long int) arr_22 [i_11]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
