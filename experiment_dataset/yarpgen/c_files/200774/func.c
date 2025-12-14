/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200774
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (max((max((((/* implicit */unsigned int) (unsigned short)28683)), (var_16))), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0 + 2]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_20 *= ((/* implicit */unsigned int) (-(min((var_8), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-21)), (2711870763U))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 341278155)) ? (((/* implicit */unsigned long long int) -6278456669468925470LL)) : (var_6)));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (short)5549))));
                            var_22 = ((/* implicit */long long int) ((unsigned short) var_15));
                        }
                    } 
                } 
            } 
            arr_16 [(short)8] |= ((/* implicit */short) ((unsigned short) min((arr_7 [(short)2]), (arr_7 [10U]))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_26 [(short)0] [i_0] [i_1] [i_0] [i_0] [i_6] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [11] [i_0 + 1] [i_0 + 4] [i_0] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))) : (var_15)))) ? (((int) arr_20 [(signed char)10] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 3])) : (((/* implicit */int) ((unsigned short) (short)-15)))));
                            var_23 = ((/* implicit */int) min((((long long int) var_0)), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)10893)) : (341278162))) < (((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_27 [i_0] = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) var_11))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_28 [(signed char)18] [i_8]);
        arr_30 [i_8] [i_8] = ((/* implicit */short) ((((arr_29 [i_8]) >> (((arr_29 [i_8]) - (17368143223998853023ULL))))) <= (((/* implicit */unsigned long long int) min((-341278138), (341278162))))));
    }
}
