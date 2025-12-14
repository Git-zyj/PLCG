/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197185
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) (short)3270);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)22535))));
        arr_2 [i_0] = (+(arr_1 [2U] [i_0]));
        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) 8388608)) + (arr_1 [i_0 + 1] [i_0 + 1])))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_23 ^= min((arr_4 [i_1]), (((/* implicit */long long int) max((max((((/* implicit */int) arr_3 [i_1] [i_1])), (var_0))), (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))));
        arr_5 [i_1] [i_1 - 1] |= ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) + (2147483647))) << (((((-9223372036854775802LL) - (-9223372036854775804LL))) - (2LL))))) - (2147471469))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(short)12]))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [(unsigned short)2] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [10LL] [i_2 + 1] [i_2] [i_4]), (((/* implicit */short) var_11)))))) : (((((/* implicit */_Bool) 156825685U)) ? (((/* implicit */unsigned int) -383633149)) : (788070865U))))) % (min((4138141610U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)22535)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_25 += ((/* implicit */int) min((((/* implicit */short) arr_6 [i_5] [i_5] [i_5])), (arr_3 [i_5] [5U])));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) var_2);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_16))));
            arr_23 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2] [4LL] [i_5 - 1]))))) ? (((/* implicit */int) ((((156825685U) >> (((/* implicit */int) (_Bool)1)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_18)) == (((/* implicit */int) var_15))))))))) : ((~(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) (-(1664811500U)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1))))));
                        var_29 = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 3] [i_5 - 4] [(unsigned short)2])) >> (((((/* implicit */int) arr_21 [i_5 - 4] [i_5 - 3] [i_5])) - (138)))))) || ((!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 3] [i_5 - 4] [(unsigned short)2])) >> (((((((/* implicit */int) arr_21 [i_5 - 4] [i_5 - 3] [i_5])) - (138))) + (66)))))) || ((!(((/* implicit */_Bool) var_9)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 8; i_9 += 1) 
        {
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_30 ^= ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_14)) + (arr_31 [(short)8] [i_9] [i_11 - 1])))))));
                                arr_42 [i_5] [i_5] [i_9 + 2] [i_12] [i_11] [i_12] |= ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_43 [i_5] [i_5] [i_10] = ((/* implicit */unsigned long long int) arr_34 [i_10]);
                }
            } 
        } 
        arr_44 [i_5] = ((/* implicit */int) ((unsigned short) ((((arr_24 [i_5] [i_5] [i_5 - 3] [i_5 - 3]) + (2147483647))) >> ((((~(((/* implicit */int) var_7)))) + (30716))))));
    }
    for (unsigned char i_13 = 4; i_13 < 11; i_13 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (unsigned int i_15 = 2; i_15 < 11; i_15 += 2) 
            {
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((((_Bool)1) ? (3016142413U) : (4138141611U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_15 - 2])) <= (((/* implicit */int) arr_9 [i_15 - 2])))))))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((max(((-(arr_7 [i_13] [i_13] [i_15]))), (-576337803568622755LL))), (((/* implicit */long long int) (short)3418)))))));
                }
            } 
        } 
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_4))));
        var_34 = min((((((/* implicit */int) max((arr_51 [i_13] [(unsigned short)2]), (arr_33 [10U] [10U])))) - (((((arr_24 [(signed char)0] [i_13] [i_13] [i_13]) + (2147483647))) << (((((/* implicit */int) (unsigned char)250)) - (250))))))), (arr_47 [i_13 + 1] [i_13 - 3] [2U]));
    }
    var_35 = ((/* implicit */short) var_8);
}
