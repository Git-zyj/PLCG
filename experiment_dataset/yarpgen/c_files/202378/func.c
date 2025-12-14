/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202378
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_13)) >> (((min((((/* implicit */int) arr_2 [(_Bool)1])), (arr_1 [i_0] [i_0]))) + (1214702610))))), (arr_1 [i_0] [7LL])));
        var_18 ^= arr_1 [i_0] [(unsigned char)7];
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))))) >> (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_13)) : (420807203))) * (((/* implicit */int) (short)-1)))) + (2128)))));
        arr_4 [13] &= ((/* implicit */long long int) (signed char)-85);
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_2 + 1] [i_3] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (arr_11 [i_3] [i_1])))), (max((((/* implicit */unsigned long long int) (unsigned short)4)), (var_8))))), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [i_3] [i_1]))));
                    arr_15 [i_3] [i_2 - 1] [i_2 - 1] = (-((+(((/* implicit */int) arr_8 [i_2 - 1])))));
                    var_19 *= ((/* implicit */unsigned int) arr_11 [i_1] [i_2 + 1]);
                    var_20 += ((/* implicit */int) (signed char)(-127 - 1));
                }
            } 
        } 
        arr_16 [17LL] = arr_13 [i_1] [i_1] [i_1];
        var_21 += ((/* implicit */unsigned char) min(((-(arr_11 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1])) && (((/* implicit */_Bool) arr_11 [i_1] [i_1])))))));
    }
    for (long long int i_4 = 4; i_4 < 12; i_4 += 4) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65513)) ? (max((arr_13 [i_4] [i_4] [i_4 + 2]), (((/* implicit */unsigned long long int) arr_2 [(signed char)13])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1955368851)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)0)))))))));
        var_22 = ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))) ? (max((max((127ULL), (((/* implicit */unsigned long long int) (unsigned short)46345)))), (1591088141035116848ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_4 - 2] [i_4 + 2] [i_4]), (arr_10 [i_4 + 1] [i_4 - 4] [i_4 - 2]))))));
    }
    var_23 = max((((max((((/* implicit */unsigned long long int) var_13)), (16855655932674434776ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 420807214)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) var_16)));
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] = max((arr_22 [(short)6]), (((/* implicit */unsigned long long int) ((signed char) arr_18 [i_5]))));
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) var_4);
        var_24 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((int) 18444492273895866368ULL))), (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (var_0))))), (max((((unsigned long long int) arr_6 [i_5])), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5]))))));
        var_25 = ((/* implicit */unsigned char) arr_7 [i_5]);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_36 [i_7] [i_7] = ((((/* implicit */_Bool) arr_30 [i_8] [i_7] [10ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_8] [i_9])));
                        arr_37 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ ((-(16855655932674434759ULL)))));
                        var_26 = ((/* implicit */long long int) arr_30 [i_6] [i_7] [i_8]);
                        arr_38 [i_7] [i_8] = ((((/* implicit */_Bool) arr_33 [i_8] [i_7] [4ULL] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) arr_26 [i_7])) : (((18446744073709551592ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55850))))));
                    }
                } 
            } 
        } 
        arr_39 [5ULL] [5ULL] = ((/* implicit */signed char) ((unsigned short) ((int) arr_12 [i_6] [i_6] [i_6] [15])));
        var_27 -= ((/* implicit */unsigned long long int) 3429707021466787974LL);
        var_28 |= ((/* implicit */unsigned long long int) (signed char)-5);
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
    {
        arr_42 [i_10] [i_10] = ((/* implicit */long long int) (-(134217727ULL)));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_10])) ? (arr_46 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_10] [i_10])))))))) ? (15690536852850636801ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? ((+(15))) : (arr_12 [i_10] [i_11] [i_11] [i_11]))))));
            var_30 = ((/* implicit */signed char) max((arr_0 [i_10]), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)15)), (var_1))))));
        }
    }
}
