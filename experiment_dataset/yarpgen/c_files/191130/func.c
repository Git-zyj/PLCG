/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191130
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_15);
            var_19 = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) ((short) arr_6 [i_0] [i_1]))), (arr_0 [i_0] [i_1]))));
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (short)20547)), (arr_1 [i_1])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */int) (short)-20556)) : (((((/* implicit */_Bool) var_17)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */int) arr_3 [i_0]))))))) ? ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-28904)) : (((/* implicit */int) (short)0)))))) : (((int) arr_3 [i_0]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_4 + 1] [i_2] [i_4] = (!(((/* implicit */_Bool) var_13)));
                        var_21 = ((/* implicit */short) min((min((((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (unsigned char)28)), (arr_0 [i_3] [i_3]))))), (((/* implicit */int) ((var_15) == (((/* implicit */int) arr_2 [i_4 + 1])))))));
                    }
                } 
            } 
            arr_16 [i_2] = ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)20545)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-20562)))) : (max((arr_9 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_24 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
                            var_22 = min((((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 - 2] [i_7 + 1])) ? (arr_9 [i_5 - 1] [i_5 - 1] [i_7 - 1]) : (arr_9 [i_5 - 1] [i_5 - 2] [i_7 + 1]))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (short)20561)))));
                            arr_25 [i_0] [i_2] [i_5 + 1] [i_6] [i_7 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_7 - 1])) : (var_15)))));
                            arr_26 [i_2] [i_0] [i_5 + 1] [i_2] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1] [i_7 - 1] [i_7 + 1]))))) ? (min((arr_6 [i_0] [i_2]), ((+(((/* implicit */int) (short)-28927)))))) : (((/* implicit */int) ((unsigned char) ((short) arr_12 [i_0]))))));
                            var_23 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_13 [i_6] [i_2] [i_7 - 1] [i_5 - 1]))))));
                        }
                    } 
                } 
            } 
            var_24 *= ((/* implicit */unsigned int) arr_20 [i_0] [i_2] [i_0] [i_2]);
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_25 ^= ((/* implicit */unsigned short) var_5);
            var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
        var_28 = ((/* implicit */short) (+(((((/* implicit */int) ((_Bool) (short)20547))) ^ ((+(var_15)))))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (short)28925)))))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) arr_10 [i_9] [i_9]);
        var_31 = ((/* implicit */unsigned long long int) arr_10 [i_9] [i_9]);
    }
    for (unsigned int i_10 = 2; i_10 < 15; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_10 - 2] [i_11] [i_11] [i_12] [i_12] [i_13]))));
                        arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10] [i_11] [i_11] [i_11] [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28899))) : (arr_34 [i_10])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_32 [i_10] [i_10])) : (((/* implicit */int) var_1))))))));
                        arr_44 [i_10 - 2] [i_10] [i_10] [i_12] = ((/* implicit */short) var_15);
                        arr_45 [i_10] [i_11] [i_11] [i_13] = ((/* implicit */int) 3U);
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) % (((/* implicit */int) arr_32 [i_10 - 2] [i_10 + 1])))) < ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)96)), (var_5))))))));
                            arr_48 [i_11] = ((/* implicit */int) arr_37 [i_10 + 1] [i_11] [i_10 + 1]);
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) var_4);
                            var_35 ^= ((/* implicit */unsigned char) ((unsigned int) var_3));
                            arr_52 [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-28926))) & ((-(arr_42 [i_12])))));
                            var_36 += ((/* implicit */unsigned int) var_17);
                        }
                        for (int i_16 = 1; i_16 < 14; i_16 += 1) 
                        {
                            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((arr_53 [i_10] [i_11] [i_11] [i_13] [i_16] [i_11] [i_10]), (arr_37 [i_10 - 1] [i_10 - 1] [i_12]))))) ? (((/* implicit */int) max(((short)-17242), ((short)0)))) : ((~(-1)))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_41 [i_10 + 1] [i_11] [i_12] [i_16 + 2] [i_16] [i_13]), (arr_41 [i_13] [i_13] [i_12] [i_16 + 1] [i_16 + 2] [i_10 - 1])))))))));
                            var_39 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_35 [i_10] [i_10 - 2] [i_10 - 2])))), (((/* implicit */int) arr_32 [i_11] [i_16 + 1]))));
                            arr_56 [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_13] [i_16 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? ((-(arr_46 [i_10] [i_10]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_13] [i_12] [i_12])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_47 [i_10 - 2] [i_16])) : (((/* implicit */int) (short)-20548))))) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_12] [i_11] [i_12]))))))))) : (((((var_6) || (((/* implicit */_Bool) (unsigned char)139)))) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28912))))) : (var_3)))));
                        }
                    }
                } 
            } 
        } 
        var_40 &= ((/* implicit */long long int) (+((-(arr_54 [i_10] [i_10] [i_10 - 1] [i_10] [i_10])))));
        var_41 = ((long long int) min((((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */int) arr_51 [i_10 - 2] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10] [i_10 - 1])) : (((/* implicit */int) arr_37 [i_10 - 2] [i_10 - 2] [i_10])))), ((-(((/* implicit */int) var_8))))));
    }
    var_42 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (short)1269)) : (((/* implicit */int) (unsigned char)114)))));
    var_43 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_12))))));
}
