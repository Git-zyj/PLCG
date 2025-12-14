/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227426
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((unsigned char) min((((/* implicit */unsigned int) var_1)), ((~(var_4))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) ? (arr_0 [i_0 - 2] [14LL]) : ((+(arr_0 [2] [2])))))) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1442821266) << (((((-2941474282807614977LL) + (2941474282807614984LL))) - (7LL))))))))))));
            arr_5 [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_0 + 1]))))));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-(max((arr_0 [i_0 - 2] [i_0]), (arr_0 [i_0] [i_0])))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_19 = ((/* implicit */long long int) arr_7 [i_0]);
            var_20 = ((/* implicit */unsigned short) (-(((int) 1440136401U))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_21 -= ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_18 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) ((4210310436U) > (((/* implicit */unsigned int) arr_13 [i_0] [i_4] [i_5] [i_0]))))) : (((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_4] [3] [3])) ? (((/* implicit */int) (unsigned short)0)) : ((-2147483647 - 1)))))));
                        }
                    } 
                } 
            } 
            var_22 = (-(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3])) ? (3707063980U) : (((/* implicit */unsigned int) -1442821262))))) | (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (1025606891368476174LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_0]))))))));
            var_23 = arr_9 [i_0] [(unsigned short)9] [(unsigned short)9];
        }
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1014862896)) ? (arr_12 [i_0 + 1] [i_7] [i_0 - 2]) : (arr_12 [i_0 - 2] [i_7] [i_0 + 1])))) ? (arr_12 [i_0 - 2] [i_7] [i_0 + 1]) : ((-(arr_12 [i_0 + 1] [i_7] [i_0 - 1])))));
            var_25 ^= ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) ((int) arr_20 [i_7] [i_7]))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) : (arr_7 [i_7]))) : (((((/* implicit */_Bool) 4186377461U)) ? (arr_1 [i_0 - 2] [(unsigned short)9]) : (((/* implicit */unsigned int) 2147483647)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
            {
                {
                    var_26 ^= arr_11 [i_0 - 2] [i_8] [i_8];
                    var_27 += arr_0 [i_8] [i_8];
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_23 [0] [0] [i_0]) + (((/* implicit */long long int) 1U))))) ? (max((1569301870U), (4140911715U))) : (((unsigned int) arr_21 [2U])))) - (4294967295U))))));
    }
}
