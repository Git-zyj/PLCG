/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208480
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
    var_18 = ((/* implicit */_Bool) (+(max((min((13909208077203978979ULL), (4537535996505572628ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) (~(-1))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) max((13909208077203978988ULL), (13909208077203978979ULL)));
                        arr_12 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) 4537535996505572612ULL)) ? (((/* implicit */unsigned long long int) 6670740516882656682LL)) : (6726115470285419450ULL));
                        arr_13 [(short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4537535996505572633ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((4537535996505572633ULL) ^ (1987775106814113971ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((875884710322077659LL) - (875884710322077629LL))))))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_0 [(_Bool)1]))) ? (((((/* implicit */_Bool) var_17)) ? (1987775106814113960ULL) : (4537535996505572633ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)19))))))) : (((unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) (unsigned char)114)) ? (18446744073709551615ULL) : (13909208077203979004ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0LL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 - 1])))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_18 [i_4] = ((short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)3)), (4155863861763519522LL)))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) % (((/* implicit */int) (unsigned char)11))))));
            arr_19 [10LL] [(short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_7)))) ? (((((/* implicit */unsigned long long int) -875884710322077670LL)) & (arr_15 [6LL] [(unsigned char)12] [6LL]))) : (((((/* implicit */_Bool) 16458968966895437628ULL)) ? (1987775106814113960ULL) : (var_10)))))) ? ((((_Bool)1) ? (((((/* implicit */_Bool) 13909208077203978979ULL)) ? (3189823422546494678ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) -6670740516882656701LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1868948671U))))) <= (((/* implicit */int) (_Bool)0))))))));
            arr_20 [i_4] [i_4] [(signed char)13] = (!((!(((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1] [i_0])))));
            arr_21 [6LL] [i_4] [i_0] = ((/* implicit */unsigned char) ((long long int) ((2231415327U) != (2231415327U))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_26 [(unsigned char)7] [(unsigned char)7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11925168815664241745ULL)) ? ((~(-7776974718194472360LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_5] [i_5])))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                arr_29 [i_0] [i_5] [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                arr_30 [i_5] [4] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) arr_15 [i_6] [i_5] [i_6]);
            }
            for (unsigned int i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                arr_34 [i_0] [i_7] [i_7] = ((/* implicit */long long int) arr_17 [i_7] [i_7 - 1] [i_7 - 2]);
                arr_35 [i_7] [8] [i_0] [i_7] = ((/* implicit */signed char) ((var_15) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_36 [i_7] [i_7] [i_7] [i_7 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 + 1])) ? (((/* implicit */int) (unsigned char)87)) : (arr_22 [i_7 - 2])));
            }
        }
        arr_37 [i_0] = ((/* implicit */unsigned short) ((max((arr_3 [i_0]), (arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) ((((4537535996505572617ULL) > (((/* implicit */unsigned long long int) 6352061455068247313LL)))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) ((unsigned short) 3945364232425217943LL)))))) : (min((min((((/* implicit */unsigned long long int) 875884710322077631LL)), (4537535996505572636ULL))), (((/* implicit */unsigned long long int) ((_Bool) (-9223372036854775807LL - 1LL))))))));
        arr_38 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_10 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) 2337519695461265454ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 2337519695461265454ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (524287ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) arr_10 [i_0] [i_0] [12ULL])))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
    {
        arr_42 [i_8] [13ULL] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) var_17)), (16458968966895437644ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4241792601188228996LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        arr_51 [i_11] [i_9] [i_10] [i_9] [i_8] &= ((/* implicit */unsigned short) (+(((arr_33 [i_8] [i_9] [(unsigned char)6] [i_9]) ? (((/* implicit */unsigned long long int) 2861823046U)) : (max((4537535996505572654ULL), (((/* implicit */unsigned long long int) arr_23 [i_8]))))))));
                        arr_52 [i_8] [i_9 - 1] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) min((536346624ULL), (max((((/* implicit */unsigned long long int) (~(var_15)))), (((((/* implicit */_Bool) 875884710322077659LL)) ? (1816987918945011981ULL) : (((/* implicit */unsigned long long int) 3537735671546111803LL))))))));
                        arr_53 [i_8] [i_8] [i_8] [i_8] [i_11] = ((/* implicit */unsigned char) min((var_16), (max((9223372036854775807LL), (((/* implicit */long long int) arr_9 [5LL] [i_9 - 2] [5LL] [i_11] [i_11]))))));
                    }
                } 
            } 
            arr_54 [i_8] [i_9] [i_8] = ((/* implicit */long long int) (~(((unsigned long long int) min((16109224378248286162ULL), (((/* implicit */unsigned long long int) var_4)))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_58 [i_8] [i_12] [i_8] = ((/* implicit */_Bool) var_6);
            arr_59 [(short)4] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_22 [i_8])) : (2065790670593933226LL)))) != (min((((((/* implicit */_Bool) 875884710322077659LL)) ? (524283ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))))), (((/* implicit */unsigned long long int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_68 [i_12] = ((/* implicit */int) min((((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */unsigned long long int) 8848373490642162386LL)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_44 [i_8] [i_8])) != (arr_45 [i_8])))) / ((~(((/* implicit */int) var_7)))))))));
                        arr_69 [i_8] [i_12] [i_13] [i_13] &= ((/* implicit */short) (-(16036596617967255754ULL)));
                    }
                } 
            } 
        }
        arr_70 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(max((875884710322077659LL), (((/* implicit */long long int) arr_60 [i_8] [i_8] [i_8]))))));
    }
    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))))));
}
