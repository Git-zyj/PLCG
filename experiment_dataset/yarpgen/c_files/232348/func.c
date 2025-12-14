/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232348
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (var_8))), (((max((((/* implicit */long long int) arr_0 [i_0])), (var_12))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)11])) ? (((/* implicit */int) (unsigned short)0)) : (var_1))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_16) : (982493867U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_2 [i_0] [i_3]);
                        var_21 = ((/* implicit */unsigned short) var_7);
                        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)0))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) (~(var_13)));
                        arr_12 [11U] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_11 [i_4])) ? (var_12) : (((/* implicit */long long int) arr_8 [i_0] [(short)11] [i_0]))))));
                        arr_13 [i_0] = ((/* implicit */short) (~((+(var_1)))));
                        var_24 &= ((/* implicit */short) ((arr_6 [i_1] [i_0]) | (arr_6 [i_2] [13U])));
                    }
                    arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_13)) ? (2744780808U) : (((/* implicit */unsigned int) arr_9 [i_2] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20297)) ? (arr_4 [i_1 + 2] [i_2]) : (((/* implicit */long long int) (+(0U))))));
                    var_25 = ((/* implicit */int) min((var_25), (arr_9 [i_0 - 2] [i_1] [i_1])));
                }
                for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (arr_3 [i_0 + 1]) : (((/* implicit */int) arr_11 [i_0 + 1])))) : (max((((/* implicit */int) arr_11 [i_0 + 1])), (arr_3 [i_0 + 1])))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_10 [i_5 + 1]))))) ? (((/* implicit */int) arr_18 [i_5])) : (((((/* implicit */int) (unsigned short)3714)) * (((/* implicit */int) arr_10 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50594))) : (((((/* implicit */_Bool) (unsigned short)14942)) ? (((((/* implicit */_Bool) (unsigned short)14942)) ? (1249624267U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [(unsigned short)5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)29721))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_29 = (~(((((/* implicit */_Bool) arr_23 [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (3385957949U))));
                    var_30 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) arr_20 [i_6] [14U])))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (min((((/* implicit */long long int) var_15)), (var_13)))))));
    /* LoopSeq 1 */
    for (unsigned int i_9 = 2; i_9 < 8; i_9 += 4) 
    {
        var_32 = ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_25 [i_9] [i_9] [3LL] [(short)5])) + (arr_24 [i_9 + 3] [i_9] [(unsigned short)11]))) >> (((min((var_14), (57551039))) - (57551020)))))));
        var_33 = ((/* implicit */unsigned short) arr_5 [i_9]);
    }
}
