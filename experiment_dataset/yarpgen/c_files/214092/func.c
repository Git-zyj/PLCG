/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214092
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max(((+((+(-8597342462312250566LL))))), (((/* implicit */long long int) arr_1 [i_0]))));
        var_19 += ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) arr_1 [(unsigned short)2])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) == (((/* implicit */int) arr_1 [(unsigned short)18]))))))) & ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)16])))))))));
        var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_22 = (unsigned char)37;
        var_23 = ((/* implicit */long long int) arr_0 [(unsigned short)12] [i_1 - 1]);
        var_24 = ((short) (+(((/* implicit */int) arr_0 [(short)20] [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [(unsigned char)9]))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_20 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_2] [i_3] [i_4 - 1]))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_16 [i_3] [i_3]))));
                    }
                } 
            } 
        } 
        arr_21 [i_2] [i_2] = var_14;
        var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)44044)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [i_2] [i_2])))));
        arr_22 [i_2] [i_2] = ((/* implicit */long long int) var_1);
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) 
    {
        var_27 |= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(short)16])), ((unsigned short)21489)))) || (((/* implicit */_Bool) max((arr_0 [(unsigned char)14] [(unsigned char)14]), (((/* implicit */unsigned short) (unsigned char)131))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                arr_29 [i_6] = ((/* implicit */short) arr_24 [i_8]);
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [(short)9])) ? (((((/* implicit */int) arr_25 [(short)9])) + (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_1 [i_7])))))));
                arr_30 [i_6] [i_6 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)21502)) - (((/* implicit */int) (unsigned short)44044))));
            }
            for (unsigned short i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_38 [(unsigned short)9] [i_10] [i_9] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_28 [i_10])) ? (76285728747827328LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7]))))), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_28 [i_6])))), (((/* implicit */int) (unsigned short)51366)))))));
                            arr_39 [i_6 + 1] [i_7] [i_7] [i_10] [i_9] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_25 [i_6 + 1]))))));
                            arr_40 [i_9] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21491))))))) < (((/* implicit */int) arr_26 [i_6]))));
                            arr_41 [i_9] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) (short)25805)))), (((((/* implicit */int) arr_37 [(short)15] [i_7] [i_7])) + (((/* implicit */int) (unsigned short)21461)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)26977)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8495279735368276973LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13106))) : (8958383829992208298LL)));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)117))));
                            var_31 |= ((/* implicit */short) ((unsigned short) ((3047516296364656089LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    for (long long int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_32 |= arr_25 [i_7];
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_42 [i_6] [i_14] [i_15 - 1]), (arr_42 [i_6] [i_7] [i_15 + 1])))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    arr_54 [i_6] [i_6 + 1] [i_6] [i_9] = ((/* implicit */unsigned short) max((arr_45 [i_6] [i_6] [i_9] [i_9] [i_16]), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_27 [(short)11])))) ^ (((/* implicit */int) arr_51 [(short)7] [i_9])))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 6229860143025945239LL))) <= (((((((/* implicit */int) arr_32 [i_6])) + (2147483647))) >> (((((/* implicit */int) arr_28 [i_9])) - (7766)))))));
                    arr_55 [i_16] [i_9] [i_9] [i_9] [(unsigned char)4] = ((/* implicit */short) ((unsigned short) (unsigned short)65511));
                    arr_56 [i_6] [i_9] [i_9 + 1] [i_16] = ((/* implicit */unsigned char) var_11);
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) (short)32458))))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_6] [(unsigned char)2] [i_9 - 1] [i_6])) - (((/* implicit */int) arr_46 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7]))))), (((long long int) (short)-29688)))))))));
                }
            }
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_47 [i_7] [(unsigned short)3] [(unsigned short)2] [i_7]))), (((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */int) arr_48 [i_7] [i_7] [i_7] [i_7] [i_6] [i_6])) : (((/* implicit */int) arr_52 [i_6] [i_7] [i_7] [i_6]))))))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_17 = 2; i_17 < 17; i_17 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                for (short i_19 = 0; i_19 < 21; i_19 += 3) 
                {
                    for (short i_20 = 2; i_20 < 20; i_20 += 3) 
                    {
                        {
                            arr_70 [i_20] [i_20] [(unsigned short)8] [i_18] [i_18] [i_20] [i_6 - 1] = ((/* implicit */unsigned short) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_6 - 1])))));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_10))));
                            var_38 = (unsigned short)44075;
                        }
                    } 
                } 
            } 
            arr_71 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_6] [i_6] [i_6] [i_17] [i_17 + 4])) ? (((/* implicit */int) arr_44 [i_6] [i_6 - 1] [(short)18] [i_6] [i_17 + 3] [i_6 - 1])) : (((/* implicit */int) (unsigned char)53))));
        }
        for (short i_21 = 0; i_21 < 21; i_21 += 3) 
        {
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (~(((long long int) max((((/* implicit */unsigned short) (short)22067)), ((unsigned short)38367)))))))));
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                for (unsigned short i_23 = 2; i_23 < 19; i_23 += 2) 
                {
                    {
                        arr_79 [i_6] [i_6] [i_6] [i_21] [i_21] [i_23 - 1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_76 [i_6] [i_6 + 1] [i_21] [i_6 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_23] [(unsigned char)17] [i_21] [i_21] [i_6])))))));
                        var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                    }
                } 
            } 
            arr_80 [i_21] = ((/* implicit */unsigned short) (short)-22068);
        }
        /* vectorizable */
        for (short i_24 = 1; i_24 < 20; i_24 += 2) 
        {
            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (+(((/* implicit */int) var_16)))))));
            arr_83 [i_24] [(unsigned short)17] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
        }
        arr_84 [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_46 [(unsigned short)4] [(short)6] [i_6] [i_6 + 1] [i_6 + 1] [(unsigned short)4])) * (((/* implicit */int) (short)22067))))), ((+(-9209934008927710518LL))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)13130))) * (((((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_6] [i_6]))) : (var_10)))))));
    }
    var_42 = ((/* implicit */short) -9223372036854775800LL);
}
