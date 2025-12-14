/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32840
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) != (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) 846367153159195371ULL)))))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : ((+(var_6)))))));
        arr_3 [i_0] |= ((/* implicit */_Bool) (~((-(929043517799811827LL)))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0]) : (((/* implicit */long long int) 892801366U))))) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 2])));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2] [i_2 - 4] [i_2 + 2])) ? (arr_7 [i_2] [i_2 - 3] [i_2 + 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2 - 4] [i_2 + 1] [i_1])))));
                arr_10 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_6 [i_2] [i_1]));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_0))));
                var_22 += ((/* implicit */unsigned short) (~(-4531219787695553202LL)));
            }
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_15 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((short) arr_5 [i_0] [i_0 - 1]));
                    arr_16 [i_1] [i_3] [i_1] [i_1] = var_6;
                    var_23 -= (!(((/* implicit */_Bool) var_4)));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */short) arr_6 [i_1] [i_1]);
                    var_25 -= ((/* implicit */short) arr_6 [i_3] [i_3]);
                    arr_19 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1113119134U)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned char)0))));
                    var_26 = ((/* implicit */unsigned int) arr_1 [i_0]);
                }
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [(short)2] [i_3] [i_0] [i_0])))))));
                var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)1525)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_0))));
            }
            var_29 = ((/* implicit */short) ((long long int) arr_13 [i_1] [i_0 + 1] [i_1] [i_0 - 1]));
            arr_20 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) 1113119134U));
        }
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_30 = ((/* implicit */short) ((long long int) arr_4 [i_0 + 2]));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1] [6ULL]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1])))))));
            arr_23 [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_6]))));
        }
        for (short i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)59)))) * (((/* implicit */int) var_9))));
            var_32 = ((/* implicit */long long int) ((arr_25 [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_7] [i_7])) <= (((/* implicit */int) var_7))));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
            {
                var_34 &= ((/* implicit */long long int) (+((-(((/* implicit */int) var_10))))));
                arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_7] [6LL])) || (((/* implicit */_Bool) arr_6 [i_7] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197))))) : ((+(((/* implicit */int) var_14))))));
                var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7]))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned short) arr_25 [i_0]);
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) > (1961248209U)));
                var_38 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0 + 2] [i_0 + 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_6 [i_0] [i_7]))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    arr_38 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) == (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    var_39 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0 + 2]))));
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)18)) << (((arr_35 [(short)4] [i_7] [(short)4] [i_10]) - (7111498578959784629ULL)))));
                    var_41 += ((/* implicit */unsigned char) (-(((unsigned long long int) var_8))));
                    var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96)))))));
                }
                var_43 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_7] [i_9]);
            }
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
            {
                arr_42 [i_0 + 2] [7ULL] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7903355513311337796LL)) ? (8697607677624639836LL) : (134217727LL)));
                arr_43 [i_0] [i_11] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) 3181848161U)))));
            }
            var_44 = ((/* implicit */short) var_13);
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (arr_46 [i_12] [i_12]) : ((+(arr_45 [i_12])))))) || (((/* implicit */_Bool) (unsigned char)97))));
        arr_47 [i_12] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_46 [i_12] [i_12])) ? (arr_46 [i_12] [i_12]) : (arr_46 [i_12] [i_12])))));
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
    {
        var_46 ^= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) (unsigned char)110))))));
        var_47 = ((/* implicit */long long int) var_14);
    }
    for (long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (((((-6095052480090455456LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) ? (min((((/* implicit */unsigned long long int) arr_48 [i_14] [i_14])), (9316131171496477917ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_14])))))));
        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) 13134280528524685095ULL))));
    }
}
