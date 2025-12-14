/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232908
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((10092035273473171233ULL) / (8354708800236380382ULL))), (1143027924300150374ULL)))) ? (var_7) : (((/* implicit */int) (short)-22061))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_0]))) < (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13418))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_15 [i_0] [i_1 - 1] [i_0] [i_0] [i_4])))));
                                var_12 *= ((/* implicit */signed char) ((-8816946654043954795LL) / (arr_5 [i_1 - 1] [(unsigned char)3] [(unsigned char)3])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] [24] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) 2147467264U)) & (-9223372036854775805LL)));
    }
}
