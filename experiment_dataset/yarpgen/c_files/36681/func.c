/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36681
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) 0))))) ? ((+(15437726089067210150ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_11 -= ((/* implicit */long long int) (((~(arr_7 [(short)8] [i_2 + 1]))) != ((~(arr_7 [i_0] [i_2 + 1])))));
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) 15437726089067210152ULL)))))));
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((arr_4 [(_Bool)1] [i_2]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32758)) ? (693930204U) : (((/* implicit */unsigned int) arr_5 [i_0] [15LL]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((((/* implicit */_Bool) arr_3 [(signed char)15] [(signed char)15])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0]))))) - (14637361774296563271ULL)))))) : (-3745963482310533261LL))))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (((-(-1570530147012879317LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2]))))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_13 [i_4] [i_4] [i_4] [i_0]))));
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15437726089067210160ULL)) ? (1570530147012879315LL) : (-1570530147012879317LL)));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_17 [i_1] [i_5] [i_1] [12ULL] &= ((/* implicit */short) -1570530147012879317LL);
                        arr_18 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) || (((/* implicit */_Bool) (unsigned char)138))))) * (((/* implicit */int) (!(arr_11 [i_0] [13LL]))))))) ^ (-6105310320607360063LL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                    {
                        arr_22 [i_2] [i_1] [i_0] [0U] [i_1] [i_2] = ((/* implicit */int) arr_1 [i_0]);
                        arr_23 [i_0] [i_0] [i_0] [i_6] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [18LL])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1570530147012879317LL)) & (3475886265449460747ULL))))));
                    }
                    var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) 142989288169013248LL))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)143)) ? (4146296119047821450ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_7])))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 15437726089067210150ULL))));
        arr_28 [i_7] = ((/* implicit */unsigned short) arr_24 [i_7]);
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
        {
            arr_31 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_24 [19LL]);
            var_18 = ((/* implicit */long long int) min((var_18), ((-((+(arr_30 [i_7] [12] [i_8 - 2])))))));
        }
    }
    var_19 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 14345657966974155075ULL)) ? ((+(var_0))) : (var_0))) / (((/* implicit */unsigned long long int) var_9))));
}
