/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211680
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)13])) ? (arr_7 [(short)7] [i_1] [(short)7] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1 - 1] [i_3]))))) ? (((/* implicit */int) max((arr_1 [i_3]), (((/* implicit */unsigned short) arr_6 [i_0] [3] [i_2] [16]))))) : (((/* implicit */int) ((225000408019341224LL) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)0]))))))))) ? (arr_3 [i_1]) : ((~((~(((/* implicit */int) arr_8 [i_0] [i_0] [13LL] [9] [i_0] [(unsigned char)7]))))))));
                        var_14 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) -3189728061875606208LL)) ? (((/* implicit */int) var_7)) : (arr_5 [11LL] [11LL] [i_2])))))));
                        var_15 -= ((/* implicit */unsigned short) (short)26978);
                        var_16 = ((/* implicit */long long int) min((var_16), ((~(-4507899612757222191LL)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [(unsigned short)15] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)16383))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_15 [i_0] [(unsigned short)3] [i_2] [i_4] [i_5])) : (var_9))))))));
                                arr_17 [i_2] [(unsigned short)6] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4 + 1] [14LL] [i_5 - 1] [6])) != (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_6 [i_0] [(short)10] [i_4] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [5U] [5U] [5U] [i_4 - 2] [i_4 - 2]))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(unsigned short)16] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 3189728061875606217LL))))) >> (((((/* implicit */int) (unsigned short)587)) - (574)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) -1538820402))))) ? (var_11) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_0)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) ((long long int) (short)32767));
                                var_18 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (short)-32758)))), ((~(arr_3 [8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-26774))))) >> (((/* implicit */int) ((var_11) >= (((/* implicit */int) var_7))))))), (var_3)));
}
