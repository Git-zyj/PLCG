/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21774
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
    var_20 *= ((/* implicit */short) ((var_17) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)1954), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) 3348591939491858669LL)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) var_1);
            arr_5 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        }
        arr_6 [i_0] = arr_1 [i_0] [i_0];
        arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 15572651781552385322ULL)) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)13] [(unsigned char)13])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) >= (896045786)))))) : (((/* implicit */int) (signed char)26))));
        arr_8 [i_0] |= ((/* implicit */unsigned char) arr_3 [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_11 [i_2] [i_2]);
        var_22 = ((/* implicit */unsigned short) (-(1016457954)));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) 1016457964)) != (4754061345961056286LL)))), ((+(((/* implicit */int) arr_12 [i_2]))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                arr_19 [i_3] [(short)13] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_11) : ((+(1016457948)))));
                var_24 = ((/* implicit */_Bool) ((long long int) arr_9 [i_3]));
                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7201070815263049249LL))) << (((/* implicit */int) var_0))));
            }
            for (int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_26 += ((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_8 - 1] [(short)6])) << (((var_11) - (262817951))))) + ((~(((/* implicit */int) arr_26 [(unsigned short)8] [i_7] [16ULL] [16ULL] [i_8] [(unsigned short)18]))))));
                            arr_28 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))) : (3487349974295811329LL)));
                            arr_29 [i_3] [i_4] [i_6] [i_7] [i_3] [1] [(short)17] = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                arr_30 [(unsigned char)13] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3])) && (((/* implicit */_Bool) (short)32766))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            arr_35 [16ULL] [16ULL] [i_6 + 1] [10] [0] [i_3] &= ((/* implicit */long long int) ((int) 15904746748403676133ULL));
                            arr_36 [i_3] = ((/* implicit */unsigned int) (!(var_6)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_22 [i_3])))) ? (((/* implicit */unsigned int) arr_32 [i_6 + 3] [(_Bool)1] [i_6 + 1] [i_3] [i_6 + 3])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_16 [i_3])))));
                var_28 = ((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) 18ULL)) || (((/* implicit */_Bool) var_2)))))));
            }
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                arr_39 [(_Bool)1] [i_3] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9829)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_11]))));
                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_11])) < (((/* implicit */int) arr_10 [i_11]))));
                var_30 += ((/* implicit */long long int) arr_13 [i_11]);
            }
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                var_31 = ((/* implicit */short) (+(15649110663871850100ULL)));
                arr_42 [i_3] [5] [i_4] [i_3] = -1967711838;
                arr_43 [i_3] [i_12] [i_12] [i_12] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                arr_44 [i_3] [i_3] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_3] [i_3] [i_12] [i_12] [i_12] [i_4]))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_3])) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)59578)) == (((/* implicit */int) (short)31792)))))));
            }
            arr_45 [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_4]))) : (((((/* implicit */unsigned long long int) arr_9 [i_3])) - (arr_25 [i_3] [i_4] [i_3] [i_3]))));
            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            arr_46 [i_3] [i_3] [(signed char)17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_3] [i_4] [(unsigned short)5])) | (-1016457954)));
            var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [15] [i_4]))));
        }
        for (short i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            arr_49 [i_3] [i_13] = (!(((/* implicit */_Bool) ((((-3700476498305282185LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
            /* LoopNest 3 */
            for (signed char i_14 = 2; i_14 < 17; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_35 &= ((/* implicit */short) (+((-(((/* implicit */int) var_12))))));
                            var_36 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        }
                    } 
                } 
            } 
            arr_57 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (15904746748403676133ULL)));
        }
        arr_58 [(short)14] &= ((/* implicit */short) arr_53 [i_3] [i_3] [0ULL] [(short)7]);
        arr_59 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_22 [i_3]))))));
        var_37 += ((/* implicit */signed char) var_12);
    }
    var_38 = ((/* implicit */long long int) var_0);
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))) ? (((int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_0))));
}
