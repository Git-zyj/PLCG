/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216823
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = (-9223372036854775807LL - 1LL);
                arr_7 [i_1] = ((/* implicit */_Bool) -1649173621433147831LL);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) 3452804686003388852LL);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)97);
        var_18 = ((/* implicit */short) max((var_18), ((short)29635)));
        var_19 = ((/* implicit */long long int) (short)-1);
        arr_11 [i_2] |= (_Bool)0;
    }
    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    arr_20 [i_3] = ((/* implicit */_Bool) 10014726019737748684ULL);
                    arr_21 [i_3] [i_3 - 2] [i_4] [i_5] = ((/* implicit */_Bool) 8512646284237463138ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) (_Bool)1);
                    var_20 &= ((/* implicit */_Bool) (short)-11840);
                    var_21 = ((/* implicit */short) (unsigned short)42478);
                }
            } 
        } 
        var_22 -= ((/* implicit */_Bool) -1112325051);
        arr_27 [i_3] [i_3 - 2] = (unsigned short)28292;
    }
    var_23 |= ((/* implicit */unsigned short) (unsigned char)252);
    var_24 = ((/* implicit */short) (unsigned char)252);
    var_25 = (_Bool)1;
}
