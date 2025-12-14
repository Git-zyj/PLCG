/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45446
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 |= ((/* implicit */unsigned short) var_6);
        var_15 = ((/* implicit */unsigned long long int) max(((unsigned short)65520), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_16 ^= ((/* implicit */long long int) ((unsigned short) ((unsigned short) arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)5)) ^ (((/* implicit */int) (unsigned short)65499)))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) ((-3464716199500195151LL) >= (3464716199500195148LL))))) * (((long long int) (unsigned short)19)))), (max((((((/* implicit */_Bool) -3464716199500195178LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1] [11ULL] [i_1]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned short) (unsigned short)17295))))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) (unsigned short)0);
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_4]);
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_4] [i_0] [i_4])) >> (((arr_1 [i_4]) - (11593075600821099989ULL)))));
        }
    }
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        arr_14 [i_5] [i_5] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5 - 1]))))))));
        arr_15 [i_5 + 1] [i_5 - 1] |= var_0;
        arr_16 [i_5 + 1] [i_5 + 1] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_5])) != (((/* implicit */int) ((unsigned short) arr_13 [i_5 - 1]))))))) & (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 + 1] [i_5])))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34397))) < ((-9223372036854775807LL - 1LL)))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)51)));
    }
    var_24 = (((~(var_10))) % (var_3));
    var_25 -= 3464716199500195143LL;
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 0LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) : (var_13))))));
}
