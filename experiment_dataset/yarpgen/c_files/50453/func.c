/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50453
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25206)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25208))))) : (7532600466416228233ULL))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2296260064235404897LL)) ? (7904241533037446330LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40230)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (6759470203283381795LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25218)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) -8382510352751142906LL)) ? (-83551532105194297LL) : (4095LL));
                        arr_14 [3LL] = ((/* implicit */unsigned char) (((_Bool)0) ? (-8481908599437656303LL) : (1844266736739943665LL)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_18 [(unsigned char)6] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) 9223372036854775807LL);
                        arr_19 [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1207842053057706676LL)) ? (-3254372245753694547LL) : (((/* implicit */long long int) 1507501846U))))) ? (750235026U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3174511356765884204LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-39)))))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36877037754155350LL)) ? (15595203325008095940ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (-6870769456160687995LL) : (((((/* implicit */_Bool) -3090911079720754812LL)) ? (7343577898738943067LL) : (-1LL))));
                        arr_20 [i_0] [i_1] [6LL] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32756))) : (83551532105194296LL)))) ? (((/* implicit */unsigned long long int) 7527112579530185963LL)) : (18446744073709551590ULL)));
                        arr_21 [22LL] [22LL] [22LL] [(_Bool)1] [i_2] [i_4] = ((/* implicit */unsigned int) (short)25205);
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8608678060217654199LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8494))) : (3090046984U)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (7532600466416228233ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            {
                arr_28 [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1819456118U)))) ? (((((/* implicit */_Bool) 524287ULL)) ? (1048575LL) : (((/* implicit */long long int) 4294967295U)))) : ((((_Bool)1) ? (((/* implicit */long long int) 1507501854U)) : (7527112579530185963LL)))));
                arr_29 [(_Bool)1] = ((/* implicit */unsigned short) (_Bool)1);
                var_17 ^= ((/* implicit */unsigned short) 2851540748701455663ULL);
                arr_30 [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4291786792816536572LL)) ? (2567663219445501273LL) : (-7043795254990471975LL)))) ? (-9LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 15595203325008095940ULL)) ? (1339693418U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))));
            }
        } 
    } 
}
