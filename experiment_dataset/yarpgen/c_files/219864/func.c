/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219864
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [i_0])))) && (((((/* implicit */_Bool) 4294967285U)) || (((/* implicit */_Bool) arr_0 [i_1] [i_0]))))));
                var_17 = (signed char)(-127 - 1);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 4; i_4 < 14; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */_Bool) 1041230104632488334ULL);
                                var_19 = ((/* implicit */short) arr_3 [i_2] [i_3] [i_4 - 4]);
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                            {
                                var_20 = ((((arr_15 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_5] [i_5]) + (2147483647))) << (((((/* implicit */int) var_7)) - (178))));
                                var_21 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((_Bool) (signed char)15)))))));
                            }
                            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                            {
                                arr_19 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_6 - 1] [(signed char)5] = ((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0])));
                                var_22 = ((/* implicit */short) var_6);
                            }
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                            {
                                arr_22 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((5645051295180099405LL) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_0] [i_1] [i_2] [i_2] [i_3] [i_7])))))) ? (var_12) : ((+(arr_7 [i_2] [i_1 + 2] [i_3])))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (-539995947)))) ? (((((/* implicit */_Bool) arr_14 [i_7] [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1561793233U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_14);
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            var_26 = (-(arr_23 [(short)5] [(short)5]));
            arr_27 [i_8] [i_9] = ((/* implicit */unsigned char) (((~(7U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), ((unsigned short)0)))) && (((/* implicit */_Bool) (-(var_9))))))))));
            var_27 = ((/* implicit */unsigned short) min(((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_9])), (18160940191332378637ULL)))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_28 = ((/* implicit */signed char) var_0);
            var_29 = ((/* implicit */unsigned short) (-((-((~(((/* implicit */int) var_7))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                arr_34 [i_8] [i_8] [i_11] [i_10] = ((/* implicit */unsigned int) var_15);
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_11])) & (((/* implicit */int) (signed char)-49))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
            {
                arr_38 [i_12] [i_12] = ((/* implicit */unsigned int) arr_28 [i_8] [i_10] [i_8]);
                var_31 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_15))))));
                var_32 *= ((/* implicit */unsigned long long int) ((long long int) ((arr_37 [i_8] [i_8] [i_10]) != (1561793226U))));
                var_33 = ((/* implicit */unsigned short) arr_35 [i_12] [i_12] [i_12] [i_8]);
                arr_39 [i_12] = ((/* implicit */unsigned long long int) (short)-29229);
            }
            for (signed char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_36 [i_10]))) - (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [i_8] [i_8] [1LL] [i_8]))))), (arr_36 [i_10]))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)29228))) ^ (arr_29 [i_8])))));
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_8] [i_10] [i_13])) | (((/* implicit */int) var_1))));
                            var_37 = ((/* implicit */short) (~((~(((/* implicit */int) (short)-8294))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned int) var_16);
            }
        }
        for (int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_39 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) (unsigned char)8)))) || (((/* implicit */_Bool) ((unsigned int) arr_36 [i_16]))))), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -9223372036854775792LL))))));
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_45 [i_8] [6] [12ULL])))))));
        }
        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)34)) & (((/* implicit */int) (unsigned short)39436))))) && (((/* implicit */_Bool) arr_33 [i_17] [(short)18] [i_17] [i_17]))));
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) arr_30 [i_17] [i_17] [i_17]))));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
        {
            var_44 = ((/* implicit */long long int) (~(arr_37 [i_17] [i_17] [14ULL])));
            var_45 = ((/* implicit */signed char) var_7);
        }
        for (signed char i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            arr_59 [i_17] [i_19] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_19] [i_17])) && (((/* implicit */_Bool) (short)32738))));
            var_46 = ((/* implicit */signed char) ((((/* implicit */int) (short)-29229)) + (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [10LL])) || ((_Bool)1))))));
        }
    }
}
