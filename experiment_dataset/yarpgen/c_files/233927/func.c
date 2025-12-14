/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233927
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_5)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (14674511643542023584ULL)))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_5))), (((/* implicit */unsigned long long int) (short)0)))) : (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)69))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (12668241962285322975ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) : (arr_1 [i_0 + 3])));
        var_11 = ((/* implicit */long long int) (-(4294967295U)));
        arr_4 [i_0] [i_0 + 4] = ((/* implicit */unsigned long long int) (-(max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (13764953645935647542ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (var_8))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) << (((1984U) - (1984U))))), (((/* implicit */int) (unsigned char)89))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_16 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */int) min((arr_6 [i_3 - 2]), ((+(var_5)))));
                    arr_17 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(9223372036854775807LL)));
                    var_12 = ((/* implicit */signed char) 12668241962285322987ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((1034400201), (((/* implicit */int) var_4)))), (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_4)))) & (((/* implicit */int) arr_10 [i_3 + 1])))))));
                                arr_25 [i_1] [i_1] [i_5] [i_4] [i_5 + 1] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_4 - 1] [i_5 + 2])), (17200447141983951501ULL)));
                                var_14 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_9)), (163978615U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */int) max((5778502111424228640ULL), (((/* implicit */unsigned long long int) max((((((arr_11 [i_1]) + (2147483647))) >> (((9223372036854775807LL) - (9223372036854775798LL))))), (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
    }
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 23; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_37 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) max((((arr_32 [i_6 + 2] [i_6 + 1]) << (((arr_32 [i_6 - 3] [i_6 + 2]) - (3229000046100500677ULL))))), (min((((/* implicit */unsigned long long int) arr_26 [i_8])), (((unsigned long long int) (_Bool)1))))));
                            arr_38 [i_6 - 1] [i_6 - 3] [i_6] [i_6 - 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((signed char)-80), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)55070)) * (((/* implicit */int) var_2)))) - (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_30 [i_6 - 1] [i_7 + 2] [i_7 + 2] [i_6 - 1]))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) arr_28 [i_6]);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_5);
    var_18 = ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (var_9)))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) max(((signed char)115), (((/* implicit */signed char) (_Bool)0)))))))) : (max((((/* implicit */int) var_1)), (var_9))));
}
