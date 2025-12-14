/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246800
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (arr_4 [i_0 - 1])))) ? (min((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2])))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) ((short) 13508368690197050858ULL))) : (((((/* implicit */_Bool) (unsigned short)13130)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (((/* implicit */int) (short)21040)) : (((/* implicit */int) (unsigned char)173))))) ? (max((((/* implicit */unsigned int) var_8)), (arr_0 [(signed char)2]))) : (max((((/* implicit */unsigned int) (unsigned char)253)), (3307883143U)))))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */int) (short)-22010);
        arr_15 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_3 + 1])) == (((/* implicit */int) ((signed char) arr_1 [i_3 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (short)14397)) - (14379))))))))) : (((((((((/* implicit */int) arr_1 [2])) + (2147483647))) << (((arr_8 [i_3] [(signed char)6]) - (606090429))))) >> (((arr_10 [i_3] [i_3]) + (5522684483492599815LL)))))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_3 + 1])) == (((/* implicit */int) ((signed char) arr_1 [i_3 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (short)14397)) - (14379))))))))) : (((((((((/* implicit */int) arr_1 [2])) + (2147483647))) << (((arr_8 [i_3] [(signed char)6]) - (606090429))))) >> (((((arr_10 [i_3] [i_3]) + (5522684483492599815LL))) - (5248159911684105789LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_4])) ? (((/* implicit */int) (short)11054)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_7 [i_3] [i_3] [i_4] [i_3 - 1])) - (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) var_2))));
            arr_18 [i_3] = ((/* implicit */unsigned int) var_4);
        }
    }
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)20527)))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_11))))))));
}
