/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39092
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(min((-539514692), (((/* implicit */int) arr_1 [i_0]))))));
        var_13 = (-(((/* implicit */int) var_3)));
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (-1441359760) : (((/* implicit */int) (unsigned char)180))))) ? (((((/* implicit */_Bool) (unsigned char)206)) ? (var_1) : (((/* implicit */int) (unsigned char)200)))) : (((/* implicit */int) (unsigned char)66))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
        var_15 ^= ((/* implicit */signed char) (unsigned char)83);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_0;
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */long long int) (-(-369495144)));
                var_17 = ((/* implicit */unsigned long long int) var_4);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                arr_14 [i_4] = var_11;
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)61)) % ((-(((/* implicit */int) (unsigned char)65))))));
                            var_20 = var_6;
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (2180392044U)));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(arr_23 [i_9] [i_9] [i_7] [i_9]))))));
                            var_23 = ((/* implicit */_Bool) (unsigned short)1235);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_7] [i_8] [i_9])) ? (arr_10 [i_1] [i_2] [17U] [i_8 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) || (((/* implicit */_Bool) 780069509U)))))))))));
                            var_25 = ((/* implicit */short) 540093973);
                        }
                    } 
                } 
                arr_28 [1] [i_7] = ((/* implicit */signed char) (+(5127639770536836455LL)));
            }
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_1] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned short)65535)))) % (((((/* implicit */int) (unsigned char)188)) + (((/* implicit */int) (unsigned short)58506))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65518)))))));
            }
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (var_5) : (var_5))))));
        }
        for (short i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            arr_33 [i_1] [(short)15] = ((((((((((/* implicit */_Bool) var_1)) ? (arr_16 [i_1]) : (((/* implicit */long long int) var_8)))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_25 [i_11] [i_11] [i_1] [i_11] [i_1] [i_1] [i_1])) - (2525))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -5127639770536836473LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (5563253160519849081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64295)))))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64291)))))) : (-5239332091542255973LL))) : ((((_Bool)1) ? (min((6640616219944884204LL), (((/* implicit */long long int) (unsigned char)66)))) : (((/* implicit */long long int) 4294967295U))))));
        }
        for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_11) == (-1LL))))));
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned char)229), (((/* implicit */unsigned char) (signed char)-1)))))));
            var_32 = ((/* implicit */unsigned int) min((-2030235215), (((/* implicit */int) (unsigned short)1238))));
            arr_36 [i_1] &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)24))));
        }
        arr_37 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1])) && (((/* implicit */_Bool) (unsigned char)187))))))))));
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
    {
        var_33 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max(((unsigned short)1230), ((unsigned short)64293)))) ? (2017459910) : (((((/* implicit */_Bool) arr_9 [i_13] [i_13] [i_13] [i_13])) ? (2030235225) : (((/* implicit */int) (unsigned short)4))))))));
        arr_40 [i_13] |= ((/* implicit */short) ((unsigned long long int) 5127639770536836472LL));
        arr_41 [i_13] = ((/* implicit */short) (((+(arr_34 [i_13]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) 2030235237)))))));
    }
    var_34 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)8))));
}
