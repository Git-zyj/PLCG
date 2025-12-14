/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25616
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        arr_2 [i_0] |= ((/* implicit */long long int) min(((((_Bool)1) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned int) ((short) arr_0 [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? ((~(((/* implicit */int) ((_Bool) var_16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (1ULL)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? ((~(var_13))) : ((+(11580900026457380121ULL)))));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))))))))));
        var_22 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((~(var_11)))))), (6865844047252171494ULL)));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) / ((+(5557043526772336078ULL))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) var_4)))));
                    arr_15 [i_2] [i_3] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */long long int) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))) > (arr_13 [i_2] [i_2] [i_2]))))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))) > (arr_13 [i_2] [i_2] [i_2])))) - (1))))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [i_2 - 2] [i_6 + 1]), (arr_8 [i_2 + 1] [i_6 + 1]))))));
                                arr_21 [i_3] [i_3] &= ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((((/* implicit */unsigned long long int) -6118086158319521162LL)) >= (18446744073709551608ULL)))))), (((/* implicit */int) ((11580900026457380121ULL) < (((((/* implicit */_Bool) 1ULL)) ? (8ULL) : (((/* implicit */unsigned long long int) arr_10 [i_3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */int) min((arr_1 [i_2 + 1]), (((/* implicit */short) arr_6 [i_2] [i_2 - 2]))))) + (((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2])) - (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2]))))));
        arr_22 [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2])) : (min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])), (8ULL)))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) 1938334798952130168LL))));
        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (((unsigned int) 18446744073709551614ULL)) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)166)) >> (((4360207383285000045LL) - (4360207383285000036LL))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) max((((((((int) 6865844047252171495ULL)) + (2147483647))) << (((((((/* implicit */_Bool) 6620151946990431524ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (18446744073709551609ULL))))), (-1939779906)));
    /* LoopSeq 1 */
    for (long long int i_8 = 3; i_8 < 11; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((int) 11580900026457380121ULL));
                        var_30 = ((/* implicit */int) var_12);
                        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) ^ (18446744073709551614ULL));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (!(((/* implicit */_Bool) -1180356461)))))));
                    }
                } 
            } 
        } 
        var_33 ^= ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
        arr_37 [i_8] = ((/* implicit */unsigned long long int) arr_6 [i_8] [i_8]);
    }
}
