/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240593
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_1] [i_2] [i_3] [(short)4] = ((/* implicit */_Bool) arr_5 [i_1] [i_4]);
                            var_13 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((signed char) -772521637))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((var_11) << (((9U) - (9U)))))))));
                        }
                    } 
                } 
            } 
            var_14 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) var_2))))), (max((((((/* implicit */_Bool) 4294967282U)) ? (4294967283U) : (31U))), (((/* implicit */unsigned int) (signed char)127))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_5] [i_1]))));
                        var_16 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)65510))))));
                        arr_19 [i_0] [i_0] [i_0] [(signed char)12] [i_0] [i_0] = ((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_10)))))))));
                    }
                } 
            } 
            var_17 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1081852773U) >= (((/* implicit */unsigned int) 2147483647)))))) : (((unsigned int) var_5)))));
        }
    }
    var_18 &= ((/* implicit */_Bool) (~(((unsigned long long int) var_1))));
    var_19 = (-(((/* implicit */int) ((((_Bool) 4294967285U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) (short)2442)) : (((/* implicit */int) (unsigned short)65535)))))))));
}
