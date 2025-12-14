/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229696
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [7LL] = ((/* implicit */unsigned long long int) (short)1740);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = arr_8 [(short)6];
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((long long int) arr_8 [i_1])), ((-9223372036854775807LL - 1LL))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [5] [i_4]) : ((~(arr_6 [i_4] [i_4] [i_4]))))) : ((-(((/* implicit */int) (short)(-32767 - 1)))))));
                    arr_15 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_3 + 1])))))));
                    var_19 &= ((/* implicit */unsigned char) var_3);
                    arr_16 [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)30005))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (min((var_14), (((/* implicit */int) (unsigned char)246)))) : (arr_6 [i_0] [9LL] [i_0]))))));
        var_21 = ((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) >= (min(((~(-1951921149))), ((+(var_4)))))));
    }
    var_22 -= ((/* implicit */long long int) var_15);
    var_23 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                arr_22 [i_6] [i_5] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) -1LL))) && (((/* implicit */_Bool) (~(422212465065984LL))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!((((+(var_4))) != (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
