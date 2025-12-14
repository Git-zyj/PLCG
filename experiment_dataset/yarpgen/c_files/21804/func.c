/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21804
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
    var_15 &= ((/* implicit */unsigned long long int) var_9);
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((var_4), (((/* implicit */long long int) 487388468)))), (((/* implicit */long long int) ((signed char) 549755813887ULL)))))), (((var_6) ^ (((unsigned long long int) (_Bool)1))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [(short)21] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1672345114)))) || (((((/* implicit */_Bool) 8343203725987972786LL)) || (((/* implicit */_Bool) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) min(((unsigned char)89), (((unsigned char) arr_2 [i_0]))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) ((short) 2280721943130226657ULL)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (_Bool)1))));
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (+(arr_7 [i_0])))))) ? (((((/* implicit */_Bool) -8343203725987972769LL)) ? (var_11) : (((long long int) var_5)))) : (var_11)));
            var_19 = ((/* implicit */unsigned short) ((long long int) ((unsigned char) (_Bool)1)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_20 -= ((-1780295110) / (((/* implicit */int) var_10)));
            var_21 = ((/* implicit */unsigned short) 18446743523953737718ULL);
            var_22 = ((/* implicit */int) var_2);
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) -8343203725987972787LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7621162628172265601LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11245))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)16112)))));
            var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_17 [i_3] |= ((/* implicit */unsigned long long int) var_4);
        }
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                {
                    var_25 -= ((/* implicit */unsigned char) (_Bool)0);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)143))))) / (min((arr_11 [i_7 - 1] [i_6] [i_7 - 1]), (arr_11 [i_7 - 1] [i_6] [0LL])))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) ((_Bool) 16215787874200243479ULL))) : (max((arr_5 [i_5]), (arr_5 [i_5])))));
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */signed char) ((int) 476365501));
        var_28 &= ((/* implicit */long long int) arr_2 [i_8]);
        var_29 = ((/* implicit */unsigned long long int) ((unsigned int) min((((unsigned long long int) arr_14 [9LL] [8] [i_8])), (((/* implicit */unsigned long long int) ((unsigned short) arr_25 [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_8), (((unsigned short) var_6))))) + (((int) 11864174761096482726ULL))));
}
