/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226207
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) min(((short)3435), (((/* implicit */short) arr_0 [(unsigned char)0]))))) && (((/* implicit */_Bool) ((short) 138369716)))))));
        var_10 = ((/* implicit */int) (short)3426);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) arr_0 [i_0])));
        arr_4 [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (max((((((/* implicit */_Bool) (short)3431)) ? (1713461688) : (((/* implicit */int) (unsigned char)102)))), (min((1713461671), (((/* implicit */int) (short)3940)))))) : (((/* implicit */int) ((arr_1 [i_0]) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)19]))) & (arr_1 [(_Bool)0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2])), (var_0)))))))) : (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) + (arr_1 [22ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [(short)8])))))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_0 [i_0]))));
                    arr_11 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_9)), ((unsigned short)4269))), (((/* implicit */unsigned short) ((unsigned char) (short)-22785))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_13 ^= ((((/* implicit */_Bool) (short)-3966)) ? (((/* implicit */int) (((~(((/* implicit */int) arr_12 [i_3] [i_3])))) != (((/* implicit */int) (unsigned char)144))))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? ((-(((/* implicit */int) (unsigned char)154)))) : (((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) % (((/* implicit */int) (short)-3451)))))));
        arr_14 [i_3] |= ((/* implicit */signed char) min(((+((-(10931528493246376953ULL))))), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) arr_7 [i_3] [i_3])), (10931528493246376931ULL)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((arr_17 [(unsigned char)9] [(unsigned char)9]) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1])))))));
                    arr_22 [i_5] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5 - 1] [(_Bool)1])) ? (((/* implicit */int) var_1)) : (arr_15 [i_6])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)103))))))));
                    var_15 = ((/* implicit */int) min((var_15), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_0)))) ? (((/* implicit */int) ((10931528493246376955ULL) != (((/* implicit */unsigned long long int) -7264775218061052209LL))))) : (((/* implicit */int) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 274877906943ULL)) ? (16556181633499458106ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_4]) : (arr_15 [i_4])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)108)))) : (((/* implicit */int) arr_18 [i_4])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 4; i_10 < 23; i_10 += 2) 
                    {
                        {
                            arr_34 [i_4] [(unsigned char)14] [i_9] [(unsigned char)14] = ((((/* implicit */int) min((arr_17 [i_10 - 1] [i_7 - 1]), (((7564956557623922604ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))))) < (((/* implicit */int) arr_23 [i_8])));
                            var_17 ^= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) (unsigned char)63))))), (((((/* implicit */_Bool) (short)32765)) ? (arr_31 [21LL] [i_7] [5] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)184)))))));
                        }
                    } 
                } 
            } 
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_15 [i_7 - 1]) >> (((((/* implicit */int) (short)-2696)) + (2697)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])) || (((/* implicit */_Bool) (unsigned char)157))))) : (((/* implicit */int) var_3))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((_Bool) arr_19 [i_4] [i_7 - 1] [i_7] [i_4])) ? (((/* implicit */int) max((arr_19 [i_4] [i_7 - 1] [i_4] [i_4]), (arr_19 [i_4] [i_7] [(_Bool)1] [i_4])))) : (((/* implicit */int) arr_19 [i_4] [(_Bool)1] [i_7] [i_4])))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_19 [(short)14] [(_Bool)1] [i_4] [i_4]))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_37 [i_4] [(_Bool)1] [i_4] |= ((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */int) arr_24 [i_4] [i_4])) < (2078482307))) && (((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_11 - 1]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3926))) >= (2286578048737702301ULL))) ? (arr_15 [i_4]) : (((/* implicit */int) (unsigned char)86))))));
            var_21 *= ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)68)))), (((/* implicit */int) (short)-21557))));
        }
        var_22 = ((/* implicit */unsigned char) arr_17 [i_4] [(_Bool)1]);
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_23 -= ((unsigned char) (!(((/* implicit */_Bool) (short)21547))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_26 [i_12]))));
    }
    var_25 *= ((/* implicit */_Bool) (short)-3932);
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_7))));
}
