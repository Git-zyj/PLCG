/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48472
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned char)1] [i_1] [i_1] [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) min((var_8), (((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (unsigned char)255)))));
                                arr_14 [i_0 - 1] [i_1] [13] [i_2] [i_3] [9] |= ((/* implicit */unsigned char) 8106428233901294859LL);
                                var_12 ^= ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_9 [10U] [i_0] [i_0 + 1] [i_4 - 1])) : (((/* implicit */int) min((arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_4 + 1]), (arr_9 [(unsigned char)7] [i_0 + 1] [i_0 - 1] [i_4 - 1]))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_9))) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [6LL])) ? (((/* implicit */int) arr_12 [i_0])) : (arr_5 [i_1] [i_1] [17ULL])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_23 [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_19 [(unsigned char)8]))))));
                    arr_24 [i_5] [i_6] [11] [(unsigned char)17] |= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_21 [i_5] [i_6] [(unsigned char)16])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7]))))), (((/* implicit */unsigned long long int) arr_20 [i_7 - 1] [i_7] [i_7 + 1])))), (((/* implicit */unsigned long long int) ((((2800271274966503314LL) >> (((((/* implicit */int) arr_20 [i_5] [(unsigned char)16] [(unsigned char)16])) - (28974))))) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 - 2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((8106428233901294859LL), (((/* implicit */long long int) (unsigned char)193)))))));
                        var_15 = ((/* implicit */short) 9223372036854775797LL);
                        var_16 -= (unsigned char)255;
                    }
                }
            } 
        } 
    } 
}
