/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38629
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) 1838647566)), (-1LL)));
        var_17 = min((((((/* implicit */_Bool) 8388096)) ? (3072240168U) : (((/* implicit */unsigned int) 8388096)))), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [16U])))));
        arr_2 [i_0] = ((/* implicit */signed char) 6164624037110195142LL);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */_Bool) min((((unsigned int) arr_4 [2U])), ((-(arr_4 [4U])))));
        arr_5 [i_1] = ((/* implicit */long long int) min((max((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned int) var_3))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))) : (-6164624037110195142LL)))) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_10 [i_2] |= ((/* implicit */unsigned int) arr_1 [i_2] [i_2]);
            arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)11983)), (1847878632U)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_3]), (arr_3 [i_1])))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)10)))), (((/* implicit */int) arr_0 [(_Bool)1] [i_3]))))) : (var_10)));
            arr_14 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7LL))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_16 [i_4] [i_4 + 1])) ? (((/* implicit */long long int) arr_17 [i_4])) : (arr_16 [(signed char)15] [(signed char)15]))), (var_12))) < (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 3187286469U)) : (5LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -120367342783522667LL))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                arr_23 [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) 663665367);
                arr_24 [i_4] [i_4] [i_4] &= ((/* implicit */signed char) ((unsigned short) arr_22 [i_6 + 1] [(_Bool)1]));
                var_21 = ((/* implicit */unsigned short) arr_20 [i_4]);
            }
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_22 = var_14;
                arr_28 [i_4 - 1] [i_4 - 1] [i_4 + 1] [19U] = ((/* implicit */signed char) (_Bool)1);
                arr_29 [i_7] [i_5] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [(_Bool)1] [i_7]))) : (arr_16 [i_5 + 1] [i_7]))), (((((/* implicit */_Bool) var_3)) ? (arr_22 [i_4] [0U]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            }
            for (int i_8 = 4; i_8 < 22; i_8 += 4) 
            {
                arr_32 [i_8] [i_4] [i_4] = ((/* implicit */unsigned short) (+(arr_19 [i_4] [i_4] [(signed char)18])));
                arr_33 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_16 [i_5 + 3] [(signed char)4]);
                var_23 -= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (var_15)))) << (((/* implicit */int) ((((((/* implicit */long long int) arr_17 [i_8 - 1])) + (var_12))) > (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8 + 1] [i_4 - 1] [i_5 + 1] [i_5]))))))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_38 [i_4] [i_5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-63)) && (((/* implicit */_Bool) arr_22 [i_4 - 1] [i_5 - 1]))));
                arr_39 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) 6164624037110195142LL);
            }
            arr_40 [i_4 - 1] [i_4 - 1] [i_4 - 1] = arr_26 [i_4] [i_4] [i_5] [i_5 + 1];
        }
        for (int i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                arr_49 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_11 - 2] [8] [(unsigned short)21] [i_4])) ? (((/* implicit */unsigned int) 465999236)) : (((((((/* implicit */_Bool) (signed char)-51)) ? (1107680827U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4]))))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_52 [i_4] [i_10] [i_11] [i_11] [i_12] [1U] = ((/* implicit */unsigned int) (signed char)40);
                    arr_53 [i_11] [(signed char)22] = ((/* implicit */unsigned short) -663665367);
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (-38429256))))));
                }
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    arr_56 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_11] [i_13] &= ((/* implicit */unsigned int) arr_43 [i_10]);
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), ((~(arr_55 [11LL] [(unsigned short)9] [i_11 - 1] [(unsigned short)9])))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_35 [i_11] [(signed char)15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))) : (min((((/* implicit */unsigned int) (unsigned short)49152)), (432651150U)))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    var_26 = ((((/* implicit */_Bool) arr_19 [i_10 + 1] [i_4 - 1] [i_11 + 2])) ? (arr_19 [i_10 - 1] [i_4 - 1] [i_11 + 1]) : (arr_19 [i_10 + 1] [i_4 - 1] [i_11 - 1]));
                    var_27 += ((/* implicit */int) arr_43 [(signed char)18]);
                    arr_60 [i_4] [3U] [14LL] [i_11] = ((((/* implicit */_Bool) (-(5LL)))) ? (((((/* implicit */long long int) 566240222U)) - (-6LL))) : (((((/* implicit */_Bool) arr_21 [i_4])) ? (5LL) : (((/* implicit */long long int) 1955005922U)))));
                }
                var_28 = min((((/* implicit */long long int) (~(arr_35 [(_Bool)1] [i_11])))), (min((arr_22 [i_4 - 1] [i_10 - 1]), (arr_22 [i_4 + 1] [(signed char)18]))));
            }
            for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                var_29 = ((/* implicit */signed char) min(((-(arr_46 [i_4 - 1] [i_10 - 2] [i_10 - 2] [i_10 + 1]))), (((unsigned int) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    arr_66 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4]))) : (arr_27 [i_4 + 1] [i_4 + 1])));
                    arr_67 [i_4] [i_4] [1] [i_4 + 1] [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) ((signed char) arr_21 [i_4 + 1]));
                    arr_68 [i_4 + 1] [2LL] [(_Bool)1] = ((/* implicit */signed char) (~(arr_54 [i_4] [i_16] [i_10 - 2] [i_4 - 1] [i_4])));
                    arr_69 [i_4] = arr_41 [19] [i_4];
                }
                var_30 = ((/* implicit */unsigned int) (((_Bool)1) ? ((+(max((((/* implicit */long long int) arr_46 [i_4] [i_4 + 1] [i_4] [i_15])), (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_43 [i_10 - 1]), (arr_43 [i_10 - 1])))))));
                arr_70 [i_4] = ((/* implicit */int) arr_18 [i_15] [i_4 + 1]);
            }
            for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) max((var_11), (((/* implicit */long long int) arr_58 [i_4] [i_10 + 1] [i_4] [i_17])))))) < (((/* implicit */int) ((unsigned short) ((unsigned int) arr_62 [i_4] [i_10] [i_17])))))))));
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (!((_Bool)1))))));
            }
            var_33 -= max((min((arr_72 [i_4 - 1] [i_10] [i_4 + 1]), (arr_72 [i_4 - 1] [i_10] [i_4 - 1]))), ((-(((/* implicit */int) (signed char)86)))));
            arr_75 [i_10] [i_4] [i_4] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_10] [i_4 + 1] [i_4 + 1]))));
            var_34 = ((/* implicit */long long int) (+(arr_41 [i_4 - 1] [i_10])));
        }
    }
    var_35 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
    var_36 = var_8;
}
