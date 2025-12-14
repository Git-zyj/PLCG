/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248620
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_0 [i_0] [i_0]))));
        var_20 -= ((/* implicit */int) ((_Bool) 13437943326347180518ULL));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) -9180653570586932529LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58249))) : (8574754822910231372LL))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_16) / (((/* implicit */unsigned long long int) arr_3 [19LL])))), (((/* implicit */unsigned long long int) var_11))))) ? (arr_12 [(unsigned short)17] [(unsigned short)17] [(signed char)13] [(unsigned short)6] [i_5]) : (((/* implicit */unsigned long long int) (+(arr_9 [i_2 - 1] [i_3])))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(-1270846174))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_7 = 3; i_7 < 16; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 13437943326347180526ULL)) ? (9180653570586932536LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                arr_25 [i_6] [i_6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [(unsigned short)2] [i_7 + 3] [i_8] [i_7 + 2]))));
            }
            arr_26 [i_6] [i_7] &= ((/* implicit */short) var_10);
            var_26 = ((/* implicit */unsigned short) ((int) arr_9 [i_6] [i_6]));
        }
        for (short i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((13437943326347180526ULL), (((/* implicit */unsigned long long int) (unsigned char)31))))))) <= (var_12)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                arr_34 [i_6] [18U] [i_9 - 1] [i_10] |= ((/* implicit */int) arr_32 [i_6] [i_6] [i_10]);
                var_28 *= ((/* implicit */signed char) arr_14 [i_10] [i_6] [i_6] [i_9 + 3]);
                var_29 ^= ((/* implicit */unsigned short) (!(var_10)));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_28 [i_9 - 1] [i_11 + 1] [i_11 + 1])))) ? (max((arr_12 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_20 [i_11 + 1] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11] [i_11]))))))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) -9180653570586932537LL))));
                var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6] [(short)3] [i_11])) ? (((/* implicit */int) ((arr_18 [i_6]) && (((/* implicit */_Bool) arr_11 [i_11] [i_11] [(_Bool)1] [i_11]))))) : (((/* implicit */int) ((short) ((unsigned short) arr_13 [i_6] [i_6] [i_6] [(short)5] [i_6] [i_6] [15LL]))))));
            }
            for (short i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned char) (+((-(arr_27 [i_6] [i_9] [i_12])))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_42 [(short)2] [i_9 + 1] [i_12] [i_13]) * (((/* implicit */unsigned long long int) arr_13 [i_6] [i_9] [(short)19] [(short)19] [(signed char)20] [i_14] [i_14])))), (((/* implicit */unsigned long long int) ((short) -6299941902852760106LL)))))) ? ((-(((((/* implicit */_Bool) arr_42 [(signed char)10] [i_12] [(signed char)10] [i_6])) ? (arr_32 [i_6] [i_9 + 3] [i_9 + 3]) : (((/* implicit */unsigned long long int) arr_20 [i_9] [i_12])))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) - (5008800747362371091ULL)))) ? (13437943326347180525ULL) : (((/* implicit */unsigned long long int) -8574754822910231372LL)))))))));
                            var_35 ^= ((/* implicit */short) ((long long int) ((signed char) min((((/* implicit */unsigned long long int) arr_43 [i_14] [(signed char)3] [i_6] [i_9] [i_6])), (5008800747362371086ULL)))));
                        }
                    } 
                } 
                var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_6] [(_Bool)1] [i_9] [(_Bool)1] [(signed char)6])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [(unsigned short)6]))) - (arr_45 [(signed char)18] [i_6] [i_6] [(signed char)14] [i_12] [i_6] [i_12]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_6] [i_9])) ? (((/* implicit */int) arr_46 [i_6] [i_6])) : (((/* implicit */int) arr_46 [i_6] [i_6])))))));
            }
        }
        var_37 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_17 [i_6]))) ? (arr_20 [i_6] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_17 [i_6])))))));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1113767894)) : (131071U))))))));
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (short)27823)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13602))) : (9180653570586932506LL))))));
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((unsigned long long int) arr_10 [(unsigned short)6] [i_15] [(short)20] [(_Bool)1])))));
        var_41 |= ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_2 [i_15] [i_15])))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_15] [16ULL] [i_15] [i_15] [i_15])) ? (arr_12 [i_15] [i_15] [i_15] [(unsigned short)9] [i_15]) : (arr_12 [(unsigned short)14] [i_15] [i_15] [i_15] [i_15])));
    }
    var_43 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_1))))))));
    var_44 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_6)));
    var_45 &= var_17;
}
