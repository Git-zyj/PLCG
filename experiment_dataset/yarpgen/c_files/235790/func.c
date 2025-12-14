/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235790
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (short)-28490);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
            {
                arr_7 [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-28490))));
                var_14 = ((/* implicit */short) (-(4186577305855417376ULL)));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14797)))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_15 [(unsigned short)10] [i_1] [(short)21] [(unsigned short)10] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)19))));
                        var_16 = ((/* implicit */signed char) 14260166767854134239ULL);
                        arr_16 [i_4] [i_4] [(short)22] [(short)18] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-42))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (_Bool)1))));
                    }
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_18 &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)217))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_19 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -642633900))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        arr_22 [i_0] [(unsigned short)3] [i_6] [i_0] [0ULL] [i_0] = 1386636123U;
                        arr_23 [i_6] [i_6] [(_Bool)1] [i_0] [i_6] = ((/* implicit */unsigned int) (~(8196800321001422567ULL)));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)14)))))));
                    }
                    var_22 &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)118))));
                }
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */int) 14260166767854134239ULL);
                arr_26 [i_7] [8ULL] [(signed char)17] [i_7] = ((/* implicit */unsigned int) (unsigned short)8032);
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_29 [(short)11] [i_1] [i_8] [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    arr_30 [i_8] = ((/* implicit */signed char) 2797245126U);
                }
            }
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 4186577305855417376ULL))));
            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)26507))));
        }
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_37 [14] [(unsigned short)6] |= ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(111797712))))))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                arr_40 [i_0] [i_10] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-26508))))), ((-(18032207198576271500ULL)))));
                var_26 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)15))))), ((~(15973091629820942783ULL)))));
            }
        }
        /* vectorizable */
        for (short i_12 = 3; i_12 < 20; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1496765294))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) 1581278237022435460ULL))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (_Bool)1))));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) (_Bool)1);
                        var_32 ^= (-(((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)9377)), (710902508)));
                        arr_66 [i_0] [i_17] [(signed char)2] [i_19 + 1] [i_0] [(_Bool)1] &= ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)115))))));
                        var_34 = (~(((/* implicit */int) (_Bool)1)));
                        var_35 *= ((/* implicit */_Bool) max((max((1205678082), (((/* implicit */int) (unsigned short)10994)))), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((1755512542297908792LL), (((/* implicit */long long int) (+(((/* implicit */int) (short)-28490))))))))));
        }
        for (signed char i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (_Bool)1))));
            var_38 = ((/* implicit */unsigned int) (_Bool)1);
            arr_70 [i_0] [i_20] = ((/* implicit */_Bool) 6711635738211905354LL);
        }
    }
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
    {
        var_39 ^= ((/* implicit */unsigned char) (_Bool)1);
        var_40 -= ((/* implicit */long long int) (+(((/* implicit */int) (short)7922))));
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (!((_Bool)0))))));
    }
    var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1))))));
    var_43 = ((/* implicit */short) max((16329985214227907938ULL), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (_Bool)1)), (3263655362U))))))));
}
