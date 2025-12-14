/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211595
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = var_6;
        arr_5 [(short)3] = ((short) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (arr_1 [3ULL] [i_0]))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (short)23496);
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (8752440119222255287ULL) : (max((arr_8 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) (short)-16165))))));
        arr_11 [i_1 - 2] = var_12;
        arr_12 [i_1 + 3] = ((min((((/* implicit */unsigned long long int) arr_9 [i_1 + 2])), (var_11))) ^ (7810040131993745054ULL));
        arr_13 [i_1] = ((min((((unsigned long long int) var_9)), (((((/* implicit */_Bool) var_3)) ? (arr_7 [10ULL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) >> (((((unsigned long long int) (~(((/* implicit */int) (unsigned char)77))))) - (18446744073709551476ULL))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_18 [i_2 - 2] = min(((+(max((var_6), (var_4))))), (max((arr_17 [i_2 - 2]), (((/* implicit */unsigned long long int) var_1)))));
        arr_19 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26068)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)-26882))));
        arr_20 [i_2] = max((min((arr_14 [i_2 - 2]), (18199601130789613987ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2] [i_2]))) || ((!(((/* implicit */_Bool) arr_14 [i_2 - 1]))))))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_23 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3])))))));
        arr_24 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_22 [i_3]))) / (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-21977)), (var_13)))) || (((/* implicit */_Bool) arr_2 [i_3] [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            arr_27 [(unsigned char)5] [i_3] [i_3] = ((/* implicit */short) (unsigned char)97);
            arr_28 [4ULL] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_4 - 2] [i_4 - 4])) ? (((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))))) : (((/* implicit */int) (short)-1))));
            arr_29 [i_3] [i_3] = (unsigned char)188;
            arr_30 [(unsigned char)13] [i_4 - 3] [i_4 - 4] = arr_3 [i_3] [i_4];
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_34 [(short)13] [(short)13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)177))));
            arr_35 [i_5] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (max((arr_21 [i_3]), (((/* implicit */unsigned long long int) arr_0 [8ULL] [i_5])))))), (((((/* implicit */_Bool) min((4201362203975618743ULL), (((/* implicit */unsigned long long int) var_1))))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_12))) : (arr_7 [i_3] [7ULL])))));
            arr_36 [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(arr_7 [i_3] [i_3])))))) ? (((/* implicit */int) ((unsigned char) var_3))) : ((((-(((/* implicit */int) (unsigned char)36)))) + (((/* implicit */int) (short)9694))))));
        }
        arr_37 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)131)))) > (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(var_11)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3])), (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_3 [i_3] [i_3])))))))));
        arr_38 [i_3] = max((var_6), (((/* implicit */unsigned long long int) (unsigned char)199)));
    }
    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    {
                        arr_49 [i_6] [8ULL] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_1 [i_6] [i_9]), (var_12)))))) ? (((8126685115331071342ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9 - 1] [i_7] [i_6 + 3] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_50 [i_9] [(unsigned char)11] [i_7] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((6321896927222186380ULL) << (((((/* implicit */int) (short)32767)) - (32733))))))) != ((((~(((/* implicit */int) var_9)))) + (((/* implicit */int) ((unsigned char) var_4)))))));
                    }
                } 
            } 
        } 
        arr_51 [i_6] = ((((/* implicit */_Bool) max((((var_11) * (5610491791438037041ULL))), (max((arr_21 [i_6]), (var_12)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_44 [i_6 - 3] [i_6 - 3] [i_6] [(short)6])), (arr_14 [17ULL])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)66)), (12528250293827426277ULL))) : (var_6))) : (((((/* implicit */_Bool) ((1853171723740422831ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_6] [i_6] [(unsigned char)13] [i_6 - 1] [(short)7])))))) ? (18446744073709551615ULL) : (min((var_11), (17185454743733541820ULL))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    arr_59 [(short)5] [i_10 + 2] [i_10 + 2] = ((/* implicit */short) min((max((arr_32 [i_11] [i_10 + 3] [(unsigned char)16]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_42 [i_11] [i_10] [i_6])), (arr_26 [9ULL] [i_10 + 3] [i_10 + 3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7927)) % (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
                    arr_60 [i_6] [i_10] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)131);
                    arr_61 [i_6] = ((/* implicit */short) arr_25 [i_6] [i_6]);
                    arr_62 [i_10] [i_6] &= var_6;
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 6; i_12 += 2) 
    {
        for (unsigned char i_13 = 2; i_13 < 8; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                {
                    arr_70 [i_12 + 3] [i_12] = var_9;
                    arr_71 [i_13] [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((arr_9 [i_12 + 2]), ((short)17940)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13)))) : (max((max((((/* implicit */unsigned long long int) arr_43 [12ULL])), (arr_8 [i_12] [i_12]))), (min((((/* implicit */unsigned long long int) var_2)), (arr_39 [i_13 + 2])))))));
                }
            } 
        } 
    } 
}
