/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33165
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
    var_15 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) 809280459)) : (4503599625273344LL))))));
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (3146785883416724498LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 |= ((/* implicit */unsigned short) arr_5 [i_1]);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (arr_5 [i_1]) : (((/* implicit */int) ((short) var_8)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_1] [i_1])) * (((arr_5 [1]) / (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 6; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_10 [i_2] [i_3] = var_7;
            var_21 = ((/* implicit */unsigned int) arr_1 [i_2 + 3]);
            var_22 = (~(((((/* implicit */_Bool) (unsigned short)41809)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (6014988489649815936LL))));
            var_23 += ((/* implicit */long long int) arr_3 [i_3]);
        }
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_2])))))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            {
                arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_4]);
                arr_17 [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((long long int) 3146785883416724493LL)) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_5 - 1])))));
            }
        } 
    } 
}
