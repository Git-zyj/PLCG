/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249125
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (short)-23057);
                                arr_12 [(_Bool)1] [i_1] [i_2] [i_3] [i_4] = (((!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_3] [(unsigned short)4] [i_3] [i_2] [i_2] [i_1])))) ? ((+(((/* implicit */int) arr_9 [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] [i_1 - 1])))) : (((/* implicit */int) var_5)));
                            }
                        } 
                    } 
                    arr_13 [i_2] [(signed char)10] [(signed char)10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [17] [i_2] [i_1 + 1] [i_1 - 2] [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40108)) ? (((/* implicit */int) max((arr_9 [i_0] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_4 [i_0]))))) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((var_11) ? ((~(arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-8192)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_12))))));
    }
    for (int i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        var_16 = ((/* implicit */long long int) arr_0 [i_5 + 2]);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)8211)), (arr_8 [(_Bool)1] [22ULL] [i_5] [(unsigned char)10])))) ? (((/* implicit */int) arr_15 [i_5] [i_5 + 4])) : (((/* implicit */int) arr_8 [2U] [i_5] [i_5 - 1] [i_5 + 1]))))) ? (((/* implicit */int) (unsigned short)58166)) : (((int) var_8))));
        arr_16 [i_5] = ((/* implicit */unsigned long long int) max((((arr_2 [i_5 + 2] [i_5 - 1]) > (((/* implicit */int) arr_5 [16U])))), ((!(((/* implicit */_Bool) arr_5 [(signed char)24]))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */short) arr_4 [i_6 - 3]);
        arr_21 [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-2266))))))));
    }
}
