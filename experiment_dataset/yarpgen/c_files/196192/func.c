/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196192
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [18] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)125));
        arr_3 [10U] [(unsigned char)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_6 [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) - (arr_4 [i_1 + 1] [i_1 + 1])));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) (~(arr_0 [(_Bool)1])));
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5981033861575413836ULL)) ? (4193280) : (((/* implicit */int) (unsigned char)206))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) ^ (((/* implicit */int) arr_9 [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = ((max((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))) ? (((arr_15 [i_4 - 1] [i_3]) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))))) : (((/* implicit */long long int) ((4193277) + (((/* implicit */int) arr_15 [i_4 + 2] [i_3]))))));
            arr_20 [i_4] = ((/* implicit */_Bool) (+(-4193284)));
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_9))))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_31 [i_3] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_26 [i_3] [i_4] [i_3])))))) : (((var_3) ? (((/* implicit */int) arr_13 [i_5] [i_4 + 1])) : (((((/* implicit */_Bool) arr_25 [i_3])) ? (((/* implicit */int) arr_18 [(_Bool)1] [i_4])) : (((/* implicit */int) (_Bool)1))))))));
                            arr_32 [i_4] [i_6 + 2] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) -4193288));
                            arr_33 [i_4] = ((/* implicit */short) (+(-4193272)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
        {
            arr_37 [i_8 + 1] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (9326491207563517571ULL)));
            arr_38 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)36)) <= (((/* implicit */int) (unsigned short)11219))));
            arr_39 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3]);
            arr_40 [i_3] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) -9223372036854775807LL)) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5134))) - (9326491207563517595ULL))))), (min((16075130884160201319ULL), (((/* implicit */unsigned long long int) 3425008531U))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 1) /* same iter space */
        {
            arr_44 [(unsigned short)15] [i_9 + 1] = ((/* implicit */unsigned char) ((long long int) 9120252866146034027ULL));
            arr_45 [i_9] [i_9] = ((((/* implicit */_Bool) arr_26 [i_9 + 2] [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_41 [i_9 + 3] [i_9 + 3] [i_9 + 1])) : (((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 2] [i_9 - 1])));
            arr_46 [i_9 + 2] &= ((/* implicit */unsigned char) (((-(971691192U))) < (((/* implicit */unsigned int) 4193285))));
            arr_47 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (13522986057946095577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1])))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 1) /* same iter space */
        {
            arr_50 [i_3] [i_10] = ((/* implicit */long long int) ((unsigned long long int) var_4));
            arr_51 [(_Bool)0] |= ((/* implicit */unsigned short) ((arr_23 [i_3] [(_Bool)1] [i_3]) ? (((/* implicit */int) arr_23 [i_3] [(unsigned char)24] [i_10 - 1])) : (((/* implicit */int) var_7))));
        }
        arr_52 [15LL] = ((/* implicit */unsigned short) var_14);
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2807111277U)) ? (((/* implicit */long long int) (-(var_0)))) : (var_5)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) : (((((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)7787)))) + (2147483647))) >> (((9223372036854775807LL) - (9223372036854775794LL)))))));
}
