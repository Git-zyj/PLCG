/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241726
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33420))) : (arr_2 [i_0] [(signed char)6]))))) ? (((((/* implicit */_Bool) (unsigned short)33420)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */unsigned long long int) var_18);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))));
                            arr_15 [(unsigned short)1] [i_1] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) != (min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2 - 1] [(_Bool)1] [i_3] [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_19 [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_5 - 1]))), (((((/* implicit */_Bool) -744171558)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (332038347U)))))));
                            arr_20 [(unsigned char)15] [i_0] = ((/* implicit */signed char) arr_2 [(signed char)16] [i_2]);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) - (arr_2 [i_0] [11]))), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [(_Bool)1] [i_0]))))));
                            var_24 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -750654036)) ? (-1374095878) : (910207274))) + (2147483647))) >> (((unsigned long long int) var_9))));
                            arr_24 [i_0] [i_0] [i_1] [(short)0] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6344395476575252118ULL)) ? (838724178) : (max((((/* implicit */int) (unsigned short)33420)), ((+(((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_18 [14LL] [i_0] [i_0] [i_0])))))))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)93)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_2 [(signed char)0] [6U])) ? (((/* implicit */int) arr_5 [(unsigned char)2] [(unsigned char)2] [1ULL])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 3) /* same iter space */
    {
        arr_27 [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)10362), (((/* implicit */short) (signed char)95))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) arr_26 [(short)11])), (var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 6647037633706286630ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-75))))) <= (((long long int) arr_25 [8])))))) : (((arr_25 [1]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(unsigned char)10]))))))))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 22; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_37 [12] [12] [i_8] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) (((-(arr_31 [i_8 - 4] [i_8 + 1] [i_8 - 3] [i_8 + 1]))) - (((((/* implicit */_Bool) arr_34 [i_8 + 2] [i_8 - 4] [i_8 - 2])) ? (arr_31 [i_8 - 2] [i_8 - 2] [i_8 - 4] [i_8 - 3]) : (arr_31 [i_8 - 4] [i_8 - 1] [i_8 - 3] [i_8 - 1])))));
                                var_27 = ((/* implicit */signed char) ((long long int) -7902404929763942253LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) min((var_28), ((+(((((/* implicit */int) (unsigned char)253)) * (((/* implicit */int) ((short) arr_34 [i_8 - 4] [i_8 - 4] [i_13])))))))));
                                arr_43 [i_12] [i_12] [i_7] [i_9] [i_12] [i_7] = ((_Bool) var_3);
                                arr_44 [i_13] [i_13] [i_12] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)51))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_38 [i_14] [i_14] [(_Bool)1] [i_14] [14LL]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_14]))))))));
        arr_48 [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_14]))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (unsigned short)7372)) : (((/* implicit */int) (unsigned char)25))));
        arr_49 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205)))))));
        var_31 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_14 - 3] [i_14 + 1] [i_14 + 2]))));
    }
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            for (short i_17 = 1; i_17 < 16; i_17 += 4) 
            {
                {
                    arr_60 [i_17 + 1] [i_16] [i_16] [(short)0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11152))) / (9992368253325923389ULL)));
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_58 [i_16] [i_16] [(short)7] [i_15])))));
                    var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((11U), (((/* implicit */unsigned int) arr_41 [i_17] [i_17] [(signed char)4])))))));
                    var_35 |= ((/* implicit */unsigned char) ((((arr_39 [i_17 + 1] [i_17] [i_17] [i_17 + 1]) - (arr_38 [i_17 - 1] [(signed char)0] [i_17 - 1] [(_Bool)1] [(signed char)8]))) - (((((/* implicit */_Bool) arr_52 [i_17 - 1])) ? (arr_39 [i_17 + 1] [i_17] [i_17] [i_17 + 1]) : (arr_38 [i_17 + 1] [i_16] [(signed char)13] [(signed char)13] [i_16])))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */long long int) var_10);
    var_37 = ((/* implicit */unsigned short) var_6);
    var_38 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
}
