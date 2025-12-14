/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25508
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_11)), (967997187U)))))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_1 [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned short)41268);
        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (3326970109U) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (1U))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 967997179U)))))));
                arr_11 [i_1 - 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) 3326970111U)) >= (-433273536312659655LL)));
                var_24 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-24180)));
            }
            var_25 -= ((/* implicit */unsigned char) max(((~(685269753631688618LL))), (((/* implicit */long long int) ((arr_7 [i_1 - 2]) > (arr_7 [i_1 - 2]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_1] [i_4] = (-(min((min((arr_7 [i_1 - 1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_14 [i_4] [i_4])))));
            arr_16 [i_4] = ((((((arr_12 [i_4] [i_1] [i_4]) ? (((/* implicit */int) (short)-7386)) : (((/* implicit */int) (short)610)))) == (((/* implicit */int) max((arr_9 [i_4] [i_1]), (var_8)))))) ? (arr_4 [i_4]) : (((int) 3326970119U)));
            arr_17 [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1])) == (((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) min((var_10), (((/* implicit */short) (_Bool)1))));
            /* LoopSeq 3 */
            for (int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                arr_24 [i_1] [i_5] [i_6] [i_5] = ((/* implicit */short) 4294967282U);
                arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) 3326970108U);
                var_27 = ((/* implicit */int) var_18);
            }
            for (short i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                var_28 = ((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 2] [i_7 + 1]);
                var_29 = ((/* implicit */short) ((((arr_9 [i_7 + 3] [i_1 - 1]) ? (((/* implicit */long long int) 967997185U)) : (arr_1 [i_1 - 2]))) | (((long long int) var_18))));
            }
            for (short i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                arr_31 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((short) (short)-22079))) != (((/* implicit */int) arr_13 [i_1 - 2] [i_8])))))));
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_30 [i_8 - 1] [i_1])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14873))) : (var_12)))))) ? (((((/* implicit */_Bool) arr_7 [i_8 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_7 [i_8 - 2]))) : (((var_0) + (((/* implicit */long long int) ((/* implicit */int) (short)30361)))))));
            }
            arr_32 [i_5] [i_5] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
            var_31 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_19 [i_5])) - (((/* implicit */int) var_2)))));
            var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_27 [i_1 - 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) min((arr_6 [i_1]), (var_18)))) : (((/* implicit */int) arr_27 [i_5] [i_1 - 2] [i_5])))), (((/* implicit */int) ((unsigned short) 17LL)))));
        }
        arr_33 [i_1] = ((/* implicit */long long int) max(((~(max((arr_14 [i_1] [i_1]), (((/* implicit */int) (unsigned short)12)))))), ((~(((/* implicit */int) ((arr_29 [i_1 - 1] [i_1] [i_1 - 2] [i_1]) > (arr_29 [i_1 - 1] [i_1] [i_1 - 2] [i_1]))))))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (967997184U)));
        var_34 = ((/* implicit */long long int) (short)14);
        arr_34 [i_1] = arr_19 [i_1];
    }
    for (int i_9 = 2; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) arr_30 [i_9 - 1] [i_9])))));
        arr_37 [i_9 - 2] [i_9] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(var_17)))), (arr_1 [i_9])));
        var_36 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_36 [i_9 - 2] [i_9])) ? (((/* implicit */int) var_9)) : (arr_0 [i_9])))));
        var_37 = ((/* implicit */unsigned short) (short)22079);
        var_38 = ((/* implicit */short) (_Bool)1);
    }
    for (long long int i_10 = 3; i_10 < 10; i_10 += 4) 
    {
        var_39 *= ((/* implicit */short) max((-6349093815571192454LL), (((/* implicit */long long int) (short)-32761))));
        var_40 = var_15;
    }
    var_41 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(var_16)))), (((((/* implicit */_Bool) max((var_14), (((/* implicit */short) var_1))))) ? (((/* implicit */unsigned int) var_16)) : ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
}
