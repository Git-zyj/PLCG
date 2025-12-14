/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232298
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
    var_10 = (_Bool)1;
    var_11 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) -7528153215348271160LL)) ? (arr_2 [i_0]) : (arr_2 [13ULL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16419816831627838283ULL)) ? (((/* implicit */int) (short)-13654)) : (((/* implicit */int) arr_1 [i_0])))))))), (((((/* implicit */_Bool) -101036491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4987))) : (2026927242081713315ULL)))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 7528153215348271160LL)) ? (2147475456U) : (((/* implicit */unsigned int) 178311373))));
        var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) -101036491))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))) : (((arr_2 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [16U] [i_0])))))) : ((+(((((/* implicit */_Bool) -178311379)) ? (1219189550280699327LL) : (((/* implicit */long long int) 4143129065U))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (~(var_2)));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((min(((-(((/* implicit */int) arr_6 [(_Bool)1])))), (((/* implicit */int) arr_5 [i_1 + 1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_1]), (arr_6 [i_1]))))))))))));
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (arr_0 [i_1] [i_1 + 1]) : (arr_0 [i_1] [i_1 - 1]))) : ((-(arr_0 [i_1] [i_1 - 1])))));
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) && (((/* implicit */_Bool) arr_9 [i_2]))))), ((+(4143129070U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1])))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((~(arr_2 [i_2]))), (((/* implicit */unsigned int) ((16309742848484660392ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) & ((~(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) arr_0 [i_2] [i_3]))))))));
            var_16 = ((/* implicit */signed char) arr_13 [i_2] [i_2 - 1] [i_3]);
            arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_2])) >= (((/* implicit */int) arr_1 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_1 [i_2 - 1]))))) : (arr_2 [i_2 + 1])))) ? (((((/* implicit */_Bool) 9223367638808264704ULL)) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_3])), (arr_13 [i_2] [(_Bool)1] [i_2]))))))) : (min((arr_12 [i_2 + 1] [i_2]), (arr_9 [i_2]))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_17 = ((/* implicit */long long int) (+((+(1537216768)))));
                var_18 -= ((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1]);
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                var_19 = ((/* implicit */_Bool) ((int) arr_1 [i_2 + 1]));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_2] [i_2])) >= (-1426380693))) ? (((/* implicit */int) arr_19 [i_2 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) ((2026927242081713333ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))))));
            }
            arr_24 [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5])) ? (min((min((((/* implicit */long long int) arr_13 [i_2] [i_5] [i_5])), (var_4))), (((((/* implicit */_Bool) 4143129070U)) ? (var_0) : (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((16419816831627838291ULL) >= (((/* implicit */unsigned long long int) 1537216762))))))));
            arr_25 [i_2] [i_2] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) 2026927242081713321ULL)) || (((/* implicit */_Bool) 178311360))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_29 [i_2] = ((/* implicit */signed char) min(((-(min((arr_7 [i_2]), (((/* implicit */long long int) 1160633618)))))), (((/* implicit */long long int) (~(((arr_23 [i_2] [i_5] [i_7] [i_7]) % (var_3))))))));
                var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_2] [i_7] [i_2] [i_2 + 1])))))) >= (((((/* implicit */_Bool) arr_20 [i_2 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned char)9] [i_5]))) : (265532458442069765ULL)))));
                arr_30 [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)3)), (((arr_0 [i_2] [(signed char)2]) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)225)), (arr_13 [i_2] [i_5] [(short)1])))))))));
            }
        }
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_2] [i_2 - 1] [i_2] [(_Bool)0]), (arr_18 [i_2] [i_2 - 1] [i_2] [i_2 + 1]))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_8))))) - (min((16419816831627838303ULL), (((/* implicit */unsigned long long int) 1537216757))))))));
    }
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_23 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((arr_31 [i_8]) % (arr_31 [i_8]))) : (((/* implicit */long long int) arr_0 [i_8] [i_8]))))), (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8]))) : (min((36028797018963967ULL), (((/* implicit */unsigned long long int) arr_0 [i_8] [i_8]))))))));
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_31 [i_8]) & (((/* implicit */long long int) arr_0 [i_8] [i_8]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((5469456242285876788LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440))))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_31 [i_8]))) ? (((arr_0 [i_8] [i_8]) % (((/* implicit */unsigned int) 978644367)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8])))))));
        var_24 = ((/* implicit */_Bool) arr_2 [i_8]);
    }
    for (long long int i_9 = 3; i_9 < 9; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1329607801U)))), (min((arr_28 [i_9 + 1] [i_11] [i_10] [i_11]), (((/* implicit */long long int) arr_11 [i_9])))))) + (((/* implicit */long long int) ((((/* implicit */int) min((arr_27 [i_9] [i_9]), (((/* implicit */short) arr_45 [i_9 + 1]))))) - (((((/* implicit */_Bool) (signed char)-74)) ? (-287298756) : (((/* implicit */int) (unsigned char)30))))))))))));
                arr_46 [i_9] [i_10] [i_10] [i_9 - 1] = ((/* implicit */unsigned int) arr_28 [i_9] [i_10] [i_9] [i_11]);
                var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7528153215348271182LL))))), (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (262143U)))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_11])) ? (arr_26 [i_9] [7LL] [i_9]) : (((/* implicit */int) arr_43 [i_9] [i_9] [i_9]))))), (((unsigned long long int) arr_44 [i_9] [i_10] [i_10]))))));
                arr_47 [i_11] &= ((/* implicit */short) (-(min((((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) arr_43 [i_9] [i_10] [0U])))), (((/* implicit */int) (_Bool)1))))));
                var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9 - 1] [i_10 + 1] [i_10 - 1]))) >= (((((/* implicit */_Bool) arr_0 [i_10] [i_10 + 1])) ? (arr_0 [i_10] [i_10 + 1]) : (arr_0 [i_10 - 1] [i_10 + 1])))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_52 [i_9 + 1] [i_9 - 3] [(signed char)0] [(signed char)0] [i_13 + 2])) & (arr_22 [8LL] [i_9 + 1] [i_9 - 3]))))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (arr_52 [i_13] [i_12] [i_12] [i_10] [i_9]) : (((/* implicit */int) arr_21 [i_12] [4U] [i_12])))))))));
                    var_30 = ((/* implicit */long long int) arr_38 [i_10]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_10] [(_Bool)1] [i_13])) ? (arr_17 [i_10] [i_10] [6]) : (arr_17 [i_10] [i_13 - 1] [i_14])));
                        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_9 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10 + 1] [i_9 - 1]))) : (6694739618718322156ULL)));
                        var_33 = ((/* implicit */int) (-(-4245285110124460926LL)));
                    }
                    arr_56 [i_10] = ((/* implicit */unsigned int) var_0);
                }
                for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 4) 
                {
                    arr_60 [i_9] [i_10 - 1] [i_9] [i_15] [i_10] = ((/* implicit */unsigned long long int) ((short) ((var_1) >= (((/* implicit */int) arr_35 [i_9])))));
                    arr_61 [(unsigned char)6] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */signed char) ((unsigned long long int) arr_54 [i_9 - 2] [i_9 - 3] [i_10] [i_12] [i_10]));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_19 [i_9 - 2] [i_9 - 2] [i_12]))));
                    var_35 -= ((/* implicit */unsigned int) ((unsigned char) arr_39 [i_12] [i_12]));
                }
                var_36 = ((/* implicit */unsigned long long int) (-(arr_37 [i_12] [i_12])));
            }
            arr_62 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [4ULL])) ? (arr_17 [i_10] [i_10] [(signed char)5]) : (arr_17 [i_10] [3] [i_9])))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_1 [(_Bool)1]))))), (((arr_49 [i_9] [i_9] [i_9]) ^ (27ULL)))))));
        }
        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_16] [i_16] [i_16])) || (((/* implicit */_Bool) arr_1 [i_16])))))))) >= (((((/* implicit */_Bool) (unsigned short)4439)) ? (1678157484733839162LL) : (((/* implicit */long long int) 2987612100U))))));
            arr_66 [i_9] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_9])) ? (((((((/* implicit */_Bool) (unsigned char)231)) ? (var_4) : (var_0))) - (((((/* implicit */_Bool) arr_34 [0ULL])) ? (0LL) : (arr_65 [i_16] [i_9]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_63 [i_9 - 3] [i_9 - 2] [i_9])))))));
            /* LoopSeq 2 */
            for (signed char i_17 = 1; i_17 < 7; i_17 += 4) 
            {
                var_38 = ((/* implicit */int) arr_32 [i_9 - 3]);
                var_39 |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((arr_64 [i_9] [i_16] [i_17]), (((/* implicit */unsigned char) arr_54 [i_9] [i_9] [i_16] [i_9] [i_16]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30210))) / (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_54 [i_9] [i_9] [i_16] [(unsigned char)6] [i_16])), (arr_19 [12U] [12U] [i_16]))))))));
                arr_69 [i_17] [i_16] = 1937666794U;
            }
            for (unsigned char i_18 = 1; i_18 < 9; i_18 += 4) 
            {
                var_40 = ((((/* implicit */int) (signed char)58)) != (((/* implicit */int) arr_32 [i_9 - 2])));
                var_41 = ((/* implicit */short) arr_51 [i_16] [i_18]);
            }
        }
        arr_72 [(_Bool)1] [i_9 - 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -4611686018427387904LL)), (((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_9] [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((262143U) ^ (((/* implicit */unsigned int) 15))))) : (arr_68 [i_9 - 3])))));
    }
    for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            for (int i_21 = 1; i_21 < 10; i_21 += 2) 
            {
                {
                    var_42 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 153476492041764471ULL)) ? (arr_2 [i_19 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_19 + 2])))))));
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) arr_12 [i_19 + 2] [i_20 - 1]))));
                }
            } 
        } 
        arr_81 [i_19] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((2026927242081713319ULL) / (((/* implicit */unsigned long long int) 2334255382U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_26 [i_19 + 4] [(signed char)0] [i_19 + 4]), (((/* implicit */int) var_5))))) ? ((~(1960711907U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_19 + 1]))))))));
    }
}
