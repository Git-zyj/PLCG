/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218006
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)5858), (((/* implicit */unsigned short) (short)-20792))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (min((11118999095615824091ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)104))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 6; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9U), (5U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : ((+(3246365330U)))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_20 [i_3] [i_3] [(signed char)6] [i_5] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (_Bool)1)), (5U)))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (-1LL)))) ? ((~(-1LL))) : (((/* implicit */long long int) max((3246365336U), (((/* implicit */unsigned int) (short)-24357)))))));
                        arr_21 [i_3] [i_3] [i_5] [(short)5] = ((/* implicit */unsigned long long int) (~((~((-(4294967282U)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8480360709385786322ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4950342941499183107ULL))))));
                            var_20 = ((/* implicit */unsigned short) (+(0U)));
                            arr_25 [i_3] [i_5] [i_6] [i_5] = (+(13686930179112795891ULL));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            var_21 += ((/* implicit */signed char) (-((((_Bool)1) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))) : (16141364045542739193ULL)))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), ((+(7649802389048601747LL)))))), (((((/* implicit */_Bool) (signed char)-1)) ? (17672968285982595361ULL) : (((/* implicit */unsigned long long int) 1048601958U)))))))));
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -2017873055)), (-6LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((4900792211798719202ULL), (4900792211798719202ULL)))) ? ((-(4294967275U))) : (((/* implicit */unsigned int) -1))))) : (min((-1LL), (((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */long long int) ((/* implicit */int) (short)511))) : (7649802389048601742LL)))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -7649802389048601747LL)) ? (-6205369401749120982LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))), (((/* implicit */long long int) (+(3347772937U))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) -7649802389048601748LL))));
                        }
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(14U))))));
                    }
                }
            } 
        } 
    } 
}
