/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38151
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
    var_18 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned short)7] = var_7;
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8366167833184092251ULL))) : ((+(var_7)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) <= (15726985585563871667ULL)))), ((~((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)8785))))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */int) var_1);
                    arr_9 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 2719758488145679949ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64378))) : (var_8)));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max(((-(arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1] [i_1] [i_1]))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (arr_5 [i_0] [i_0]) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_3 [i_0] [i_0])))));
        arr_12 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        arr_15 [3LL] = ((/* implicit */_Bool) min((arr_14 [i_3]), (((/* implicit */long long int) ((arr_4 [i_3] [i_3] [i_3]) ? (((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((unsigned short) 15726985585563871636ULL))))))));
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (max((arr_3 [i_3] [i_3]), (arr_13 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3]))))));
        arr_16 [i_3] = 2719758488145679949ULL;
        arr_17 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_3] [i_3]));
    }
}
