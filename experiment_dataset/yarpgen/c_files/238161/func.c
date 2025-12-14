/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238161
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)28493))));
    var_15 += min((((/* implicit */unsigned long long int) var_5)), ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37056)) ^ (((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */short) (+(min((max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)26329)))) > (((/* implicit */int) (short)(-32767 - 1)))));
                                arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)54411))))), ((unsigned short)5900)))) ? (min((arr_11 [i_3 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_11 [i_3 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3])))));
                                var_18 -= ((/* implicit */unsigned short) min(((~(((arr_9 [i_1] [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), ((((~(var_8))) >> (((((((/* implicit */int) var_0)) << (((/* implicit */int) (_Bool)1)))) - (17581)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) var_3)))) - (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_10 [i_1])))))) & (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [i_0]))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33364)) && (((/* implicit */_Bool) 0ULL)))))) - (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33364)) * (((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 2]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_4))) + ((+(((/* implicit */int) var_3))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_0] [i_5 - 1])));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_32 [i_6] [i_7] [i_7] [i_8 + 1] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_8 + 2])) != (((/* implicit */int) arr_22 [i_8 - 4]))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_30 [i_6] [i_7] [i_7] [i_8 + 1] [i_8] [i_8 - 4]))));
                        var_25 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_22 [i_10]))));
            arr_36 [i_6] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_29 [i_6] [i_6] [i_6] [i_10] [i_6] [i_10])));
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_13)))) < (((/* implicit */int) (unsigned short)3226))));
            arr_39 [i_11 + 1] = ((/* implicit */short) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) var_1))))));
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        {
                            arr_48 [i_6] [i_13] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)11901)) : (((/* implicit */int) ((unsigned short) arr_23 [i_6] [i_11 + 1])))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) var_12)))) - (((/* implicit */int) arr_47 [i_6] [i_6] [i_12] [i_13] [i_12])))))));
                            arr_49 [i_14] [i_13] [i_13] [i_13] [i_11] [i_11] [i_6] = ((/* implicit */unsigned long long int) ((short) var_10));
                        }
                    } 
                } 
            } 
            var_29 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_11 + 1] [i_11 + 1] [i_11])) != (((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_11 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-20617))))));
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6])) | (((/* implicit */int) arr_26 [16ULL] [i_6] [i_6] [i_6]))));
        /* LoopSeq 4 */
        for (short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            arr_54 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)24026))))) ? (((/* implicit */int) (unsigned short)240)) : ((-(((/* implicit */int) arr_44 [i_6] [i_6]))))));
            arr_55 [i_6] [i_6] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_6] [i_15]))));
            var_31 = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)11901))))));
            var_32 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_6] [i_6] [i_15] [i_6]))));
            var_33 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_6]))))));
        }
        for (short i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
        {
            arr_58 [i_6] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_22 [i_6])))))));
            arr_59 [i_16] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_6] [i_16] [i_16])) > (((/* implicit */int) arr_47 [i_6] [i_6] [(unsigned short)19] [i_16] [i_16])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) : (7792472582265379107ULL)));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51974))) | (7792472582265379101ULL)))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) (short)-14214)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)27982)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_11))))) : (((/* implicit */int) var_13))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_62 [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_53 [i_17] [i_17] [(unsigned short)18])) ^ (((/* implicit */int) var_3))))));
            /* LoopNest 3 */
            for (unsigned short i_18 = 3; i_18 < 19; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (unsigned short)18851))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + ((-(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            } 
            var_38 = arr_52 [i_6] [i_17];
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_69 [i_6] [i_6] [i_21] [i_21])))))));
            /* LoopNest 3 */
            for (short i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 1; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)44985)) : (((/* implicit */int) (short)-32764))));
                            var_41 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_73 [(unsigned short)17] [i_22 + 1]))))));
                            var_42 = ((((/* implicit */_Bool) (-(16988924669759882314ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_0)))))) : (arr_79 [(short)21] [i_22] [i_22 - 1] [i_21] [i_24 + 1] [i_6]));
                            var_43 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_6] [i_22] [i_23 - 1] [i_24 + 1] [i_24] [i_24 + 2])) / (((/* implicit */int) arr_28 [i_6] [i_6] [i_23 - 1] [i_24 + 1] [i_24 + 1] [i_24]))));
                        }
                    } 
                } 
            } 
            var_44 = (unsigned short)0;
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)26664))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_2))))));
        }
        arr_80 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_6] [i_6] [i_6] [i_6]))) | ((((_Bool)1) ? (16790924394841613302ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
}
