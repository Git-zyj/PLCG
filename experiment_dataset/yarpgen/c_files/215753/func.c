/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215753
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
    var_20 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)255));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                arr_6 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)52))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((min((((1665486990) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_1 [i_1]) : (arr_0 [i_0]))))), ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [(signed char)8] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7237578335884980343LL)) ? (((/* implicit */int) (signed char)40)) : (184339929)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [(signed char)4] [i_2 + 1] [i_3 + 1]))))) / (((((/* implicit */_Bool) arr_11 [i_1] [(signed char)7] [i_2 + 1] [i_4] [i_4 - 2])) ? (((((/* implicit */unsigned long long int) -9LL)) ^ (10748315772296772501ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_2 + 1])))))));
                            var_22 = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)60)) : (arr_12 [i_3 - 2] [7LL] [i_1] [i_3 - 2] [i_1] [6LL] [i_2 - 1])))));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(10748315772296772501ULL))))));
                            var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)1)) ? (((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_4] [i_3] [i_2])))) : (((((/* implicit */_Bool) -7021027061022183495LL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_13))))))));
                        }
                    } 
                } 
            }
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -524791720008190976LL)) ? (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (-7021027061022183495LL))) / (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_8)))))))) ? (min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5LL))), (((/* implicit */long long int) ((signed char) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) : (-1665486991)))) ? (((/* implicit */int) (unsigned char)127)) : (((((/* implicit */_Bool) 1665486981)) ? (((/* implicit */int) (signed char)63)) : (arr_12 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))))));
        arr_16 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1LL)) ? (-1665487017) : (((/* implicit */int) (signed char)-116)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (-1665486991)))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)-9)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) / (((/* implicit */int) (signed char)-74))))) : ((-(max((((/* implicit */unsigned long long int) var_7)), (18446744073709551600ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 - 3] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4296214479626460286ULL)));
        var_27 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)-2))));
        var_28 = ((signed char) (~(((/* implicit */int) arr_18 [i_5 + 2] [i_5 + 2]))));
    }
}
