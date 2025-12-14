/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42445
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))) > (((((/* implicit */int) (short)7680)) >> (((var_4) - (1910079185U)))))))) : (((int) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(((((16887558175379203653ULL) > (((/* implicit */unsigned long long int) 5867483723512314248LL)))) ? (((((/* implicit */_Bool) 1404728232)) ? (((/* implicit */unsigned long long int) -1990118167)) : (16887558175379203659ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [10] [i_1 - 1] [i_0] [i_1 - 1] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 1])) & (((/* implicit */int) arr_3 [i_0 - 2] [i_2 - 3]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (arr_12 [i_1] [(unsigned short)5]) : (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_3] [i_4]) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_10)))))))));
                                var_15 -= ((((/* implicit */_Bool) (~(((long long int) arr_6 [(short)2]))))) ? (((/* implicit */int) var_9)) : (((((((/* implicit */int) arr_6 [(unsigned char)8])) ^ (((/* implicit */int) var_6)))) & (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)130)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) var_3))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_1 + 1] [i_1 + 1]))));
                                arr_16 [i_0] [i_0] [i_0] [5ULL] [i_0 + 1] [i_0] [i_0] = ((16887558175379203673ULL) >> (((-1990118167) + (1990118198))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */unsigned long long int) (!(arr_11 [4U] [4U] [4U])));
                    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_2 - 3] [0ULL] [0ULL])) + (2147483647))) >> (((16887558175379203673ULL) - (16887558175379203653ULL)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0]))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_6 [i_0]))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1990118167)) * (((((/* implicit */_Bool) 998812160U)) ? (16887558175379203673ULL) : (1559185898330347962ULL)))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [8LL]), (arr_10 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) 1990118162)) : (min((((/* implicit */unsigned int) var_10)), ((+(156634319U)))))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)31217)) * (((/* implicit */int) arr_7 [i_7 - 1])))))));
                                var_21 = ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_7 + 2]);
                                var_22 = ((/* implicit */long long int) 1990118166);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) arr_18 [i_0] [i_1 - 1] [i_0] [i_0]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            {
                var_24 += ((/* implicit */signed char) arr_33 [i_9 - 1] [i_10] [i_10]);
                var_25 |= 16887558175379203665ULL;
                var_26 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)235)))) > (((/* implicit */int) ((unsigned short) (unsigned short)7)))));
                var_27 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_32 [16])))))), (((arr_32 [(short)4]) ^ (arr_32 [16])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_28 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_11])) >> (((var_7) + (846892885663387747LL)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (arr_37 [i_11]))))))) : (((/* implicit */int) ((((16887558175379203673ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (3445073465U)))))))));
        var_29 = (~(-5371591789614829397LL));
        var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)1778)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11])))));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2065854988U)) ? (((((_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) : (11118051454202940962ULL))) : (((/* implicit */unsigned long long int) min((-5867483723512314249LL), (((/* implicit */long long int) var_6))))))) : (((/* implicit */unsigned long long int) (~(2832141823337642506LL))))));
}
