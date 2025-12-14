/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221677
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
    var_19 = ((/* implicit */unsigned short) var_18);
    var_20 += ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = arr_1 [i_0];
        arr_2 [i_0] = (~(arr_0 [i_0] [i_0]));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        arr_7 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 + 2] [i_1]))))) ? (((/* implicit */int) arr_4 [i_1 + 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)16])))))));
        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_5 [i_1 - 2] [i_1 - 1])))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? (arr_6 [9ULL]) : (arr_6 [i_1 + 3])))))));
        arr_9 [i_1] = (+(((((/* implicit */_Bool) arr_6 [i_1 + 3])) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 - 3]))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_24 *= ((((_Bool) arr_12 [i_2 - 1])) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [15ULL]))));
                arr_16 [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3])))) ? (((unsigned long long int) arr_3 [i_3])) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3])))));
                arr_17 [i_2] &= ((unsigned short) (+(((/* implicit */int) ((unsigned short) arr_12 [i_2 - 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_21 [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_10 [i_4]);
        var_25 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) arr_18 [i_4] [i_4])));
        var_26 = ((/* implicit */unsigned long long int) arr_14 [i_4]);
        arr_22 [12ULL] = (!(arr_4 [i_4]));
    }
}
