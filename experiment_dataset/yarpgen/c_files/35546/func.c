/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35546
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
    var_13 = ((/* implicit */unsigned long long int) ((((max((var_6), (((/* implicit */int) var_11)))) / (max((((/* implicit */int) var_0)), (var_6))))) * ((-(((/* implicit */int) (signed char)109))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            var_14 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_3])) > (((/* implicit */int) var_9))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_1))));
                    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_3])) & (((/* implicit */int) var_0))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_4]))));
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
            var_20 += ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_4]));
            var_21 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_4]);
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)16])) >> (((((/* implicit */int) (short)-9819)) + (9827)))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1])) ? (2096896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)18]))))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_10))));
        var_25 = ((((/* implicit */_Bool) arr_18 [i_6])) && (((/* implicit */_Bool) arr_18 [i_6])));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_9), (arr_17 [i_7]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_7])), (arr_9 [i_7] [i_7] [i_7])))) : (((((((/* implicit */int) (signed char)-66)) | (((/* implicit */int) (short)-14754)))) & (((/* implicit */int) arr_6 [i_7]))))));
        arr_21 [i_7] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) arr_17 [i_7])))));
        var_27 &= ((/* implicit */signed char) (-(((/* implicit */int) min((arr_0 [i_7]), (arr_0 [i_7]))))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) & (-1576240747)));
    }
}
