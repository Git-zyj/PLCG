/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235155
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) (signed char)-9);
        var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (max((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((((/* implicit */_Bool) ((unsigned short) var_19))) ? (min((var_3), (((/* implicit */unsigned long long int) var_12)))) : (arr_1 [i_0] [12LL])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 3902264875U))));
        var_23 = ((/* implicit */int) ((short) arr_3 [i_1]));
        arr_4 [i_1] = ((/* implicit */unsigned long long int) arr_2 [11]);
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [(unsigned char)7] [(_Bool)1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_3 + 1])), (arr_7 [i_2] [i_2]))), (((/* implicit */unsigned long long int) max((var_13), (arr_3 [i_3 - 1]))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)473)), ((~(var_1))))))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 392702420U)) ? (((/* implicit */long long int) 983290273U)) : (8317534902650490391LL)))), (max((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_1)))))));
    }
    var_25 |= ((/* implicit */int) ((signed char) ((short) var_13)));
}
