/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228051
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((max((((/* implicit */unsigned long long int) var_2)), (10051438067083747011ULL))) | (var_1)))));
    var_17 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) | ((~(((/* implicit */int) arr_3 [(unsigned char)3] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_0])))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))));
            arr_7 [(_Bool)1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0]))));
        }
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((-1517394605) / (((/* implicit */int) arr_0 [i_0])))) | ((~(((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_10 [(signed char)4] = ((/* implicit */unsigned short) (((((~(-1156432374))) << (((((/* implicit */int) arr_9 [i_2] [i_2])) - (1))))) | (((/* implicit */int) arr_2 [i_2]))));
        arr_11 [i_2] &= ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_2] [i_2])) * (((/* implicit */int) arr_9 [i_2] [i_2])))) & ((~(((/* implicit */int) arr_3 [i_2] [i_2]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_24 [(unsigned short)4] [(signed char)7] [(unsigned char)3] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2])) && (((/* implicit */_Bool) 8395306006625804604ULL))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [(signed char)3] [i_5] [4])) >> (((/* implicit */int) arr_14 [i_2] [i_6])))))));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5] [(short)0])) & (((/* implicit */int) arr_18 [i_5] [i_3] [i_4] [i_6] [(short)8]))));
                            arr_25 [i_4] [i_3] [i_4] = ((/* implicit */short) arr_12 [i_2] [i_3]);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((1274562814260304130LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-27058))))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_2] = 4949590676246354027ULL;
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_9 [i_2] [i_2])) & (((/* implicit */int) arr_1 [i_2]))))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_1 [i_2]))));
            }
            for (signed char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_21 [i_2] [i_3] [i_2] [i_8] [i_8] [i_2] [i_8]))));
                arr_35 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_8] [i_8] [i_3] [i_2] [i_8])) << (((((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) + (116)))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -216858449))));
            }
            for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_28 *= (!(((/* implicit */_Bool) arr_19 [i_11])));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((arr_42 [i_9] [i_9] [i_10]) || (arr_42 [i_11] [i_9] [i_2]))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [10ULL] [i_3] [i_2] [i_9] [i_11])))))));
                        }
                    } 
                } 
                arr_44 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_2] [i_3] [i_3] [i_9] [i_3])) | (((/* implicit */int) arr_39 [i_2] [i_3] [i_2] [i_3] [i_2]))));
                arr_45 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_3])) * (((/* implicit */int) arr_9 [i_2] [i_3]))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (!(arr_39 [i_2] [i_2] [i_3] [i_3] [i_9]))))));
                arr_46 [i_2] [i_2] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) && (((/* implicit */_Bool) (unsigned char)97)))))));
            }
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                var_32 -= ((/* implicit */unsigned short) (~(arr_40 [i_2] [i_2] [i_2] [i_2])));
                arr_51 [i_12] [i_3] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((32767U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_12])))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    arr_54 [i_2] [i_2] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned char) ((arr_8 [i_2]) - (((/* implicit */long long int) arr_40 [i_2] [6U] [i_12] [i_13]))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)25499)) >> (((arr_33 [i_2]) - (2608845443295397280ULL)))));
                }
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_48 [i_2] [i_12])))))));
            }
            arr_55 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-5314249084080244582LL)));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2])) * (((/* implicit */int) arr_30 [i_2] [i_14])))))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (arr_50 [i_14] [1U] [i_14] [8])));
            arr_59 [i_2] [9ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((4294934508U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) - ((-(1911785798612506214ULL)))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    {
                        var_37 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | (arr_33 [i_2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_2] [i_15] [i_16])) / (((/* implicit */int) arr_36 [i_2] [i_15] [i_17])))))));
                        arr_69 [i_2] [i_2] [(signed char)6] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_2] [i_15] [i_16] [10ULL])) || (((/* implicit */_Bool) arr_48 [i_2] [i_15]))));
                        var_38 ^= ((/* implicit */unsigned long long int) (short)-21462);
                    }
                } 
            } 
            arr_70 [i_2] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1517394605))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_2] [i_15] [i_2])))))));
                var_40 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_68 [i_2] [i_2] [i_2] [i_2] [(signed char)4] [i_18]))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(((arr_50 [i_19] [i_19] [i_15] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_19] [i_15] [i_2]))))))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        {
                            arr_81 [i_2] [i_15] [i_19] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57388)) << (((/* implicit */int) (_Bool)1))))) | ((~(1905263294579958443ULL)))));
                            var_42 ^= ((/* implicit */unsigned long long int) arr_49 [(signed char)2] [i_20] [i_19] [(signed char)2]);
                        }
                    } 
                } 
                arr_82 [i_2] [i_15] [i_19] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_15])) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-27058)))))))), (((((/* implicit */int) arr_15 [i_2] [(unsigned char)8] [i_2])) ^ (-565840564)))));
                var_43 *= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-70)) | (((/* implicit */int) arr_49 [(unsigned short)10] [0U] [i_15] [(unsigned short)10]))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (~(arr_40 [i_19] [i_19] [i_15] [i_2])))), (((arr_47 [i_2] [i_15] [i_19]) << (((/* implicit */int) arr_9 [i_15] [i_15]))))))));
            }
            arr_83 [i_2] [i_15] = ((/* implicit */unsigned char) (~(arr_79 [i_15])));
        }
        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) min((((((((/* implicit */int) arr_77 [i_2] [i_2])) << (((((/* implicit */int) arr_37 [i_2] [i_2] [(signed char)6])) - (190))))) >> (((/* implicit */int) ((arr_53 [i_2] [i_2] [i_2] [i_2]) >= (arr_73 [i_2] [9] [i_2] [i_2])))))), (((/* implicit */int) arr_1 [i_2])))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
    {
        for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            {
                var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_88 [i_22] [i_22] [i_22])), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_84 [i_23]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45333))))))) * ((~(16541480779129593145ULL)))))));
                arr_89 [i_23] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_22])) && (((/* implicit */_Bool) arr_85 [i_22]))))) - (((/* implicit */int) ((arr_84 [i_22]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_22]))))))));
                arr_90 [i_22] [i_22] [i_23] = ((/* implicit */unsigned long long int) arr_84 [i_22]);
            }
        } 
    } 
}
