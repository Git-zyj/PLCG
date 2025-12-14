/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192830
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
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 710532529122029523LL)) ? (((/* implicit */int) (unsigned short)30332)) : (((/* implicit */int) (unsigned short)42271))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_8 [(unsigned char)10] [i_1] [(unsigned char)1] [(unsigned char)0] = ((/* implicit */unsigned long long int) (+(arr_6 [i_3] [i_3] [i_2 + 2] [i_0] [i_0 - 2])));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_15 -= ((/* implicit */long long int) ((arr_3 [i_0] [i_0 - 1]) ? (var_3) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2]))));
                        arr_13 [6U] [i_0] [14ULL] [11U] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) - (710532529122029513LL)));
                    }
                    for (signed char i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9544233131232699004ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5])) : (((/* implicit */int) var_5)))))));
                        arr_16 [10LL] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1] [i_2])) ? (8191) : (((/* implicit */int) var_13))));
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((long long int) (unsigned short)23283)))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)129))));
                        arr_17 [i_0] [i_1] [5LL] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)230)) & (((/* implicit */int) (unsigned char)127))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_20 [7U] [(unsigned short)4] [7ULL] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    var_19 = ((/* implicit */int) max((var_19), ((~(arr_15 [i_1] [i_2 + 2])))));
                    arr_21 [i_6] [(unsigned short)1] [(unsigned short)10] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_0 [i_2] [i_2]))))) : (((/* implicit */int) var_9))));
                    var_20 = ((((/* implicit */_Bool) arr_2 [i_6] [5LL] [i_1])) ? (arr_6 [i_2 - 1] [i_1] [5] [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)2))));
                        arr_24 [i_0] [i_1] [i_0] [i_6] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [6LL] [i_2] [i_2 + 2]))));
                        var_22 = ((/* implicit */unsigned int) (short)18829);
                        var_23 = ((/* implicit */signed char) var_0);
                        arr_25 [(unsigned char)7] [(short)13] [i_2] [(short)11] [i_2] [i_2] [i_2] = var_1;
                    }
                }
                arr_26 [i_0] = (~((+(1200245919))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)62597))));
            }
        }
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            arr_30 [9LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) <= (((((/* implicit */unsigned long long int) arr_9 [i_0] [i_8] [i_8] [i_0] [i_0])) & (var_12)))));
            var_25 = ((/* implicit */signed char) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_0 + 2])))));
            var_26 ^= ((/* implicit */signed char) (!(arr_4 [i_8] [i_8] [i_8] [i_0])));
            var_27 = ((/* implicit */unsigned short) (short)(-32767 - 1));
            var_28 = (unsigned char)124;
        }
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            var_29 = ((/* implicit */short) arr_5 [i_0]);
            arr_34 [i_0] = ((/* implicit */unsigned char) ((1012319702U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23283)) | (((/* implicit */int) (short)-32759)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                arr_38 [i_0] = ((/* implicit */long long int) ((4294967288U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_0])) != (((/* implicit */int) arr_18 [i_9] [i_0] [i_0] [10LL]))))))));
                var_30 = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)57))))));
            }
            arr_39 [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_9]))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            arr_40 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_23 [i_0 + 1]))));
        }
    }
    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        arr_44 [i_11] [i_11] = ((/* implicit */unsigned long long int) min(((unsigned char)126), (((/* implicit */unsigned char) (signed char)49))));
        arr_45 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (3784814687U))))));
        var_31 = ((/* implicit */unsigned int) -194955940);
    }
    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
    {
        var_32 = 4673878529216726423LL;
        var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12] [21LL])) ? (((/* implicit */int) arr_47 [i_12])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_13))))))) ? ((~(((4294967284U) >> (((/* implicit */int) arr_42 [i_12])))))) : (((/* implicit */unsigned int) max((var_3), (((/* implicit */int) arr_47 [i_12])))))));
        arr_48 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((5654802358877765766LL) != (4673878529216726407LL))))) != (arr_46 [10LL] [i_12])))) <= (((/* implicit */int) var_13))));
        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)237))));
    }
    for (long long int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_13]))))) ? (((((/* implicit */_Bool) 261499053U)) ? (6675368186704337307LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 657654995952692942ULL)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (unsigned short)23290)))))))));
        arr_52 [i_13] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (unsigned char)148)), (((((/* implicit */int) (unsigned short)5089)) + (((/* implicit */int) (unsigned short)11022))))))));
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_49 [i_13]))))) ? (((((/* implicit */_Bool) (~(arr_51 [i_13])))) ? (var_12) : (((/* implicit */unsigned long long int) ((int) arr_42 [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [2])))));
        arr_53 [i_13] = ((/* implicit */int) var_12);
        arr_54 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 6135951477045049201ULL))) ? (((arr_47 [i_13]) ? (-4673878529216726424LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13])))));
    }
    var_37 = ((unsigned long long int) ((3662925590U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-31645)))))))));
    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((var_12) >> (((min((var_2), (((((/* implicit */_Bool) -5004441099960244499LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))) + (1928361308))))))));
    var_39 -= ((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)6)), (((((/* implicit */int) (unsigned char)220)) + (((/* implicit */int) (unsigned short)60446)))))), (var_3)));
}
