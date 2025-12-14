/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52889
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
    var_19 = ((/* implicit */long long int) var_12);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15830327168146518853ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29499))) : (15218770712884392639ULL)));
    var_21 = ((/* implicit */unsigned char) var_17);
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)124))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)53453)))) + (-1545627930)));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_1 [i_1 - 1]);
                    var_24 = ((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)12065)) : (((/* implicit */int) var_5))))) == (arr_10 [i_3] [i_2] [i_0] [i_0])));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-125)) == (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_1 - 1] [i_1 - 1]))));
                                var_26 *= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)20965));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -916959361)) ? (arr_12 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */int) (unsigned short)12067))));
        arr_17 [14] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1840467170)) ? (((/* implicit */int) (unsigned short)19308)) : (((/* implicit */int) (unsigned short)4540))))));
    }
    for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) (unsigned char)77)) ? (((int) (unsigned short)23529)) : (min((754033571), (((/* implicit */int) (unsigned char)125)))))))))));
        var_30 ^= ((/* implicit */unsigned int) max(((-(((((/* implicit */int) arr_19 [i_5])) - (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) - (var_14)))))));
        var_31 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_17)) ? (arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_11)))), ((~(arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_5] [i_5])))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 2) 
                {
                    {
                        arr_29 [(unsigned short)9] [i_8] [i_9] = ((/* implicit */unsigned int) ((((-1545627930) - (((((/* implicit */_Bool) 1204973213)) ? (((/* implicit */int) (unsigned short)60995)) : (((/* implicit */int) (unsigned short)50640)))))) < (((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6 - 3] [(signed char)9] [(unsigned short)19] [i_9] [i_9 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27179))))));
                        arr_30 [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_15)))))) ? ((+(((((/* implicit */_Bool) arr_4 [(short)11] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) ((((/* implicit */int) var_1)) > (var_15))))))));
                        arr_31 [i_6 - 1] [i_6] [i_6] [i_7] [8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(152210966)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((var_15) << (((2635239532295194807ULL) - (2635239532295194807ULL)))))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)9)) - (((/* implicit */int) (_Bool)1))))));
    }
}
