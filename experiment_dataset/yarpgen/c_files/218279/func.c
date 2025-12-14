/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218279
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((((_Bool)1) || (((/* implicit */_Bool) (signed char)-20)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                            var_11 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) var_4)));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                        {
                            var_12 = (_Bool)1;
                            arr_15 [i_0] [i_0] [i_1 - 3] [i_2] [i_3] [i_5] = ((/* implicit */short) ((unsigned char) 6728031566439440843ULL));
                            var_13 = ((/* implicit */long long int) (~(((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1))))));
                            var_14 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                            var_15 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872))) : (max((9946085221931105402ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (_Bool)1)))))))));
                        }
                        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-22))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2)))))))));
                        var_18 ^= (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-493603366569009324LL) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (var_6))));
                    }
                } 
            } 
        } 
        var_19 *= ((/* implicit */unsigned char) ((((long long int) (_Bool)1)) >> (((((/* implicit */int) ((unsigned short) -4528645977130625727LL))) - (38185)))));
    }
    for (short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((8500658851778446213ULL), (((/* implicit */unsigned long long int) (signed char)-77))));
        /* LoopNest 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 4; i_10 < 23; i_10 += 2) 
                        {
                            arr_28 [i_7] [i_7] = ((/* implicit */signed char) (short)-17793);
                            arr_29 [i_6] [i_6] [i_7] [i_7] [i_6] [i_9] [i_10] = ((/* implicit */unsigned int) var_2);
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-20)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (signed char)-24)))))))) ? (((/* implicit */int) var_8)) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
        arr_30 [i_6] [12U] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) : (((var_4) / (((/* implicit */long long int) 22U)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)83)))))))))))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 2) 
            {
                var_23 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (unsigned short)1236))) : ((+(((/* implicit */int) (signed char)36)))));
                var_24 = ((/* implicit */short) var_7);
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26))))) ? (((5337327594565984708LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2703174952U)) ? (((/* implicit */int) (short)-1)) : (-1596989129)))))))));
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17800))) : (((((/* implicit */_Bool) 3789846870U)) ? (-5976229936448500510LL) : (((/* implicit */long long int) 0U))))));
        }
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
    {
        var_27 = ((short) ((unsigned short) ((((/* implicit */_Bool) 1596989127)) ? (((/* implicit */int) (unsigned short)28206)) : (((/* implicit */int) (_Bool)1)))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_3))))));
        var_29 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((((/* implicit */int) var_0)), (-1596989139)))), (max((-7711960699568136276LL), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-7285)), (var_7)))))))));
        var_30 = ((/* implicit */long long int) (signed char)116);
    }
    /* LoopNest 3 */
    for (unsigned int i_14 = 3; i_14 < 11; i_14 += 2) 
    {
        for (unsigned short i_15 = 3; i_15 < 13; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                {
                    var_31 = (+(3221225472U));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        arr_52 [i_14] [i_15 - 3] [i_15] [i_16] [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((~(1073741817U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2835963205U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 13; i_18 += 2) 
                        {
                            arr_55 [i_17] [i_15 - 3] [i_16] [i_15 - 3] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3221225468U)) - (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                            arr_56 [i_14 - 3] [i_17] [i_16] [4ULL] [i_18] = ((/* implicit */short) (((+((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) min((3217019918U), (4294967295U))))));
                            arr_57 [i_14] [i_14] [i_15 - 2] [i_16] [i_17] [i_17] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 83799045U)) ? (-765072044) : (((/* implicit */int) (unsigned char)114)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            var_33 += ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_10), (((/* implicit */unsigned int) var_7)))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)982)) ? (709817121U) : (2835963232U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            arr_61 [i_17] = ((/* implicit */signed char) 0ULL);
                        }
                    }
                }
            } 
        } 
    } 
}
