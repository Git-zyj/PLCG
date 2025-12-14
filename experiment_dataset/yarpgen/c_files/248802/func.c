/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248802
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
    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-2)) != (((((/* implicit */int) (signed char)-5)) % (((/* implicit */int) (signed char)-25)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_6)), (var_7))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (var_1))))))) << (((((((var_0) << (((var_19) - (4170976762U))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_3)))))))) - (4611686018427387889ULL)))));
                arr_7 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((((((-568921018) + (2147483647))) << (((((arr_5 [i_1] [i_0 + 1] [i_0 - 2]) + (5037416652189652306LL))) - (5LL))))) - (1578562629)))));
                var_23 = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) != ((~(((/* implicit */int) var_6)))))) && ((!(((/* implicit */_Bool) (~(arr_3 [i_0]))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) < (var_17)));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_15)) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_0))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) ((var_5) ^ (var_0)))))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_4] [18LL] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) != (max((var_5), (((/* implicit */unsigned long long int) var_14))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((var_10) - (910860511)))))), ((+(arr_17 [i_2] [i_2] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 21; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_26 [i_2] [i_5] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) (((-(arr_15 [i_3] [i_3]))) >> (((/* implicit */int) ((((/* implicit */long long int) var_19)) <= (((var_8) << (((/* implicit */int) arr_10 [i_2])))))))));
                                arr_27 [10] [i_3] [10] [20ULL] [i_6] |= (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5 - 1] [i_5])));
                                var_25 += ((/* implicit */long long int) (+(((arr_23 [i_5 - 1]) << (((arr_23 [i_5 - 3]) - (603994513)))))));
                                arr_28 [i_2] [i_5] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_17 [i_2] [i_4] [i_5 - 2] [i_6]) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-2)), ((-2147483647 - 1)))))));
                            }
                        } 
                    } 
                    arr_29 [i_2] [i_2] [i_2] [(unsigned short)21] = ((/* implicit */long long int) arr_13 [i_2] [i_4]);
                    arr_30 [i_2] [(_Bool)1] = ((/* implicit */long long int) var_12);
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) (~(var_17)));
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-25))))))) ^ (((/* implicit */int) var_6))));
    }
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_9 = 1; i_9 < 8; i_9 += 3) /* same iter space */
            {
                arr_41 [i_7] [i_7] [i_7] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_15)), (min((var_0), (((/* implicit */unsigned long long int) arr_11 [i_7] [i_8])))))), (((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */unsigned long long int) arr_5 [i_7] [i_9 + 2] [i_7])))))));
                arr_42 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) (+(((var_9) | ((-(var_17)))))));
                var_28 += ((/* implicit */unsigned int) var_13);
                arr_43 [i_7] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) & (((/* implicit */int) ((((/* implicit */long long int) 557376182U)) <= (9098100905208396342LL))))));
            }
            for (short i_10 = 1; i_10 < 8; i_10 += 3) /* same iter space */
            {
                arr_46 [i_7] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_20 [i_7] [12LL] [i_8] [i_10 + 2])))))))) * (((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) * (((((/* implicit */long long int) ((/* implicit */int) var_4))) * (var_8)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_17);
                            arr_51 [i_12] [i_7] [i_12] [i_11 - 1] [i_10] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_8]))));
                            arr_52 [i_7] [i_8] [i_7] [i_11] [i_12] [i_7] [4ULL] = var_9;
                        }
                    } 
                } 
            }
            var_30 = (i_7 % 2 == zero) ? ((((((~((+(((/* implicit */int) arr_49 [i_8] [(unsigned char)6])))))) + (2147483647))) << (((arr_0 [i_7]) - (1119696836866002343LL))))) : ((((((~((+(((/* implicit */int) arr_49 [i_8] [(unsigned char)6])))))) + (2147483647))) << (((((((arr_0 [i_7]) + (1119696836866002343LL))) + (7308343944859024091LL))) - (2LL)))));
            arr_53 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_32 [i_7] [i_8])) >= ((-(var_18)))));
        }
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_7))));
    }
}
