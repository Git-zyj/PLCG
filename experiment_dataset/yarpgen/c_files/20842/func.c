/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20842
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) (unsigned short)20130);
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */long long int) arr_3 [i_1] [i_0]))))) ? (3807345927223034794LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) (~(arr_6 [i_0] [i_1] [i_1]))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */short) arr_13 [1LL] [i_0] [i_0] [i_0] [i_0]);
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1905965961U)) : (8384066187992783416LL)))))) ? (8384066187992783420LL) : (3207964283034003324LL)));
        arr_17 [7] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(131040U))))));
    }
    /* vectorizable */
    for (short i_4 = 3; i_4 < 9; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4874531954020658977LL))));
        arr_21 [i_4] = ((/* implicit */unsigned int) arr_5 [i_4 + 1] [(_Bool)1]);
        var_19 -= ((/* implicit */long long int) arr_18 [2ULL]);
        var_20 = ((_Bool) var_12);
    }
    var_21 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(3720088194U)))) ? (((/* implicit */int) ((short) (unsigned char)71))) : (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) (+(18LL)))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_1))))) : (arr_30 [i_6 + 1]))) * (((/* implicit */unsigned long long int) arr_23 [i_7] [i_5])))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)20130))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2009128155U)))) || (((/* implicit */_Bool) ((signed char) arr_25 [i_5] [i_5] [i_7]))))))));
                    var_25 ^= ((/* implicit */unsigned int) ((_Bool) 17112760320LL));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((short) ((short) ((unsigned char) 0U))));
    }
    for (short i_8 = 1; i_8 < 22; i_8 += 3) 
    {
        arr_34 [(short)15] [(short)15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28))) + (-3807345927223034795LL)))))) ? (342897307281347355LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_32 [i_8 + 1]))))));
        arr_35 [i_8] = ((/* implicit */short) ((_Bool) -17112760321LL));
    }
}
