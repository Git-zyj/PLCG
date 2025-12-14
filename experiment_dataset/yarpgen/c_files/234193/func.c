/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234193
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) (unsigned short)65517)), (arr_2 [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) / (var_8))))))));
        var_13 = ((/* implicit */signed char) ((long long int) (unsigned short)65517));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65526))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) var_6);
        var_16 = ((/* implicit */_Bool) 536870911);
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(-1)));
            var_18 |= ((/* implicit */signed char) -536870913);
            arr_10 [i_2] [10] = ((/* implicit */int) arr_0 [i_2 - 1]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [4] [4] [i_2] |= ((/* implicit */_Bool) (-2147483647 - 1));
            var_19 = ((/* implicit */signed char) arr_13 [i_2 + 1] [i_4]);
        }
        for (long long int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [i_2] = ((/* implicit */unsigned char) (unsigned short)18);
            arr_19 [i_5] [i_2] [i_2] = ((((/* implicit */_Bool) var_6)) ? (-536870919) : (((/* implicit */int) arr_4 [i_2] [i_5 - 1])));
        }
        for (long long int i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        arr_28 [i_2] [i_2] [i_7] = ((/* implicit */_Bool) var_3);
                        var_20 += (((+(var_8))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)9))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_6 - 2] [i_6 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)100))) & (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -2147483646))))));
            arr_29 [i_2] [i_6 + 1] [i_6] = ((/* implicit */signed char) (unsigned short)65535);
        }
    }
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    var_22 = (unsigned short)15957;
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_38 [i_9 + 1] [i_9 - 1] [i_11] [i_11])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (var_6)))))))));
                    arr_39 [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (4095) : (((/* implicit */int) (short)255))))) < ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (var_8))))) ? (0) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_10] [i_11])), (536870899)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (unsigned short)65529)))))));
                    var_24 = ((/* implicit */unsigned short) (-((+(max((var_5), (((/* implicit */unsigned int) arr_12 [i_9 - 1] [i_10] [i_11]))))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_9 + 1] [i_12]), (((/* implicit */int) var_2))))) ? (((unsigned int) min((var_0), ((signed char)-99)))) : (((/* implicit */unsigned int) (~(0))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 2; i_13 < 12; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((((/* implicit */unsigned int) arr_2 [i_9] [i_11])) / (2805118434U))))) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (signed char)-101))));
                            var_27 = ((/* implicit */_Bool) max(((~(arr_27 [i_9 + 1] [i_13 - 2] [i_13] [12] [i_13] [i_13 - 2]))), (((/* implicit */int) arr_16 [i_9] [i_11] [i_13]))));
                            var_28 -= ((/* implicit */short) arr_21 [i_11] [i_12]);
                            var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_37 [i_9] [i_10] [i_10])))) : (((/* implicit */int) max(((unsigned short)1008), ((unsigned short)7168))))))));
                            arr_46 [i_9 + 1] [(unsigned short)2] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_9 + 1] [i_9 - 1]))) : (var_8)))));
                        }
                        arr_47 [i_9] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)192)))));
                        var_30 = ((/* implicit */int) ((((-7105195767453651300LL) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (~(var_6)))) ? (min((((/* implicit */unsigned long long int) (signed char)6)), (arr_25 [i_9] [i_10] [i_11] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (arr_40 [i_12] [i_11] [i_9 + 1])))))))));
                        arr_48 [i_12] [i_10] [i_10] [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_10] [i_9 + 1])) ? (((/* implicit */int) max(((unsigned short)46106), ((unsigned short)0)))) : (max((((/* implicit */int) arr_34 [i_9] [i_10] [i_9 - 1])), (-59657684)))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */int) max((var_31), ((+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (max((arr_44 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_41 [(_Bool)1] [i_9 + 1]))))))));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    for (unsigned char i_17 = 4; i_17 < 10; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (unsigned short)65517);
                                arr_64 [i_14] [i_14] [i_15] [i_17] [i_18] [i_14] [i_17] = ((/* implicit */int) ((((/* implicit */int) (((+(234881024))) == (((/* implicit */int) var_9))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)52052)) < (arr_27 [i_17 + 2] [i_17 - 2] [i_17 - 4] [i_17] [i_17] [i_17 - 1]))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(arr_43 [i_14] [15LL] [i_16] [i_17] [15LL] [i_15]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_17 - 2] [i_17 - 3] [i_17])))))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_59 [i_15])) : (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_15] [i_16] [i_17 - 3])) ? (((/* implicit */int) arr_16 [i_16] [i_16] [i_17 - 3])) : (((/* implicit */int) (unsigned short)12288)))))));
                            }
                        } 
                    } 
                } 
                var_34 -= ((/* implicit */unsigned short) arr_13 [i_14] [i_15]);
                arr_65 [i_15] = ((/* implicit */long long int) min(((+(arr_27 [i_14] [i_14] [i_15] [i_15] [i_14] [i_15]))), (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_59 [i_15])))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) (unsigned short)52052);
}
