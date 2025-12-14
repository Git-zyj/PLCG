/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47215
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) + (var_8))) * (((17U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))))) / (((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_11))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23598)) * (((/* implicit */int) (signed char)2)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)9] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((arr_1 [(_Bool)1] [i_2]) / (((/* implicit */int) arr_0 [i_0])))) * (((((/* implicit */int) (unsigned char)19)) / (arr_1 [i_1] [0ULL])))))) * (((((arr_4 [i_0]) * (((/* implicit */unsigned int) var_5)))) / (((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) (unsigned char)30)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)13])) >> (((/* implicit */int) arr_3 [i_3] [6ULL] [i_0]))))) && ((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)4))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) 1854617663)) && (((/* implicit */_Bool) var_6)))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)62548)))))))));
                        arr_12 [i_3] [i_2 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */unsigned long long int) ((3818703626U) + (arr_9 [(_Bool)1] [i_2] [i_1] [i_1]))))))) > (((/* implicit */int) ((((((/* implicit */int) arr_2 [(unsigned char)17])) >> (((/* implicit */int) (unsigned char)5)))) > (((/* implicit */int) ((((/* implicit */int) (signed char)-104)) > (((/* implicit */int) (short)-6044))))))))));
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 2] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [(unsigned short)16])) || ((_Bool)1))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) - (var_10))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)252)) * (((/* implicit */int) arr_5 [(unsigned char)9] [3] [i_3])))) > (((/* implicit */int) ((arr_9 [i_3] [i_2] [i_1] [1U]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((0ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-780))) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) ^ (702353671U))))))));
                        arr_17 [i_0] [(_Bool)1] [i_4] [i_2 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) -1))))) - (((((/* implicit */int) (unsigned char)160)) - (var_1))))) <= (((((/* implicit */int) (unsigned short)62053)) - (((/* implicit */int) (unsigned char)248))))));
                        arr_18 [i_4 - 3] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_6))))) <= (((/* implicit */int) ((arr_8 [i_0]) <= (((/* implicit */int) (unsigned char)252)))))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(short)4] [i_2 + 1] [(unsigned short)1] [4ULL])) || (((/* implicit */_Bool) (unsigned char)51)))))) == (((arr_10 [i_4 - 3]) | (((/* implicit */unsigned long long int) 732521962)))))))));
                    }
                }
            } 
        } 
    } 
}
