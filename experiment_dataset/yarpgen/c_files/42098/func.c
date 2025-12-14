/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42098
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_1 + 1]))));
                        var_20 = ((/* implicit */unsigned short) arr_2 [i_0 - 2] [i_0 - 2] [i_2]);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13424)) + (((/* implicit */int) (unsigned short)65528))))) ? (arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)12748)) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
                        arr_8 [i_2] = ((/* implicit */short) arr_0 [i_0]);
                    }
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        arr_11 [i_2] [14ULL] [i_2] [14ULL] [i_4] = ((/* implicit */long long int) var_15);
                        arr_12 [i_2] = ((/* implicit */int) (+(-24LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            arr_15 [i_2] [i_1] = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << ((((-(((/* implicit */int) ((unsigned short) arr_4 [(short)15] [i_2] [i_0 + 1] [i_2]))))) + (60908)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << ((((((-(((/* implicit */int) ((unsigned short) arr_4 [(short)15] [i_2] [i_0 + 1] [i_2]))))) + (60908))) - (19911))))));
                            var_22 &= ((/* implicit */long long int) arr_10 [i_0 - 3] [2U] [i_0] [i_0] [i_0 - 3] [i_0 - 3]);
                            var_23 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) var_12)), (arr_10 [i_1] [i_1] [i_2] [i_1 - 2] [i_1 + 1] [i_1])))));
                        }
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((-34LL), (((/* implicit */long long int) var_7))))), (arr_13 [i_0] [i_0 - 1] [i_0 - 3] [i_1 - 3] [i_0] [i_0] [i_2 + 1])))))))));
                        var_25 = ((/* implicit */unsigned short) arr_14 [i_0 - 4] [i_1 - 3] [i_1] [i_1] [i_2] [i_4] [i_2]);
                    }
                    arr_16 [i_0] [4ULL] [i_2] [i_1] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (unsigned short)20809)), (min((((/* implicit */int) (signed char)-72)), (-834966271)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((int) (signed char)127));
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 4; i_6 < 24; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_19 [i_6 - 1]), (((/* implicit */unsigned long long int) (unsigned short)44730)))))) ? (((/* implicit */int) max((arr_17 [i_6] [i_6]), (arr_17 [i_6 - 3] [i_6 - 3])))) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44720))))))));
        var_28 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-5))));
    }
    var_29 ^= ((/* implicit */short) ((((/* implicit */long long int) -2055639269)) > (33LL)));
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [18ULL])), ((unsigned short)28299))))) : (((var_17) ? (var_10) : (((/* implicit */unsigned long long int) var_11))))))) ? (((((/* implicit */_Bool) ((((-1344013214304130870LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)73)) - (73)))))) ? (((34225520640ULL) % (((/* implicit */unsigned long long int) arr_22 [i_7])))) : ((~(var_2))))) : (min((((/* implicit */unsigned long long int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71)))))), (max((((/* implicit */unsigned long long int) var_4)), (arr_21 [i_7])))))));
        arr_25 [i_7] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    }
}
