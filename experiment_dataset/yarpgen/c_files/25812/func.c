/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25812
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
    var_20 = ((/* implicit */unsigned char) ((short) var_13));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */int) arr_11 [i_0] [(unsigned char)4] [i_2] [(_Bool)0]);
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (8796088827904ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5196044204013872378ULL)) || (((/* implicit */_Bool) 5196044204013872378ULL)))))));
                            var_21 = ((unsigned long long int) min((arr_6 [i_1]), (arr_6 [i_1])));
                            arr_14 [i_1] = ((/* implicit */unsigned char) max((min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 1] [i_0])), (arr_3 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]))) : (arr_4 [i_0] [i_1])))));
                arr_15 [i_0] [i_1] = ((/* implicit */long long int) min((((6259922507368066447ULL) / (((/* implicit */unsigned long long int) 1056964608)))), (((/* implicit */unsigned long long int) 1354903286U))));
                var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) != (((/* implicit */int) arr_2 [i_0] [i_1])))))) != (((long long int) arr_4 [i_0] [i_1]))))), (min((18446735277620723693ULL), (13250699869695679230ULL))));
                arr_16 [i_1] [10U] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), (max((min((9222246136947933184LL), (((/* implicit */long long int) 593223930U)))), (((/* implicit */long long int) arr_10 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_19);
    var_25 ^= var_4;
}
