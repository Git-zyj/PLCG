/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23986
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) var_0);
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((signed char) min((arr_0 [i_0]), (((/* implicit */short) var_7)))))) : (((int) arr_2 [i_1] [i_1]))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((var_6), (var_3)))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 1])) : (arr_1 [(unsigned short)13]))));
                var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_13 = var_8;
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_15 = ((/* implicit */long long int) arr_10 [i_2]);
        var_16 &= ((/* implicit */long long int) arr_9 [(signed char)12]);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max(((~(arr_9 [8LL]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(var_8))))));
        arr_14 [i_3 + 1] &= (!((!(((/* implicit */_Bool) var_11)))));
        arr_15 [i_3] = ((/* implicit */short) ((((unsigned int) var_4)) << ((((-(((/* implicit */int) (unsigned char)46)))) + (56)))));
        var_19 = ((/* implicit */long long int) ((signed char) (~(arr_9 [(unsigned char)24]))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */int) arr_13 [i_3 - 1])) : (((/* implicit */int) (_Bool)0))));
    }
}
