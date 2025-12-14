/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35102
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
    var_18 += ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)113)) + (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (-714183062)))) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (-1854471478))) : (((/* implicit */int) ((short) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-11060)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [(_Bool)1])))))));
        arr_3 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((arr_1 [i_0]) ? (-5255434424099118983LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) << (((min((((/* implicit */unsigned int) (short)32044)), (3054542202U))) - (32016U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) ((_Bool) 1288452203))))))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((((arr_1 [i_0]) ? (-5255434424099118983LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (9223372036854775807LL))) << (((((min((((/* implicit */unsigned int) (short)32044)), (3054542202U))) - (32016U))) - (28U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) ((_Bool) 1288452203)))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_7 [i_1] [i_2] [i_1])))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_3])) ? (arr_4 [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9225))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3])) ? (-8360328876273582546LL) : (1LL)))))));
                    arr_12 [(short)18] [i_2] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_7 [i_1] [i_1] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2 - 2] [i_1]))))) && (((/* implicit */_Bool) ((arr_9 [i_2] [i_2 + 1] [i_2]) ^ (((/* implicit */unsigned long long int) -1448368647))))))))));
                    arr_13 [i_2] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [13ULL] [13ULL])), ((((_Bool)1) ? (((/* implicit */int) (signed char)-103)) : (arr_10 [i_1] [i_2] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_2]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9LL)))))) : (arr_4 [i_2] [i_3]));
                }
            } 
        } 
        var_19 = ((/* implicit */short) -6LL);
        var_20 = ((/* implicit */int) ((_Bool) max((((short) -18LL)), (((/* implicit */short) (signed char)92)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
        arr_17 [i_4] = ((/* implicit */short) (_Bool)1);
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) arr_14 [i_5])))))) : (min((((/* implicit */unsigned long long int) (signed char)77)), (arr_7 [i_5] [i_5] [i_5]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) arr_20 [i_5] [i_5])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_21 = arr_14 [i_5];
                        arr_33 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_5] [i_5] [i_7] [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48225))))) : (((arr_9 [i_7] [i_6] [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [17ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (_Bool)1)) : (1)))) : (((((/* implicit */_Bool) arr_27 [i_7] [16ULL] [1LL] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (2547503227410509843ULL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_23 = (+(((/* implicit */int) ((signed char) (signed char)-112))));
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_18 [0] [i_5]))) ? (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_6]))) : (((unsigned long long int) arr_26 [i_5] [i_5]))));
                        arr_39 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9 - 1] [i_9 - 1])) ? (arr_10 [i_6] [i_9 - 2] [i_9 - 2] [i_9]) : (arr_10 [(signed char)5] [i_9 - 3] [i_9 - 1] [i_10])));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((15899240846299041768ULL) * (17041268190126590908ULL)));
        }
        arr_40 [i_5] = ((/* implicit */unsigned long long int) -21LL);
    }
    var_26 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | ((~(var_15)))))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) || (var_1)));
    var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_1) ? (-1809968861) : (((/* implicit */int) ((((/* implicit */_Bool) 1818637987)) && (((/* implicit */_Bool) var_0)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) / (((unsigned long long int) (signed char)97))))));
}
