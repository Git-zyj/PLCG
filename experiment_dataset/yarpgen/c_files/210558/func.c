/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210558
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) 7992387635942913581ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_1] [7LL] [i_3] [12LL] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_4 - 2] [(unsigned char)16] [i_4 + 1] [i_4 + 3] [i_4 + 3]))))), (var_8)));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? ((+(10454356437766638041ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_14)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))) : (-7961301414052479350LL))) : (((/* implicit */long long int) (+(var_8)))))))));
                            }
                        } 
                    } 
                    var_20 ^= ((var_10) << (((((((/* implicit */_Bool) -7961301414052479377LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) - (78U))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) (unsigned char)14);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_17 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((var_12), (((/* implicit */long long int) 3639850029U))))))) : (var_4)));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_32 [(unsigned char)9] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) 1957957681U);
                            var_23 += ((/* implicit */unsigned long long int) arr_9 [(unsigned char)5] [i_6] [i_7] [i_6]);
                        }
                    } 
                } 
                arr_33 [i_6] = ((var_12) | (((((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5])))))) : (var_13))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_41 [i_6] [i_6] [i_6] [i_10] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(_Bool)1] [i_6] [7LL] [3U] [i_6]))) : (7961301414052479333LL)))) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_8 [i_11] [i_10] [i_7])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)97))))) ? (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (7961301414052479333LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_2)) % (((/* implicit */int) arr_16 [i_5])))) <= ((+(((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6])))))))));
                            var_24 -= ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 597209582U)))) : (((((long long int) var_17)) << (((((3965554654U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))))) - (3965583088U))))));
                            var_25 = ((/* implicit */long long int) 7992387635942913581ULL);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(7961301414052479333LL))))));
                        }
                    } 
                } 
                var_27 = var_12;
            }
            for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (short)23547))));
                var_29 = ((/* implicit */unsigned int) arr_19 [i_5]);
                var_30 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)14)), (((unsigned int) var_9))));
            }
            for (short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_31 *= ((/* implicit */unsigned char) min((min((var_15), (((/* implicit */unsigned int) arr_11 [i_6] [i_6] [(_Bool)1] [i_5])))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_10 [i_5] [i_5] [i_5])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [(unsigned char)4] [0LL] [0LL]))) < (var_8)))))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_15] [i_6] [i_13] [i_6])))))) * ((((!(((/* implicit */_Bool) arr_45 [i_15] [12U] [i_13])))) ? (arr_5 [(short)5] [i_13] [13U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(_Bool)1]))))))))));
                            var_33 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_48 [i_5] [(_Bool)1] [i_5] [6U])) != (((/* implicit */int) (unsigned char)128)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned char)61)) - (55)))))) : ((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -7961301414052479334LL)))) : (min((7992387635942913575ULL), (((/* implicit */unsigned long long int) arr_7 [i_13] [19U]))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(arr_0 [i_5]))))));
                            arr_53 [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_6] [i_6] [i_13])) ? (((/* implicit */long long int) var_4)) : (var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_30 [i_5] [i_5] [i_6] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5] [16U] [i_6])))) : (((/* implicit */int) (unsigned char)120))))));
                            arr_54 [i_6] [i_6] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */short) 10454356437766638014ULL);
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((arr_30 [i_5] [i_5] [i_5] [i_5] [i_13] [i_13] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (max((-7961301414052479334LL), (var_16))))) | (((/* implicit */long long int) (+(((unsigned int) arr_13 [8U] [i_6] [(short)18] [12U] [i_5]))))))))));
                var_36 = ((/* implicit */unsigned char) (+((~(min((var_12), (((/* implicit */long long int) (unsigned char)167))))))));
            }
        }
        var_37 = ((/* implicit */unsigned char) (+(max((((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) arr_51 [(_Bool)1]))))));
    }
    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        var_38 = ((/* implicit */_Bool) ((min((arr_0 [i_16]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
        arr_57 [15ULL] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 7992387635942913594ULL)) && (((/* implicit */_Bool) arr_9 [i_16] [19U] [i_16] [(_Bool)1])))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                {
                    arr_62 [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_17])), ((short)6)))))) ? (((((/* implicit */_Bool) ((arr_56 [i_16]) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_16] [(short)18] [i_18])))))) ? (((/* implicit */unsigned long long int) ((arr_61 [i_16] [i_17] [i_17] [i_17]) ? (((/* implicit */int) arr_7 [i_16] [i_16])) : (((/* implicit */int) arr_11 [i_16] [i_17] [i_17] [i_17]))))) : (((7992387635942913581ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17))))));
                    arr_63 [i_16] [i_17] [i_17] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16])) ? (arr_6 [i_16] [i_18] [i_17]) : (arr_6 [i_16] [i_17] [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_1))))) : (((((/* implicit */_Bool) var_12)) ? (arr_60 [i_18] [i_17] [i_18] [(unsigned short)18]) : (var_6)))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned char) var_16);
    var_40 = ((((/* implicit */_Bool) (~(((unsigned int) 7961301414052479377LL))))) ? (var_14) : (var_10));
}
