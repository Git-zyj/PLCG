/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233478
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-58))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((unsigned short) (signed char)-53)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_19 [(short)11] [3] [i_3] [(short)11] = ((/* implicit */signed char) ((short) max(((+(arr_2 [i_0]))), ((~(((/* implicit */int) var_4)))))));
                        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_3 - 3] [i_5 + 3] [i_3 - 3] [i_5]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_12 += ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-53)) : (-743398189))), (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)38)))))));
                            var_13 += ((/* implicit */unsigned char) (+(1786445763)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)52))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (var_2)));
                            var_15 = ((/* implicit */unsigned char) max(((-((-(((/* implicit */int) var_0)))))), (min((((/* implicit */int) min((var_9), ((short)-4781)))), ((+(((/* implicit */int) (unsigned short)28518))))))));
                            arr_25 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((short) arr_9 [(unsigned char)0] [i_3] [i_4])), (((/* implicit */short) max(((signed char)73), (var_5)))))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_5))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_7)))), (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_2)))));
    }
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (signed char i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                {
                    arr_34 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (signed char)50);
                    var_18 = (unsigned short)43682;
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_8] [(short)5] [i_8] [(short)5]))) ? (max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_24 [i_8] [10] [i_8])))))) : (((((/* implicit */int) ((unsigned short) (unsigned char)119))) << ((((+(((/* implicit */int) (short)1752)))) - (1736)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((~((-(((/* implicit */int) var_5)))))) >> (((((/* implicit */int) arr_30 [i_8])) - (8635))))))));
    }
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)43661), (((/* implicit */unsigned short) var_6))))) / (((/* implicit */int) max((((/* implicit */short) var_5)), (var_6))))))) ? (((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)30813)))) / (((/* implicit */int) (unsigned short)21843)))) : (((/* implicit */int) (unsigned short)21854)));
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            var_22 = ((/* implicit */short) 1551309396U);
            var_23 = ((/* implicit */short) max((((unsigned int) (unsigned char)253)), ((-(1551309396U)))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)38)), (arr_37 [i_12])))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) min((arr_33 [i_11]), (((/* implicit */unsigned char) var_5))))))))));
        }
        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 4) 
        {
            var_25 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) arr_38 [i_13] [i_13 - 1])), (var_9))))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 2; i_14 < 16; i_14 += 3) 
            {
                for (unsigned char i_15 = 2; i_15 < 16; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) 
                    {
                        {
                            var_26 = (short)5835;
                            var_27 = ((/* implicit */unsigned int) ((unsigned short) (signed char)-1));
                            arr_54 [i_14] [i_15] [i_14] [i_13] [i_14] = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_36 [i_13 + 1])) : (((/* implicit */int) arr_36 [i_13 + 1])))) ^ (((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_16 + 1])) ? (((/* implicit */int) var_3)) : (var_7))));
                        }
                    } 
                } 
            } 
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_7)))) ? ((-(((/* implicit */int) (unsigned short)65375)))) : ((-((+(1185521871)))))));
        }
        var_29 = (short)-6214;
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), (((/* implicit */short) var_3)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52565)) || (((/* implicit */_Bool) (unsigned short)43707))))) >= (((/* implicit */int) var_1))))) : ((+(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        for (short i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        {
                            arr_66 [i_19] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((unsigned short) arr_57 [i_18])))))));
                            var_31 &= ((/* implicit */signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_5))));
                            var_32 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)31))))));
                            arr_67 [i_17] [i_19] [i_17] = (unsigned short)9790;
                        }
                    } 
                } 
                arr_68 [i_17] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2743657899U)) ? (((/* implicit */int) (unsigned short)44893)) : (((/* implicit */int) (unsigned short)37193))))) ? ((+(((/* implicit */int) var_6)))) : (var_7)))));
            }
        } 
    } 
}
