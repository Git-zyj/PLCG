/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24288
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
    var_19 = ((/* implicit */unsigned short) var_13);
    var_20 = ((/* implicit */unsigned int) (unsigned char)109);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 = (~(((/* implicit */int) var_17)));
                    arr_12 [i_3] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 += ((/* implicit */int) ((unsigned long long int) arr_6 [i_3]));
                        var_23 = ((/* implicit */unsigned int) arr_4 [i_3] [i_2]);
                    }
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned char)114)))))));
                }
                arr_15 [12U] [i_2] [i_2] = ((/* implicit */long long int) ((15U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
            {
                arr_20 [i_1] [i_2] [i_6] [i_6] = ((/* implicit */int) (+((~(var_1)))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */int) var_17)) == (var_0)));
                            arr_27 [i_7] [i_2] [(short)12] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned char) var_7));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) (unsigned char)124);
                arr_32 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_1);
            }
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) 15U)) && (((/* implicit */_Bool) var_15)))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        arr_39 [12U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [(short)9] [i_1]))) <= (arr_33 [i_1] [(unsigned short)1] [i_1] [i_1]))))));
                        var_28 = ((/* implicit */long long int) ((_Bool) (unsigned char)109));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_12 = 2; i_12 < 11; i_12 += 2) 
            {
                arr_42 [i_1] [i_1] [i_12] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)113)) || (((/* implicit */_Bool) arr_23 [i_12 + 2] [i_12] [8LL] [i_12] [i_12] [i_12 + 2]))));
                var_29 = ((/* implicit */int) var_14);
                arr_43 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_12] [i_1] [i_12] [i_12])) / (var_10)))) && (((/* implicit */_Bool) arr_25 [i_2]))));
                var_30 = ((/* implicit */int) (short)-1527);
            }
            arr_44 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned int) var_0)))))));
        }
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
        {
            var_31 += ((((/* implicit */int) arr_40 [i_1] [i_13])) % (((/* implicit */int) (short)-26042)));
            arr_47 [i_13] [(unsigned char)9] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
            arr_48 [1U] [i_13] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)214))));
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
        {
            arr_51 [i_1] [i_1] [i_14] = ((/* implicit */short) ((((/* implicit */int) var_13)) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_40 [(_Bool)1] [7LL])) : (((/* implicit */int) (short)-26042))))));
            arr_52 [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_14]))));
            arr_53 [i_14] = ((/* implicit */int) var_11);
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (var_16)));
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            arr_56 [i_1] [i_1] = ((/* implicit */short) arr_38 [i_1] [i_1] [(short)13] [(unsigned char)2]);
            var_33 = ((((/* implicit */int) var_15)) < (((/* implicit */int) arr_8 [i_1] [(short)12] [i_1] [i_1])));
            /* LoopNest 3 */
            for (unsigned char i_16 = 1; i_16 < 11; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            arr_64 [i_18] [i_15] [i_17] [i_17] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_63 [i_15] [i_16] [2] [i_18]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) var_0))));
                            var_34 += ((((/* implicit */_Bool) (+(((/* implicit */int) (short)63))))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                            var_35 = (~(4294967255U));
                        }
                    } 
                } 
            } 
            var_36 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_1] [i_15] [i_1]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_19 = 3; i_19 < 13; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (short i_21 = 0; i_21 < 14; i_21 += 2) 
                {
                    {
                        var_37 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))));
                        arr_73 [i_1] [i_19 - 3] [(short)13] [i_19 - 3] [i_19] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59905)) || (((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */short) max((var_9), (((/* implicit */unsigned int) ((var_0) & (((/* implicit */int) var_15)))))));
    var_39 += ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (!(((((/* implicit */unsigned int) var_2)) <= (569174975U)))))) : (((max((var_10), (((/* implicit */int) var_14)))) / (((/* implicit */int) ((unsigned char) var_8)))))));
}
