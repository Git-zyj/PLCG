/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205113
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (+((~(9118704738481653684LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */signed char) var_1);
            /* LoopSeq 3 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 4687267888017740132ULL))));
                var_21 = arr_4 [i_0] [i_1 - 1];
            }
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) (signed char)-92);
                arr_10 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33867))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_3])) : (6421735582495361465ULL)))));
                arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1 - 1]))));
                arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_7);
            }
            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                var_23 *= ((/* implicit */int) ((6421735582495361465ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5372)))));
                var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) * (arr_13 [21U] [(short)11] [i_0])))) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)20] [i_0])))))));
                arr_15 [i_0] = ((/* implicit */unsigned int) ((arr_14 [i_4 - 3] [(short)21] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 - 3] [i_4 - 3] [i_1 + 1]))) : (var_1)));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) var_15);
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (arr_8 [i_0] [i_0] [i_0]))))));
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-127)), (-7320473163430406962LL)))) : (min((((/* implicit */unsigned long long int) max((1033046660), (((/* implicit */int) (signed char)-123))))), (min((10182710525059428026ULL), (((/* implicit */unsigned long long int) (signed char)10))))))));
            var_27 -= ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_3 [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) arr_0 [13U])))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        }
        arr_19 [(short)5] &= ((/* implicit */_Bool) 8479754544717881998ULL);
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_22 [(unsigned short)2] [(signed char)10] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (+(-8486330110136767562LL)))))));
        arr_23 [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(1504310400U))))))) & (((/* implicit */int) (short)-6275))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_7]))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1)))))))));
        var_30 = ((/* implicit */unsigned long long int) arr_20 [i_7]);
        var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7])) ? (1504310400U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7])))));
        var_32 += ((/* implicit */unsigned short) ((unsigned char) arr_16 [i_7]));
    }
    var_33 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -653926467)) ? (((((/* implicit */_Bool) var_5)) ? (5197525539369078520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_14)), (var_9)))))));
    var_34 = ((/* implicit */_Bool) var_8);
    var_35 ^= ((/* implicit */signed char) (((-(((unsigned long long int) (short)6278)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
}
