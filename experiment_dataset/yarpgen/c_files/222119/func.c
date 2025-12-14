/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222119
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
    var_16 = ((/* implicit */int) -2854368675587589122LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) min((((var_12) + (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) 2130170059)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18349635615738023801ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) : (6792952967179614690ULL)))) ? (((/* implicit */int) (!(arr_3 [i_2] [i_2])))) : (((/* implicit */int) arr_3 [i_2] [i_1]))))) : (((unsigned long long int) arr_3 [i_2] [(short)0]))));
                    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((short) 97108457971527812ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        var_19 = arr_2 [i_0] [i_0];
                        arr_8 [11ULL] [i_1] [i_2] [i_3] [i_0] [(short)13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_1)) : (arr_4 [15] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (9264085697641672083ULL) : (arr_7 [i_0] [i_0] [i_2] [i_3]))) : ((~(18349635615738023830ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -6338406788310304691LL)))) : (((((((/* implicit */_Bool) 18349635615738023782ULL)) ? (288230367561777152LL) : (((/* implicit */long long int) 1065432229)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8658654068736LL))))))))));
                        var_20 ^= ((/* implicit */int) min((((8658654068736LL) == (arr_6 [i_1] [i_2] [i_1] [i_3] [i_1]))), (((_Bool) arr_4 [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_2 [i_0] [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_13)))))));
                        var_21 -= ((/* implicit */short) ((int) var_12));
                        arr_12 [i_0] [i_0] [i_0] [i_4] [(short)15] = ((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_0] = arr_10 [i_0] [i_2] [i_2] [i_6];
                                var_22 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                                arr_21 [i_0] [i_1] [i_6] = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) 3209044377588697499LL)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_2 [i_2] [i_0])))) || (((/* implicit */_Bool) arr_19 [19] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
