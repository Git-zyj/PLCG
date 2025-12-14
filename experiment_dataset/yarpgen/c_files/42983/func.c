/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42983
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (arr_2 [i_0])))))) ? ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_1 [i_0] [i_0]))))) : ((-(arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */short) arr_2 [i_0]);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((short) arr_1 [i_0] [i_0])), (var_14))))) != ((+(465408961U)))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_13 [(unsigned char)9] [(unsigned char)9] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_0 [i_4]), (((/* implicit */unsigned long long int) 7601850209655184971LL)))))));
                        arr_14 [i_1] [15ULL] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_11))) <= (((/* implicit */int) ((((/* implicit */unsigned int) -368429472)) != (arr_4 [i_1 - 2]))))));
                    }
                } 
            } 
        } 
        arr_15 [14ULL] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((arr_12 [i_1] [(unsigned char)6] [(unsigned short)12] [i_1 - 2]), (((/* implicit */long long int) var_8))))) != (arr_2 [i_1 - 1])))), (((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))) | (((/* implicit */unsigned long long int) arr_12 [4ULL] [(_Bool)1] [i_1 - 1] [i_1 - 2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((arr_2 [i_1]) + (((/* implicit */unsigned long long int) arr_4 [i_5])))))))));
            var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [i_5] [i_5]) : (3327092711U))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_1 - 1]))));
            var_21 = ((/* implicit */int) var_12);
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_22 -= ((/* implicit */int) var_10);
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((11893419496894380163ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_1 + 1])))))) : (max((((/* implicit */unsigned long long int) (short)-32765)), (arr_0 [i_6])))))))))));
        }
        arr_21 [i_1] = ((/* implicit */unsigned int) ((_Bool) (~(arr_9 [i_1] [i_1] [i_1 + 1] [(short)3]))));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((var_12), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_4))))), (((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
    var_25 = ((/* implicit */_Bool) var_8);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((var_10) ? (((/* implicit */unsigned long long int) var_12)) : (12599673425171839014ULL)))))) ? (((26ULL) & (((/* implicit */unsigned long long int) -3204183056253332864LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_27 = ((/* implicit */long long int) max((7ULL), (((/* implicit */unsigned long long int) 1048575))));
}
