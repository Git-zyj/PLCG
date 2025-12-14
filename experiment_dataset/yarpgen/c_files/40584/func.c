/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40584
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)26168))))) % (var_16));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (unsigned char)223))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0 - 3] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_15)))));
            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) -8032814895026569520LL)) ? (var_13) : (var_1))) % (65535LL)));
            var_21 = var_11;
        }
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_1 [i_0 + 2]))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_23 = ((((/* implicit */_Bool) 4414864114511154864LL)) ? (-6031508207804497719LL) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_7 [i_2] [i_2]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (2400281863U)))))));
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_15 [i_3] [i_4] &= ((/* implicit */_Bool) arr_6 [i_3] [i_4]);
            var_25 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */long long int) (short)13941))));
            var_26 = ((/* implicit */short) 4414864114511154864LL);
        }
        var_27 += ((/* implicit */short) arr_11 [i_3]);
    }
    var_28 = ((/* implicit */short) max((var_28), (var_14)));
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-27LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_30 = ((/* implicit */long long int) (short)-10898);
        var_31 *= ((/* implicit */short) var_16);
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) - (arr_10 [i_6]))), (((/* implicit */long long int) arr_1 [i_5]))))) ? (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))) <= (8738211024795027910LL))) ? (((/* implicit */int) (unsigned short)55546)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) != (4294967295U))))))) : (var_3)));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    var_33 += ((/* implicit */short) min((((/* implicit */long long int) (short)-14445)), (max((((/* implicit */long long int) min((arr_4 [i_5] [(_Bool)1] [i_8 - 1]), (var_5)))), (var_1)))));
                    var_34 = ((/* implicit */long long int) (short)32767);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        arr_29 [i_5] [i_6] [i_7] [i_8] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) var_4);
                        var_35 = arr_14 [i_5] [i_6] [i_9];
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1909892954535326969LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_7 + 1] [i_9 + 3] [i_8 - 1] [i_8]))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_9 - 1] [i_8] [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_8 + 2] [i_7] [i_8])))))));
                    }
                }
                var_38 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                var_39 += ((/* implicit */long long int) var_14);
            }
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) (short)-23278)))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_5])))) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_25 [i_5] [i_5] [i_10 - 1] [i_5] [i_10 + 1])) - (3252))))))), (((/* implicit */int) (short)29797))));
            var_41 = (~(((((/* implicit */_Bool) (short)-14445)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)10412))) < ((-9223372036854775807LL - 1LL)))))) : (min((((/* implicit */long long int) var_14)), (-5803201660224962443LL))))));
        }
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            var_42 = ((/* implicit */unsigned int) (_Bool)1);
            var_43 ^= ((/* implicit */short) max((min((((/* implicit */long long int) arr_12 [i_11] [i_5])), (-474484947641563989LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_11] [i_5])))))));
        }
        var_44 = ((/* implicit */short) max((var_44), (var_0)));
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_12]))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_41 [i_13] [i_13] = (-(4294967282U));
            var_46 = ((/* implicit */unsigned int) (unsigned char)255);
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32755)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17983))) : (arr_7 [i_12] [(short)8])))));
            var_48 = ((/* implicit */_Bool) (short)26023);
        }
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 19; i_14 += 4) 
    {
        var_49 = ((/* implicit */short) -1573986057670736216LL);
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                arr_50 [i_14] [i_15] [i_16] = ((/* implicit */long long int) var_2);
                var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_45 [i_14] [i_15])) << (((((/* implicit */int) var_2)) - (163)))));
                var_51 = ((/* implicit */unsigned short) arr_43 [i_14 - 1] [i_15]);
            }
            var_52 = (short)11314;
            var_53 = ((/* implicit */short) -22LL);
            var_54 = ((/* implicit */_Bool) arr_43 [(unsigned char)18] [i_15]);
        }
        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (unsigned char)247))));
    }
}
