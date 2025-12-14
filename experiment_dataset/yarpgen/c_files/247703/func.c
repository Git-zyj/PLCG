/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247703
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max(((_Bool)1), ((!((_Bool)1)))));
                                var_12 = max((((((/* implicit */_Bool) max((arr_3 [i_1] [(_Bool)1] [i_1]), (3825108026U)))) ? (arr_2 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8U])) ? (((/* implicit */unsigned int) var_3)) : (3537728429U))))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_4))))));
                                arr_13 [i_0] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((min((var_9), (757238888U))) > (((((/* implicit */_Bool) var_5)) ? (4294967284U) : (3688239678U))))))));
                                arr_14 [i_0] [i_0] [i_3] [(unsigned short)2] [i_4] = ((/* implicit */int) ((unsigned short) (unsigned char)21));
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_1 [i_2] [i_2]) - (arr_1 [i_0] [(unsigned short)0]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (min((var_5), (((/* implicit */int) arr_6 [(unsigned short)11])))) : (((/* implicit */int) (unsigned short)16)))))));
                    arr_16 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)158))));
                    var_13 |= ((/* implicit */unsigned int) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (3688239678U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))))) != (((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) - (var_10)))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                arr_23 [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) (unsigned char)44))))))), (3457798226U)));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (var_0)));
                    arr_28 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2806401242U)))))) < (((((/* implicit */_Bool) var_6)) ? (2806401242U) : (arr_17 [i_6])))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) -1590048761))));
                }
                for (unsigned char i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_38 [i_10] [i_9] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)14607)) : (((/* implicit */int) (_Bool)1))));
                                arr_39 [i_5] [i_10] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_8] [i_8] [i_8 - 2] [i_8] [i_8 + 1] [i_8] [i_8]))) & (757238866U))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5]))) | (arr_22 [i_8] [i_8])))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) var_3)) > (606727618U)))) & (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_33 [i_5] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_10]))))));
                                var_18 *= ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) < (var_10))) || (((/* implicit */_Bool) ((8) & (-157400273)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((arr_36 [i_5] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_5] [i_5]) % (arr_36 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_5] [(_Bool)1]))) != (max((arr_36 [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_6] [7]), (arr_36 [(unsigned char)4] [(unsigned short)0] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8] [i_8])))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) 3U);
}
