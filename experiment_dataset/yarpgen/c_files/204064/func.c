/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204064
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
    var_10 |= ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] |= ((/* implicit */short) (-(var_5)));
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((var_6) == (var_6)))) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_1]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
            arr_7 [i_1] [(unsigned char)16] [i_0] = ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4));
        }
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_12 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_3]))))));
                arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(1882364841U)));
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) <= (((/* implicit */int) (signed char)69))));
                var_14 -= ((/* implicit */short) (-(((var_1) / (((/* implicit */unsigned long long int) arr_8 [i_2]))))));
            }
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((var_7) >> (((((/* implicit */int) (signed char)63)) - (34)))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_8))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_6])) <= (((/* implicit */int) (signed char)-83)))))));
                        arr_23 [i_0] [i_2] [i_2] [i_4] [(signed char)14] [i_5] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)39331)) < (((((/* implicit */_Bool) 3762003094U)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)-64))))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) == (var_1))))) % (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2587567955U)) + (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61477))) : (967469340959864908ULL))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)30470))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((1151795604700004352ULL) - (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_4] [i_5]))))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_4])) | ((+(((/* implicit */int) (short)2983))))));
                }
            }
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((arr_28 [i_0] [i_0] [i_2] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((arr_17 [i_0] [i_2] [i_8] [i_8] [i_9]) << (((/* implicit */int) (_Bool)0)))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 1443756061U)) ? (((/* implicit */unsigned int) arr_10 [i_0])) : (33554428U))))));
                    arr_34 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_15 [i_0] [i_8] [i_9]) : (arr_16 [i_2] [i_2] [i_2] [i_9])));
                    var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 196025082)) ? (-8898758662134947521LL) : (((/* implicit */long long int) var_7))))));
                    arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2308070198U)) ? (var_6) : (((/* implicit */int) (short)-22567))));
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) < (0U)))))))));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((arr_16 [i_0] [i_10] [i_0] [i_0]) ^ (arr_16 [i_0] [i_10] [i_2] [i_0]))))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) <= ((~(((/* implicit */int) (signed char)59)))))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_2] [i_0] [i_2] [i_10] [i_10])) ? (((/* implicit */long long int) arr_28 [i_2] [i_2] [i_0] [i_2])) : (arr_31 [i_2] [i_2] [i_2] [i_2])));
            }
            arr_40 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) / (arr_15 [i_0] [i_0] [i_2]))) >> (((((/* implicit */int) (signed char)-10)) + (35)))));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22552)) ? ((~(var_1))) : (((/* implicit */unsigned long long int) (~(arr_8 [i_0]))))));
                var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3750)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_11] [10ULL] [i_0] [i_0])))));
            }
            for (short i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)89)) + (((/* implicit */int) (signed char)115))));
                arr_47 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(10U)));
            }
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            arr_51 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4813)) + (-1)))) ? (2719138210638258260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11697))));
            arr_52 [(signed char)17] [(signed char)17] = ((/* implicit */unsigned int) ((arr_18 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_13])))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_0] [(signed char)2] [i_0] [i_0]) << (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)6]) - (3112562005998064733ULL)))))) ? (((((/* implicit */int) arr_2 [i_0] [i_13] [i_13])) ^ (25))) : (var_6)));
        }
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_35 -= ((/* implicit */signed char) ((4294967292U) + (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0] [i_0]))));
            arr_55 [i_0] [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14] [i_14] [i_0] [i_0]))) + (983333079U)));
        }
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_15] [i_0] [i_15] [i_0])) == (((/* implicit */int) arr_25 [i_0] [i_15] [i_0] [i_15] [i_15] [i_15] [i_0]))));
            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
            var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6754948784397852739ULL)) ? (arr_24 [i_15] [i_15] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        arr_61 [i_16] = ((/* implicit */unsigned char) ((unsigned int) ((8752664726558125464ULL) != (((/* implicit */unsigned long long int) 4294967294U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            var_40 -= ((((/* implicit */_Bool) (unsigned short)0)) ? (var_1) : (((/* implicit */unsigned long long int) arr_43 [i_17] [i_17])));
            var_41 = ((/* implicit */short) ((arr_16 [i_17] [i_16] [i_16] [i_17]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_17] [i_16] [i_16])) || (((/* implicit */_Bool) arr_58 [i_16] [i_16] [(signed char)7]))))))));
        }
    }
    var_42 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_7)))))) < (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) & (((((/* implicit */_Bool) (~(var_2)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (var_2)))))))));
}
