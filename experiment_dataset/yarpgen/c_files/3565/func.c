/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3565
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_2 [i_1 - 1] [i_1 - 1]))) ? ((-(((int) arr_1 [i_0])))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)1))))))));
                var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (1414581485) : (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (unsigned char)0)))))))));
                var_16 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_1 - 1]);
                var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) > (((/* implicit */int) (short)-20131)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1])))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1] [i_3 + 1])) << (((arr_3 [i_2 - 1] [i_3 + 1]) - (1081425142)))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-20131))))) : (((/* implicit */int) ((arr_3 [i_2 - 1] [i_3 + 1]) > (((/* implicit */int) (_Bool)1))))));
                    var_20 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2 - 1])))));
                    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (1334207333U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_2 + 1])))))) ? (((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_11 [i_4 + 1] [i_3 - 1] [i_2 - 1]))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 6; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((arr_15 [i_5 + 4] [i_5 - 1] [i_2 + 2]) ? (((127ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_3] [i_5 + 2]))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        var_23 ^= ((/* implicit */unsigned int) ((((_Bool) (short)-20131)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_5])) / (((/* implicit */int) (_Bool)1))))) : (arr_7 [i_2 + 2])));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 + 2] [(short)5] [i_3 + 2] [i_6])) ? (arr_19 [i_2 - 1] [i_2] [i_3 - 1] [i_6]) : (arr_19 [i_2 + 2] [i_3] [i_3 + 2] [i_2 + 2])));
                    }
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) (signed char)40)) >> (((arr_17 [i_3] [(unsigned short)3]) - (1777344926))))) : (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3 + 1] [i_3 + 1] [i_5 + 1] [i_5])) ? (arr_0 [i_3]) : (((/* implicit */int) arr_2 [i_3] [i_5])))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_3 + 2] [i_3 + 2] [i_5] [i_2 + 2] [i_5] [(signed char)0])) ? (((/* implicit */long long int) 0U)) : ((-(8071842197069688564LL))))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((unsigned char) (~(((((/* implicit */_Bool) 4294967295U)) ? (3031453815U) : (3031453815U))))));
    var_28 = ((/* implicit */short) var_10);
}
