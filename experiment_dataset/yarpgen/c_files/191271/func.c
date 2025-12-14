/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191271
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (var_1)))) ? (((unsigned long long int) ((2052364593U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((14316870394466298743ULL) << (((-5532946937870636382LL) + (5532946937870636382LL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [i_3] = ((/* implicit */int) (short)-11667);
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(short)2] [i_2] [(unsigned char)3]))))) << (((arr_1 [i_0]) - (18342964734238048719ULL))))) ^ (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (3496018877U)))))));
                        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (short)-11667)) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_1])))) : (((((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2] [i_3])) ? (var_13) : (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10284))))))))));
                        arr_12 [i_0] [i_3] [i_2] [14LL] = ((/* implicit */signed char) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (-(181047695))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)17))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) arr_17 [i_4] [i_4]);
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [i_4] [i_5] [i_8] [i_6] [i_5] [i_8] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8))))));
                                arr_30 [(signed char)3] [(unsigned short)13] [i_6] [i_4] [i_8] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6831)))))) < ((~(arr_24 [i_4] [i_5] [i_4])))));
                                arr_31 [i_4] [20LL] [(unsigned short)17] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) arr_26 [i_4] [i_5] [i_6] [i_8]);
                                arr_32 [i_7] = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-99))))) ? (1693450027U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))));
                    arr_34 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 2242602702U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((arr_17 [i_4] [i_5]) ^ (arr_20 [i_4] [i_4])))));
                    arr_35 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_4]))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
    {
        arr_40 [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9 - 1] [(short)16])))))));
        arr_41 [i_9] = ((/* implicit */unsigned short) ((min((arr_2 [i_9 + 1]), (arr_2 [i_9 - 1]))) ? ((~(((/* implicit */int) arr_2 [i_9 + 1])))) : ((-(((/* implicit */int) var_3))))));
    }
    var_17 = ((/* implicit */short) var_2);
    var_18 = ((/* implicit */signed char) var_15);
}
