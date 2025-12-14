/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239993
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
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(unsigned short)2] [(_Bool)1] [8] &= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_0] [i_1])))) >> ((((~(((/* implicit */int) var_6)))) + (2514)))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((arr_4 [i_0] [i_1 - 3] [i_0] [i_1 - 2]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-90)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1 - 1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (arr_1 [i_2 + 1] [i_0])));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -932671217654189881LL)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (signed char)-63))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)110))));
                    }
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)148))));
        /* LoopSeq 4 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
        {
            arr_18 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 932671217654189880LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50260))))) >> (((arr_4 [i_0] [i_4 - 1] [i_0] [i_4]) - (1793411003U)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 932671217654189880LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50260))))) >> (((((arr_4 [i_0] [i_4 - 1] [i_0] [i_4]) - (1793411003U))) - (3288432270U))))));
            var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (2991739904188084329ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
            arr_19 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4 - 1] [11ULL])) | (((/* implicit */int) arr_5 [i_4 + 1] [(signed char)11])))))));
        }
        for (signed char i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */long long int) ((arr_21 [(_Bool)1] [i_5 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)170))))));
            arr_22 [i_0] = ((/* implicit */unsigned int) (-(-932671217654189878LL)));
            arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2155585005U)) ? (var_8) : (var_8)))) ? (((/* implicit */int) (unsigned short)50260)) : (((/* implicit */int) (unsigned char)197))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)170))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((9223372036854775807LL) <= (((((/* implicit */_Bool) (unsigned short)15263)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50275))) : (18014398505287680LL)))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))) : (var_8))))));
                    arr_29 [(signed char)0] [(signed char)0] [i_5] [i_6 - 2] [i_0] = ((/* implicit */long long int) 5245495776480484694ULL);
                }
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_33 [i_0] [i_0] [6LL] [i_0] [i_0] [i_8] = (!(((/* implicit */_Bool) arr_1 [i_6 - 2] [i_0])));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(arr_26 [i_0] [i_5] [i_5] [i_8] [i_8]))))));
                    arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -932671217654189890LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= (var_2)));
                }
            }
        }
        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
            arr_37 [i_0] [i_9 + 3] = ((/* implicit */unsigned char) var_6);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((int) -932671217654189873LL))));
        }
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (unsigned short)34537)))))));
    }
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
    {
        arr_43 [i_11] = ((/* implicit */long long int) (unsigned char)137);
        arr_44 [i_11] [i_11] = (!(((((/* implicit */int) (unsigned char)118)) == (((/* implicit */int) (signed char)75)))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34537))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 3546860538761411855ULL))))))));
}
