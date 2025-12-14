/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206006
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 - 2] [i_1] [i_2])) % (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
                    arr_11 [i_2] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_0 [i_2 + 1])))), ((+(((/* implicit */int) arr_2 [i_1]))))));
                    var_18 -= ((/* implicit */unsigned int) max((5355539905272766509LL), (((/* implicit */long long int) (_Bool)0))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_16 [(unsigned char)3] = (_Bool)0;
        arr_17 [i_3] = ((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3]);
        var_19 = ((/* implicit */long long int) 15193719500228478730ULL);
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 3202546505U)) || (((/* implicit */_Bool) 3202546505U))))) % (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (var_4)));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_25 [6U] [i_4] [i_5] |= ((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4] [i_4]);
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40798)) << (((/* implicit */int) (_Bool)0))));
        }
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                arr_34 [(unsigned char)5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24))));
                var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((arr_31 [i_4] [i_6] [(unsigned char)9]) >> (((/* implicit */int) (_Bool)0)))));
                var_22 += ((/* implicit */unsigned long long int) arr_3 [i_4]);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned long long int) var_16);
                            var_24 = (((!((_Bool)1))) ? (-2085348313259365193LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
                            var_25 = ((/* implicit */unsigned long long int) (~(arr_14 [i_6 - 1])));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_26 = (_Bool)1;
                /* LoopNest 2 */
                for (unsigned char i_11 = 4; i_11 < 9; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_28 [i_6] [i_6 + 1]))));
                            var_28 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_7))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)21))))));
                            arr_47 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % ((~(((/* implicit */int) (unsigned short)24))))));
                            var_29 = ((/* implicit */long long int) arr_22 [i_6 - 3] [i_6 - 3]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_10])))))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_13))) | (((/* implicit */int) arr_33 [i_4] [i_4] [i_6 + 1] [i_6]))));
                var_32 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
            }
        }
        for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_33 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
            var_34 |= ((/* implicit */unsigned int) arr_18 [i_4]);
            var_35 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_4] [i_4] [(_Bool)1])), (((long long int) var_5))));
            var_36 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51))) : (-5355539905272766510LL)));
        }
        var_37 += ((/* implicit */_Bool) arr_24 [i_4]);
    }
    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
    {
        arr_53 [i_14] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (16822946699065749293ULL)));
        var_38 = ((/* implicit */long long int) arr_45 [2LL] [i_14] [i_14] [i_14] [i_14] [2LL]);
    }
    for (long long int i_15 = 1; i_15 < 22; i_15 += 4) 
    {
        var_39 &= ((/* implicit */_Bool) arr_55 [i_15 + 2]);
        arr_56 [i_15] = ((_Bool) (-(0U)));
        /* LoopSeq 2 */
        for (unsigned short i_16 = 2; i_16 < 23; i_16 += 4) 
        {
            arr_61 [i_16] [i_16] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) ((_Bool) (unsigned char)0))))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)65520))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 1) 
            {
                var_40 *= ((/* implicit */unsigned long long int) var_11);
                var_41 = var_4;
                arr_66 [i_15 + 2] [(_Bool)1] [i_17] |= ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
                arr_67 [i_15] [i_17 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) arr_55 [i_15]))), (var_7)));
                var_42 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_54 [i_16])) - (235))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [(unsigned short)17]))))))) >> (((((/* implicit */int) arr_58 [i_15 + 1])) * (((/* implicit */int) arr_58 [i_15 - 1]))))));
            }
            for (unsigned char i_18 = 2; i_18 < 24; i_18 += 1) 
            {
                arr_70 [i_15] [i_16] [24LL] = arr_55 [(_Bool)1];
                arr_71 [i_15] [i_16 - 2] [(unsigned short)22] = max((var_9), (((((/* implicit */_Bool) 8540085016733049761LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3202546509U))));
            }
            var_43 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_14)), (arr_63 [i_15 + 3] [i_15 + 1]))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))) : (arr_57 [i_16] [i_15] [(_Bool)1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_44 += ((((/* implicit */unsigned long long int) (-(((arr_64 [(_Bool)1] [i_16] [(_Bool)1]) & (((/* implicit */long long int) ((/* implicit */int) arr_59 [2U] [2U] [6LL])))))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [(_Bool)1])) ^ (((/* implicit */int) var_0))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [(_Bool)1] [18ULL] [18ULL]))) % (18446744073709551615ULL))))));
                        arr_76 [i_15] [(unsigned short)2] [i_16] [(unsigned char)23] [i_15] |= ((/* implicit */unsigned long long int) ((long long int) arr_72 [i_15] [i_15] [i_15] [i_15]));
                    }
                } 
            } 
            var_45 = arr_73 [i_16] [(unsigned char)4] [i_15] [i_15];
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_46 = ((/* implicit */long long int) var_13);
            var_47 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -3885239369018191932LL)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (1623797374643802297ULL)))))));
        }
    }
    var_48 = 256101909526246107LL;
    var_49 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2))))))), (min((13436324878376315396ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
}
