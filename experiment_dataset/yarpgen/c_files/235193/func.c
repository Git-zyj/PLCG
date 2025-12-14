/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235193
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */short) max((((((/* implicit */int) max(((short)10207), (((/* implicit */short) var_1))))) % (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) 1226935073U)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (short)10207))))));
                                arr_13 [i_3] [i_3] [(short)1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-10208))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)84), ((unsigned char)108)))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_20 -= ((/* implicit */short) arr_16 [i_5]);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_15))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) var_8);
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_22 [i_6] = ((/* implicit */unsigned short) var_15);
                arr_23 [i_5] [i_6] [i_7] |= ((/* implicit */long long int) arr_21 [i_5] [i_6] [i_7] [10LL]);
                arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (2878670534474597830LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))) >= ((+(2826978400368347061ULL))))) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_5)))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) arr_21 [(short)4] [i_6] [(unsigned char)5] [(unsigned char)5])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-30457)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))) : (((int) ((short) arr_21 [(short)9] [i_6] [i_5] [i_5])))));
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                arr_27 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)236))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_34 [i_6] [i_9] [i_8] [i_6] [i_6] = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_6] [i_5] [i_9]))) : (min((9038754629225759579LL), (((/* implicit */long long int) (_Bool)1))))))));
                            var_24 += ((/* implicit */int) var_16);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_5] [i_5] [i_6] [i_8] [i_8])) << (((((/* implicit */int) (short)10207)) - (10186)))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_5])) & (((/* implicit */int) (unsigned char)211)))))));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                arr_38 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_10);
                arr_39 [i_6] [i_6] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)152))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) (short)15093)))))) : (arr_14 [i_5] [i_5]))) != (((/* implicit */unsigned int) -613241295))));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) - (arr_17 [i_5] [(unsigned short)18] [i_6])));
                    arr_43 [i_5] [i_6] [i_6] [i_11] [i_11] [i_12] = ((/* implicit */short) ((min((((/* implicit */unsigned int) -1520001512)), (1004635433U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_6])) <= (((/* implicit */int) arr_35 [i_6] [i_6] [i_11] [3LL]))))))));
                    var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_5])) % (var_9)))) ? (max((245760U), (((/* implicit */unsigned int) (unsigned short)65524)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_11] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_2))) >= (((/* implicit */int) ((unsigned char) arr_42 [i_5]))))))));
                    arr_44 [i_12] [i_12] [i_12] [i_6] = 1761797406;
                    var_28 = ((/* implicit */int) arr_20 [11U] [i_6] [i_6] [i_12]);
                }
                for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    arr_47 [i_13] [i_5] [i_6] [i_6] [i_5] [i_5] = ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)31)))) & (((((/* implicit */int) arr_46 [i_13] [i_13] [i_6] [i_6])) & (228945583))));
                    var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5]))))), (((((/* implicit */unsigned long long int) 344949910)) % (max((((/* implicit */unsigned long long int) (short)32767)), (15992522261638871537ULL)))))));
                }
                for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    arr_50 [i_5] [i_11] [i_11] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)90)), (((arr_20 [i_5] [i_6] [i_11] [i_14]) + (((/* implicit */long long int) ((/* implicit */int) (short)32704)))))));
                    arr_51 [1U] [1U] [i_6] [i_11] [i_6] = ((/* implicit */int) var_2);
                }
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_58 [i_6] [(short)17] [i_11] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                            var_30 = ((/* implicit */signed char) arr_33 [i_5] [i_5] [i_5] [i_6] [i_5] [18U]);
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1520001496)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (11889650593522635849ULL)));
                        }
                    } 
                } 
            }
        }
        arr_59 [i_5] [i_5] = ((/* implicit */unsigned char) arr_57 [i_5]);
        arr_60 [i_5] = ((/* implicit */long long int) (+(-15)));
    }
    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
    {
        arr_63 [i_17] [(_Bool)1] &= ((/* implicit */unsigned char) ((int) (unsigned short)5));
        var_32 = ((/* implicit */unsigned char) max((arr_29 [i_17] [i_17] [i_17] [i_17]), (((/* implicit */short) ((_Bool) arr_37 [i_17])))));
        var_33 = ((/* implicit */unsigned int) min(((unsigned short)9521), (((/* implicit */unsigned short) (unsigned char)152))));
    }
}
