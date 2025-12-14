/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50257
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) << (((/* implicit */int) arr_0 [i_0]))));
        var_16 *= ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((arr_1 [3ULL]) ? (((((/* implicit */_Bool) 8778913153024LL)) ? (9107182983232764784ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((8778913153024LL) | (9223372036854775805LL)))) ^ (9107182983232764784ULL));
        arr_3 [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_1 [i_0])), (var_0)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (-(((((-8778913153025LL) + (-3444950528363007208LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-8)) != (((/* implicit */int) (_Bool)1))))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)28492))))), (var_9)));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [3LL] [i_2] [i_1] [i_0])) ? (1610612736) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_6)) : ((~(((int) var_14))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            {
                arr_15 [i_5] [i_4] [i_4 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((int) (short)28495));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32756))))), (18446744073709551615ULL)));
                            var_22 = ((long long int) ((((/* implicit */_Bool) (short)-30007)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30028)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (_Bool)1))))) : (((4391384047418905671ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4])))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-6559))) / (-3444950528363007216LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
