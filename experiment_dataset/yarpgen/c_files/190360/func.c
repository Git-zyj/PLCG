/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190360
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_7));
                    arr_8 [i_1] [i_1] [i_1] [i_2 - 1] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_1] [6U]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_3] [8U] [17U] [6U] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        arr_13 [i_0] [i_0] [5ULL] [i_3] = ((/* implicit */unsigned long long int) var_8);
                    }
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    arr_18 [i_0] [(unsigned short)4] [9U] = ((/* implicit */unsigned char) ((short) (short)-13620));
                    var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13598))) <= (((((/* implicit */_Bool) max(((unsigned short)32512), (((/* implicit */unsigned short) arr_15 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47757))) : (((unsigned int) arr_10 [i_0] [i_4] [16]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(short)9] [(short)9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((arr_3 [i_5 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(_Bool)1] [(_Bool)1]))))) : (max((arr_5 [i_5 + 1] [7ULL] [i_5]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((var_8) ? (min((var_6), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-3432)), ((unsigned short)47757))))))))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (min((arr_11 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1]), (((/* implicit */long long int) arr_10 [i_5 - 1] [i_5 + 1] [i_5 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_4] [i_5])) ? (arr_10 [i_5 - 1] [i_5 + 2] [i_5 + 2]) : (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 2])))))))));
                        arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_5 - 2] [10LL] [i_5 - 2] [i_5 + 2]), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) ? (arr_4 [i_0] [5ULL] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) (short)-32737))))) : ((-(((((/* implicit */_Bool) arr_20 [i_0] [8LL] [8LL])) ? (((/* implicit */int) (short)-18225)) : (((/* implicit */int) var_2))))))));
                        arr_23 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) 45989253490795099LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-366740343848603658LL))) >> (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2554613672U) : (((/* implicit */unsigned int) -1268947036))))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) (~(var_10)))), (((((/* implicit */_Bool) -1268947035)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_24 [i_0] [i_4] [i_5] [i_7]))))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_26 [0U] [i_4] [i_5 + 2] [i_7 - 1]))));
                        arr_27 [i_0] [i_7] [i_5] [i_7] = ((/* implicit */unsigned long long int) (~((~(min((var_9), (((/* implicit */long long int) (short)13605))))))));
                    }
                    arr_28 [i_0] = ((/* implicit */unsigned int) (short)13637);
                    arr_29 [i_0] [i_4] [i_5 - 2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_0] [i_4] [i_0] [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) 28ULL)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)32759))))), (arr_10 [i_0] [i_0] [(unsigned short)1])))), (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [(unsigned char)16] [i_0])))));
    }
    var_18 *= ((/* implicit */short) var_6);
}
