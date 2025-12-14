/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2296
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (781843883224646178ULL)))));
        var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) -143112845)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (-143112845)))))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_15 = (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) && (((/* implicit */_Bool) (unsigned char)243))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        arr_17 [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_10 [i_3]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (signed char)-8);
        var_17 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-26216)) ? (17664900190484905439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_20 [i_5] |= ((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)-64)) + (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])))), ((~(((/* implicit */int) (unsigned char)0))))));
        var_18 = ((/* implicit */_Bool) ((long long int) (!((_Bool)1))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
        {
            arr_25 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) == (arr_22 [i_6 + 1] [i_5])))));
            var_19 *= ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) 781843883224646178ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)38187))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_2 [i_5]))));
        }
        for (unsigned char i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
        {
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)13997)) ? (max((((/* implicit */long long int) (unsigned short)63571)), (9223372036854775790LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14237))))) : (9223372036854775782LL)));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24035))))) ? ((+(((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) : (arr_13 [i_5] [i_7] [i_5] [i_5]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) <= (((/* implicit */int) (unsigned char)88))))), (143112822)))))))));
            arr_29 [i_7 - 3] [i_5] = ((/* implicit */unsigned char) (signed char)0);
            arr_30 [i_5] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775783LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775782LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) : (((((/* implicit */_Bool) -9223372036854775786LL)) ? (9223372036854775782LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1925))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5] [i_7 - 3])) / ((~(143112844))))))));
        }
        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 7; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)49115)) : ((-(((/* implicit */int) (unsigned short)60157))))))) ? (min((min((((/* implicit */long long int) (unsigned short)23)), (4700623741145811144LL))), (((/* implicit */long long int) (unsigned short)26908)))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))));
                        var_22 -= ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) : (9223372036854775807LL))) ^ (((/* implicit */long long int) (~(67108863))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)32754)), (arr_22 [i_9] [i_9])))) ? (-9223372036854775794LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1168027371U)) ? (-275346513) : (((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)65520))) : (-9223372036854775804LL))))));
                    }
                } 
            } 
            arr_39 [i_5] [i_8 + 1] = min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0))))) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) arr_38 [i_5] [(short)6]))))) ? (1073217536) : (((/* implicit */int) ((((/* implicit */long long int) 3045906829U)) < (9223372036854775807LL))))))));
        }
        var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_5] [i_5]))));
        var_25 = ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) 1038148083)) : (12158601906018429575ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3126939929U)) ? (310136626519125689LL) : (((/* implicit */long long int) -1214517524))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_13);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)59964)) : (((/* implicit */int) (_Bool)1))));
}
