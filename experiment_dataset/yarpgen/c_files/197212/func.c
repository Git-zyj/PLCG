/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197212
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(var_2))))));
    var_19 = (-(((/* implicit */int) var_14)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 = (unsigned short)61445;
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_16)));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1])) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775783LL))) + (44LL))) - (8LL))))) + (((((/* implicit */_Bool) 1619042310270294012ULL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) arr_0 [i_1])))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_22 &= ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [13LL] [13LL] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)64923)) ? (16827701763439257603ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_4])))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) var_7))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_13))))));
                        }
                    } 
                } 
            }
        }
        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_2 [i_5] [i_5] [i_0 + 1])))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned short)598)))))));
            var_26 = ((/* implicit */int) min((var_26), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) / (14680064)))));
            arr_19 [i_0] = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504))) : (9223372036854775807LL));
        }
        for (int i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            arr_24 [i_0] [i_0] = ((((/* implicit */int) arr_16 [i_0] [i_6] [i_0])) >> (((((/* implicit */int) (unsigned short)192)) - (187))));
            var_27 = ((/* implicit */long long int) var_17);
            /* LoopSeq 3 */
            for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                arr_29 [i_0] [0LL] [i_0] = arr_1 [11];
                var_28 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                arr_30 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0]))))) | (((((/* implicit */_Bool) arr_20 [1] [i_6] [(_Bool)1])) ? (arr_23 [i_0]) : (((/* implicit */int) arr_16 [i_0] [i_6] [(unsigned char)6]))))));
                var_29 = ((/* implicit */signed char) 772126406);
                var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_7 - 2] [i_6])))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
            {
                arr_34 [i_6] [i_6] = ((/* implicit */_Bool) (~(((arr_26 [i_0 + 3] [i_0] [i_0]) - (((/* implicit */unsigned long long int) arr_31 [1LL] [i_6] [i_6] [i_0]))))));
                arr_35 [i_8] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(signed char)2]))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                arr_39 [i_0 + 3] [i_0 + 3] [i_6] [i_0 + 3] = ((/* implicit */unsigned short) (~((+(-14680065)))));
                arr_40 [i_0] [i_6 - 1] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 14680048)) / (5093135990353856477LL)));
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_6] [i_9] [i_6 + 1]))));
                            arr_47 [i_9] |= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_10] [i_11]))))));
                            arr_48 [i_10] [i_6] [i_6] [i_9] [i_10] [i_10] [i_10] = (-(((((/* implicit */_Bool) -14680049)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))));
                            var_32 = ((/* implicit */short) var_15);
                            var_33 = ((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_9]);
                        }
                    } 
                } 
            }
            var_34 -= ((/* implicit */long long int) (+((-(((/* implicit */int) var_3))))));
        }
        for (short i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_12] [i_12 - 1] [i_12] [i_12 + 1]))));
            arr_51 [i_0] [i_12] [9] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)28)) ^ (((/* implicit */int) (unsigned short)0))))));
        }
        arr_52 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_43 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -14680065)) ? (14680048) : (((/* implicit */int) (unsigned short)2032)))))))));
        var_37 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) 939524096)) ? (arr_54 [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_13]))))), (((/* implicit */unsigned long long int) -14680064))))));
        /* LoopNest 2 */
        for (unsigned short i_14 = 4; i_14 < 16; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                {
                    arr_60 [i_13] [i_13] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19608))))) : (min((arr_54 [i_13] [i_13]), (((/* implicit */unsigned long long int) (-(var_5))))))));
                    arr_61 [1LL] [1LL] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 253952)), (max((arr_54 [i_14 + 2] [i_15]), (arr_54 [i_14] [(signed char)16]))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */long long int) min((var_38), (var_16)));
    }
    /* vectorizable */
    for (short i_16 = 1; i_16 < 23; i_16 += 4) 
    {
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)37887)))))));
        arr_66 [11LL] = arr_62 [i_16];
    }
}
