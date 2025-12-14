/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38305
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 + 3] [i_0 - 1])))), (((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2])) >> (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2])) - (29877)))))));
        arr_5 [i_0 - 1] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (8288669777722578261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_1 - 1] [i_2] [i_3])) % (((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_2] [i_1 - 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_3])) || (((/* implicit */_Bool) 628865129809934373ULL)))))) * (arr_6 [i_2 - 1] [i_1 + 1])))));
                        arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (var_3))) ^ (min((var_14), (((/* implicit */unsigned long long int) (unsigned short)10)))))) > (var_10)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) var_11))));
    }
    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        arr_17 [i_4] &= ((/* implicit */unsigned long long int) var_11);
        var_20 = ((/* implicit */unsigned long long int) arr_16 [i_4]);
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_15 [i_5 + 1]);
            arr_21 [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_4 - 1] [i_5 - 2]))));
        }
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_24 [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_16 [i_4 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_6])))) ? (((/* implicit */int) arr_20 [i_4 - 1] [i_4])) : (((/* implicit */int) arr_16 [i_4])))))));
            arr_25 [i_4] [i_4] = max((max((((((/* implicit */_Bool) 15704674182179036969ULL)) ? (890325022775777618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (max((((/* implicit */unsigned long long int) arr_18 [i_4] [i_4])), (4219133817116757672ULL))))), (((/* implicit */unsigned long long int) arr_19 [i_6])));
            arr_26 [i_4] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_4 - 1])) + (((/* implicit */int) arr_23 [i_4 + 1])))) + (((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_18 [i_4 - 1] [i_4]))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        arr_35 [i_4 - 1] [i_7] [i_9] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1])) <= ((+(((/* implicit */int) arr_18 [i_8] [i_7]))))));
                        var_22 &= ((/* implicit */unsigned short) ((min((min((arr_29 [i_9] [i_4] [i_4]), (8288669777722578287ULL))), (arr_27 [i_4 - 1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_36 [i_4] [i_7] [i_8] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 1])) != (((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 1])))) ? (((((/* implicit */_Bool) (~(18446744073709551602ULL)))) ? (((/* implicit */int) arr_16 [i_9])) : (((/* implicit */int) arr_16 [i_8])))) : (((/* implicit */int) ((((/* implicit */int) arr_33 [i_4] [i_4] [i_8] [i_9] [i_7])) > (((/* implicit */int) arr_19 [i_7])))))));
                        var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (var_15))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4])) && (((/* implicit */_Bool) ((unsigned long long int) var_6)))))))));
                    }
                } 
            } 
            var_24 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_29 [i_4 - 1] [i_4 - 1] [i_4 + 1])) ? (arr_22 [i_4] [i_4 + 1]) : (8288669777722578245ULL))), (((/* implicit */unsigned long long int) ((arr_29 [i_4] [i_4] [i_4 - 1]) <= (arr_22 [i_4] [i_4 + 1]))))));
            arr_37 [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) arr_34 [i_4] [i_4] [i_7] [i_7]);
        }
        var_25 = ((/* implicit */unsigned short) 268435455ULL);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_1)), (var_12))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)8191))))))) : (((/* implicit */int) var_17))));
}
