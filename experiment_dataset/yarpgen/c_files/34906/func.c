/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34906
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)8] &= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (unsigned char)5))))) < (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)5328)))))));
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))))));
        arr_4 [i_0] [i_0] |= ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5329))))) ? (((/* implicit */int) max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) var_6))))) >> (((var_3) - (3540020886U))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) var_4))));
        arr_10 [i_1] = arr_6 [(unsigned char)11];
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */int) (short)-5329)) + (((/* implicit */int) (unsigned char)33)))))));
        arr_14 [i_2] [9] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))));
    }
    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_3]);
        arr_19 [i_3] = ((/* implicit */unsigned char) 1955096590617496022LL);
        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((signed char) 18446744073709551598ULL))), ((unsigned char)255)));
        var_13 = max((((unsigned long long int) 1955096590617496022LL)), (((/* implicit */unsigned long long int) (unsigned char)170)));
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_30 [i_6] [i_5] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) (short)5320)) || (((/* implicit */_Bool) 7896777278665451641ULL))));
                    var_14 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -3614472285916571837LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (7573797631500072183ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) 2876737345U);
        var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) arr_21 [i_4 - 2]))), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((-7244689236967594074LL) < (-7244689236967594074LL))))) : (7244689236967594073LL)))));
        arr_31 [i_4] [i_4 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18ULL)) || (((/* implicit */_Bool) 3671750842U))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (long long int i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */long long int) var_0);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) arr_21 [i_9]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14980)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)-5329))))) ? (18446744073709551597ULL) : (11317663521534232254ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        arr_42 [i_10] = ((/* implicit */long long int) ((4156892516U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        arr_43 [i_10] [i_10] = ((/* implicit */signed char) ((short) (!(((6635018053527985138LL) <= (((/* implicit */long long int) 3671750839U)))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39066)) * (((/* implicit */int) (short)-6856))))) ? (((((((/* implicit */_Bool) (short)6856)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((((((/* implicit */int) (signed char)115)) + (((/* implicit */int) (unsigned char)0)))) - (88))))))));
    var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1731965054U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) (short)-1)) : (-827375510))))));
}
