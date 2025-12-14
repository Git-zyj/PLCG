/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191176
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
    var_17 |= var_0;
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_18 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) arr_4 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [3ULL] [3ULL]), (arr_1 [i_1] [i_1]))))) * (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)96))))) & (arr_10 [i_0 - 2] [i_0] [i_0] [i_0 + 2]))))))));
                                arr_11 [i_0] = ((/* implicit */signed char) max((max((arr_3 [i_0 - 1] [i_1]), (arr_3 [i_0 + 3] [5ULL]))), (arr_3 [i_0 - 1] [i_3])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((arr_16 [i_0 + 2] [(unsigned short)1] [(unsigned short)1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 18446744073709551593ULL))) % (((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [i_5] [i_0] [i_7])))))))));
                        var_22 &= ((/* implicit */signed char) max((arr_10 [i_0] [i_5] [i_0] [i_7]), (((/* implicit */unsigned long long int) ((signed char) min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (signed char)111))))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_1), (arr_19 [i_0] [(unsigned short)1] [i_5] [7ULL] [i_7] [i_7]))), ((signed char)56)))) ? ((-(((/* implicit */int) max((arr_17 [i_7]), (var_13)))))) : (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) >= (((arr_18 [i_0] [i_0] [3ULL] [i_0 - 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)85)) % (((/* implicit */int) (unsigned short)2))))))))))));
    }
}
