/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240757
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (unsigned char)26)))))) : (var_0)));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_14 = ((((/* implicit */int) arr_9 [i_0])) & (var_10));
                            var_15 |= ((/* implicit */signed char) ((arr_5 [i_0] [i_0] [i_4]) < (arr_0 [i_4])));
                            var_16 &= ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                arr_15 [i_2] [(short)10] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 5820165991746055187LL)) && (((/* implicit */_Bool) var_0)))));
                var_17 = ((/* implicit */short) ((long long int) arr_11 [(unsigned short)13] [i_1] [i_0] [i_0]));
            }
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_5 - 1]))));
                    var_19 = ((/* implicit */unsigned long long int) (signed char)0);
                    var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_0] [i_5 - 1] [i_5 - 1] [i_5]))));
                    arr_23 [8] [i_5] [(short)9] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_5 + 1] [i_0]))));
                }
                var_21 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32363))));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) arr_5 [i_7] [i_1] [i_0]);
                        arr_29 [4LL] [i_8] [i_7] [4LL] = ((/* implicit */short) var_10);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_4))));
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */short) var_0);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_3))));
            }
        }
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            arr_42 [0ULL] [i_10 - 1] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) arr_41 [i_0] [i_10] [i_11] [i_10] [(_Bool)1] [i_13]);
                            var_28 -= ((/* implicit */long long int) (+((-(((/* implicit */int) var_8))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11] [i_11 + 2] [i_11 + 2] [i_12 + 2]))) : (5820165991746055187LL)));
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_10 - 1] [i_10] [i_11 + 3] [i_12]))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0]))))))))));
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32353)) ? (arr_39 [i_11] [i_12 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12] [i_10 - 1])))));
                        }
                        arr_46 [i_10] [i_12] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_20 [i_0] [i_10] [i_0] [i_12]))))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */short) arr_21 [i_0]);
    }
    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        var_34 |= ((/* implicit */unsigned char) 1303883620U);
        var_35 = ((/* implicit */int) max((((unsigned long long int) arr_47 [i_15])), (((unsigned long long int) 15548720210727639817ULL))));
    }
    /* vectorizable */
    for (short i_16 = 3; i_16 < 20; i_16 += 1) 
    {
        var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_16])) ? ((+(var_11))) : (arr_48 [i_16 - 2])));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            for (long long int i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                {
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((_Bool) arr_56 [i_16 - 1] [i_18] [i_18 - 1] [i_18])))));
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_16])) ? (((long long int) (short)28341)) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_17] [i_17]))))))));
                    var_39 &= ((/* implicit */long long int) (~(var_12)));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned short) max((var_40), (((unsigned short) (+(740081426U))))));
    }
    /* vectorizable */
    for (long long int i_19 = 3; i_19 < 21; i_19 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_20 = 3; i_20 < 19; i_20 += 1) 
        {
            for (unsigned char i_21 = 1; i_21 < 19; i_21 += 4) 
            {
                for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    {
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) arr_60 [i_19] [i_21]))));
                        arr_70 [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) ((long long int) (unsigned short)50023));
                    }
                } 
            } 
        } 
        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (-135016663))))) * (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_62 [i_19])))));
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_19] [i_19]))) : (var_12)))))));
        var_44 += ((/* implicit */unsigned long long int) 2147483647);
    }
    var_45 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_10)))))), ((short)-187)));
    var_46 &= max((var_0), (((/* implicit */unsigned long long int) var_5)));
    var_47 += ((/* implicit */signed char) var_6);
    var_48 &= ((/* implicit */short) (((!(((/* implicit */_Bool) 11570779551831047267ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)169))));
}
