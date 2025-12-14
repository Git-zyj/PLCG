/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222096
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned int) var_12);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((max((2228561375U), (((/* implicit */unsigned int) (short)9800)))) - (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) 474720912))))))))));
            var_21 -= ((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) min((-777137461), (2052241097))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3017)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)44744))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_9 [i_2])));
        var_23 -= ((((/* implicit */_Bool) arr_8 [i_2])) ? ((~(((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_9 [i_2])));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_15 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_4]))));
                    arr_16 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) (-(2052241082)));
                    arr_17 [i_3] [(signed char)3] [(signed char)3] [i_4] = ((/* implicit */signed char) (+(arr_13 [i_2] [i_4])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (int i_6 = 4; i_6 < 17; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_22 [i_2] [i_5] [i_6] [i_5]))));
                        var_24 = ((/* implicit */unsigned long long int) arr_21 [i_2] [i_5] [(signed char)14] [i_7]);
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 1] [i_6 - 3] [i_6 + 1])) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_23 [i_5] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        arr_40 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] &= ((/* implicit */int) arr_33 [(unsigned char)3]);
                        arr_41 [i_8] [i_9] = ((/* implicit */_Bool) arr_38 [(unsigned char)15] [i_10] [i_9]);
                        arr_42 [i_8] [i_9] [i_10] [i_11] = ((/* implicit */signed char) min((min((((/* implicit */int) arr_37 [i_8] [i_9] [i_10] [i_11])), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_34 [i_8] [i_9] [i_10] [(short)17])))))), ((~((~(((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_11]))))))));
                    }
                } 
            } 
        } 
        arr_43 [i_8] = ((/* implicit */_Bool) (+(min((((/* implicit */int) max(((unsigned short)1111), (((/* implicit */unsigned short) var_18))))), ((+(((/* implicit */int) (short)-16787))))))));
        arr_44 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (arr_35 [(unsigned short)16] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_39 [i_8] [i_8] [i_8] [15U] [17U]))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8] [i_8] [1])) ? (((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_36 [(short)3] [16ULL] [i_8] [(signed char)0] [i_8] [i_8])))))))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_48 [i_12] &= ((/* implicit */_Bool) (+((-(min((arr_35 [i_8] [i_12] [i_8] [i_8]), (((/* implicit */unsigned long long int) (short)-1458))))))));
            var_26 -= ((/* implicit */unsigned char) var_17);
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_12])) ? (min((min((arr_39 [(unsigned short)11] [i_8] [i_8] [i_8] [i_12]), (var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_45 [i_8])))))));
            arr_49 [17U] [i_12] [11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_16), (((/* implicit */long long int) arr_37 [17U] [i_12] [1LL] [i_8])))), (((/* implicit */long long int) (-(-1716444965)))))))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_28 = var_16;
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_57 [i_8] [i_14 + 1] [i_8] [(short)2])))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(-474720910))))));
            }
            var_31 ^= ((/* implicit */_Bool) var_14);
            arr_61 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_31 [i_8] [i_13]))))) ? (((/* implicit */int) arr_33 [i_13])) : (((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_8]))));
            var_32 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_8] [i_8] [i_8] [3U] [16LL] [i_13])) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_52 [i_8])))))));
        }
    }
}
