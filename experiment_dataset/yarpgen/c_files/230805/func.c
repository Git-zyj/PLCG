/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230805
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4))))) ? (((long long int) arr_0 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (-819550936470946678LL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_13 |= ((/* implicit */signed char) ((((-202671669705968342LL) + (2253203397330249200LL))) | (((/* implicit */long long int) arr_5 [i_0] [(unsigned char)10] [i_1 + 1] [i_3]))));
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        var_14 = ((/* implicit */short) ((4294967287U) + (var_5)));
                    }
                    for (int i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0U)) ? (0LL) : (((/* implicit */long long int) 425775377U)))) - (((long long int) var_0))));
                        arr_16 [10LL] [i_0] [i_2] [i_0] = ((/* implicit */short) ((arr_3 [i_1 + 1] [i_0]) - (arr_3 [i_1 + 1] [i_0])));
                    }
                    arr_17 [i_0] [(signed char)12] [i_2] [i_0] = ((/* implicit */long long int) var_3);
                    var_15 = ((/* implicit */long long int) ((short) (unsigned short)8814));
                    var_16 = ((/* implicit */long long int) (unsigned short)56720);
                    var_17 = ((/* implicit */short) 0U);
                }
            } 
        } 
        var_18 += ((/* implicit */_Bool) (~(arr_2 [i_0] [2LL])));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_20 [(signed char)0] |= ((/* implicit */_Bool) ((unsigned int) -1LL));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) 641291612);
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2037186599U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)8])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)0)) << (0LL)))) : (((long long int) var_8))));
            arr_24 [i_5] = ((/* implicit */long long int) ((int) 8295805459848232212LL));
        }
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_20 *= ((/* implicit */short) (~(-643420003)));
            arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_5] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_2)))))));
        }
        arr_28 [i_5] = ((/* implicit */unsigned char) 0LL);
        var_21 = ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 4294967295U)))))) : (arr_5 [i_5] [i_5] [i_5] [(signed char)14]));
    }
    var_22 = ((/* implicit */long long int) (unsigned short)8839);
    var_23 = ((/* implicit */signed char) 768U);
    var_24 = ((/* implicit */signed char) var_0);
}
