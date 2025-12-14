/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246581
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((int) (unsigned char)174))))) && (((/* implicit */_Bool) ((unsigned long long int) var_4)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-2147483647 - 1))) >= (16128U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) arr_3 [i_2] [i_1 - 1] [i_0]))))) : ((+(arr_1 [i_0])))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_3 [i_2] [i_1 - 1] [i_0]))))) ? (var_4) : (((/* implicit */int) var_16)))) | ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2]))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-12))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) var_3);
                }
            } 
        } 
        arr_11 [i_0 - 1] [(unsigned short)3] = max((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */long long int) 794636360)) : (-669469963191658245LL))));
        arr_12 [i_0] = ((/* implicit */unsigned long long int) max((var_5), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)12)) <= (((/* implicit */int) (unsigned char)163)))))) + ((((_Bool)1) ? (2097151U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_13 [i_0 + 2] [i_0 + 2])), ((+(-1LL)))));
                    arr_18 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((int) (((-(((/* implicit */int) (unsigned char)8)))) >= ((+(((/* implicit */int) var_12)))))));
                    arr_19 [i_3] [i_4 - 1] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((var_15) / (((/* implicit */unsigned int) arr_21 [i_5 + 1] [i_5 + 2]))));
        arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */int) var_8)) & (arr_21 [i_5] [i_5]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (-2661838598215012665LL))))));
        arr_23 [i_5 - 2] = ((/* implicit */int) ((((arr_20 [i_5 + 1]) + (((/* implicit */unsigned int) arr_21 [(short)1] [i_5])))) >= (((/* implicit */unsigned int) arr_21 [i_5] [i_5 - 1]))));
        var_20 = ((/* implicit */long long int) (~(arr_21 [i_5] [i_5])));
    }
}
