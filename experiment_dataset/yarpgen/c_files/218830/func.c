/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218830
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((long long int) (-((-(((/* implicit */int) (signed char)-81)))))));
                    var_19 = ((/* implicit */long long int) (short)(-32767 - 1));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */long long int) var_3);
    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)59)) ? ((-(363633625U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        arr_9 [i_3] = ((/* implicit */unsigned int) (short)-32766);
        arr_10 [i_3] = ((/* implicit */short) var_6);
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_4]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_18 [i_5] [i_6] [13U] [i_5] = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_4] [i_5] [i_6] [i_8])), (arr_0 [i_5])));
                                var_24 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (signed char)-67);
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) max((min((arr_31 [i_9] [i_10] [i_11]), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)32767)))))))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        var_28 = ((/* implicit */short) (unsigned short)65523);
                        var_29 = ((/* implicit */unsigned short) arr_32 [i_4] [i_9] [i_10]);
                    }
                    var_30 = ((/* implicit */unsigned char) var_12);
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_9] = ((/* implicit */unsigned int) ((int) max(((short)32763), ((short)-1))));
                        var_31 = ((/* implicit */unsigned int) (short)14628);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_13 [i_9] [i_13])))) : (((/* implicit */int) (unsigned char)126))));
                        var_33 = (+((+(var_11))));
                        var_34 = 351792763753136201LL;
                    }
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned char) min(((+(arr_41 [i_15] [i_16] [i_18]))), (arr_41 [i_15] [i_15] [i_17])));
                            var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? ((-(arr_2 [i_15] [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14356)))));
                        }
                        var_37 = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                {
                    {
                        var_38 = (short)8849;
                        var_39 = ((/* implicit */short) (unsigned short)31687);
                        arr_64 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */int) (unsigned short)0);
                        var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)13)), (arr_60 [3U] [i_19] [i_20]))))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned int) (short)-12812);
        var_43 = ((/* implicit */short) 351792763753136189LL);
    }
}
