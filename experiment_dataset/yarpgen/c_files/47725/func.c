/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47725
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8369944639722408823LL)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 442582804135326342ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2988191428245285202LL))))));
        arr_3 [i_0] [i_0] |= (-(arr_1 [(_Bool)1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)68)) ? (((/* implicit */int) var_0)) : (var_9)))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45275))) : (18446744073709551593ULL)))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_4);
        var_12 = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) arr_8 [4LL]);
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((int) 3015133025506145397ULL)) != (((/* implicit */int) var_0)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((var_7) / (((/* implicit */int) (_Bool)1))));
                        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) (-(((14512000575319597747ULL) % (3122031355260308113ULL)))));
                        arr_21 [i_4] [i_5] [i_4] [i_3] [i_4] = (-(((/* implicit */int) (short)-20490)));
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_4] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (var_9) : (((/* implicit */int) var_5))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned long long int) var_5);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 1682390449))));
    }
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> ((((~(var_7))) - (1194252016)))))), (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_3)))) ? ((+(var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_6)))))));
    var_17 = var_2;
}
