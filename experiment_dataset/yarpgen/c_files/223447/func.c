/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223447
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
    var_11 = ((/* implicit */int) var_9);
    var_12 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)2))) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4083573924U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (4811867716540077843LL))))))))))));
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_0 [i_0]))), (-1098895799)));
        var_15 = ((/* implicit */long long int) max((var_15), (((((((((/* implicit */_Bool) 211393372U)) ? (-4811867716540077842LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (arr_2 [i_0] [i_0]))))))));
        var_16 += ((/* implicit */unsigned char) arr_2 [(signed char)9] [i_0]);
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 144115188075823104ULL)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)70))))) != (((unsigned int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)62361)), (2715803166U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (short)0)) : (2147483647)))))) : (4811867716540077833LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) : (var_9)))) ? (((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_2] [i_2]))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((signed char) var_9)))));
                var_20 = -6870383089253981880LL;
                var_21 += ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_1 - 1]);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2))));
            }
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                arr_14 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 + 2]))));
                arr_15 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((long long int) (unsigned short)65513));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((4317649758866276519ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))))));
                        var_24 -= ((long long int) arr_11 [i_1 - 1] [i_6] [i_6 + 2]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3186))) != (14129094314843275098ULL)))) + (((/* implicit */int) arr_3 [i_6 + 3] [i_1 + 3])))))));
                    }
                    var_26 += ((((/* implicit */_Bool) (+(17072246013995183735ULL)))) ? (((var_8) % (arr_23 [(_Bool)1] [(_Bool)1] [i_6] [i_5] [i_5] [i_1]))) : (var_9));
                    var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                    var_28 += ((/* implicit */signed char) ((((/* implicit */long long int) -217334946)) > ((+((-9223372036854775807LL - 1LL))))));
                }
                arr_26 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_1] [(unsigned short)4] [(_Bool)1]))));
            }
            for (short i_9 = 2; i_9 < 16; i_9 += 1) 
            {
                arr_29 [i_1] [i_1] [(signed char)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)62361))));
                var_29 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)13))))), ((((_Bool)0) ? (4193090181391884038ULL) : (4193090181391884038ULL))));
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_30 = ((/* implicit */signed char) ((unsigned long long int) min((arr_9 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_1] [i_1 - 1])))));
                arr_32 [i_1] [16U] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_5] [i_10]))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))));
                var_31 = ((/* implicit */int) min((var_31), ((-((~(((/* implicit */int) arr_20 [i_1 + 1]))))))));
                var_32 |= ((/* implicit */unsigned int) max(((~(arr_31 [i_1 + 3] [0LL] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))));
            }
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (((long long int) arr_8 [i_1] [i_5] [i_5] [i_5]))))) << (((1579164144U) - (1579164140U)))));
        }
        for (int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            arr_36 [i_1] [i_1] [(unsigned short)16] = ((/* implicit */int) 524272LL);
            arr_37 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) max((-2056219637), (((/* implicit */int) (short)2269))))) : (((unsigned long long int) min((((/* implicit */unsigned short) var_3)), (var_5))))));
            var_34 = ((/* implicit */short) 13257915507234571108ULL);
            var_35 |= ((/* implicit */long long int) var_6);
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [6ULL] [i_11] [i_1] [i_1])) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-2))))));
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_41 [i_12] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) (short)-32742)));
        arr_42 [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)98))));
        arr_43 [i_12] = (signed char)-27;
    }
}
