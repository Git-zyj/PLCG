/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24657
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
    var_19 = ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((11528786330456633474ULL) + (((/* implicit */unsigned long long int) 2273088950U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (9223372036854775807LL))))) & (min((1787765420U), (((/* implicit */unsigned int) arr_1 [0]))))))) : (var_2))))));
            var_21 = ((/* implicit */_Bool) max((max((17999609378136742157ULL), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15)))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((_Bool) arr_4 [i_0])))));
        }
        var_23 = ((/* implicit */long long int) 3759296205021139510ULL);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) (!((_Bool)0)));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_14)) ^ ((~(((7284768687824863757LL) >> (((/* implicit */int) (_Bool)1)))))))))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            var_27 *= ((/* implicit */unsigned char) min((((max((arr_11 [i_4]), (((/* implicit */int) (unsigned char)155)))) >> (((((/* implicit */_Bool) arr_10 [(unsigned short)14] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_2] [(_Bool)1] [(unsigned char)1]))))), (((((/* implicit */_Bool) (short)8064)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)20))))));
            var_28 = ((/* implicit */long long int) max((max((9279742462500872218ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) arr_8 [i_4] [(unsigned char)7]))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) (unsigned char)60);
            arr_17 [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)5)))), (((/* implicit */int) (signed char)1))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)230)))))));
        }
        arr_18 [(signed char)4] [i_2] = ((/* implicit */unsigned int) (unsigned char)81);
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_31 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_6]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (2273088939U) : (((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6])))))))), (max((var_5), (((/* implicit */unsigned int) arr_0 [i_6]))))));
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_23 [0] [i_6] = ((/* implicit */unsigned long long int) ((((2471648441U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6])))));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (min((((/* implicit */unsigned int) ((short) 18446744073709551607ULL))), (1073741824U)))));
            arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (-(max((max((((/* implicit */unsigned long long int) -1)), (0ULL))), (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_3 [i_6] [i_6])))))))));
            arr_25 [i_6] [i_7] |= ((/* implicit */signed char) (_Bool)1);
        }
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
        {
            arr_29 [i_6] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned short)65535))));
            var_33 += ((((/* implicit */_Bool) ((var_18) - (((/* implicit */long long int) 4294967269U))))) ? (((137438953471LL) / (((/* implicit */long long int) var_7)))) : (((long long int) 428496476U)));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_33 [i_6] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [(_Bool)1] [i_6]))) ^ (arr_15 [i_9])));
            arr_34 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (8388607) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)144)) < (arr_32 [i_6]))))));
        }
        var_34 = ((/* implicit */short) var_16);
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 10; i_10 += 3) 
    {
        var_35 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 30U)) ? (-1) : (((/* implicit */int) arr_1 [14ULL])))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_36 = ((/* implicit */_Bool) ((arr_37 [i_11] [i_10 + 3]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10 + 3])))));
            var_37 *= ((/* implicit */long long int) arr_0 [i_11]);
            var_38 += ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -7336375532806815624LL)))) ? (-1713941271) : (var_13)));
        }
        arr_40 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
    }
    var_39 |= ((/* implicit */unsigned char) var_8);
}
