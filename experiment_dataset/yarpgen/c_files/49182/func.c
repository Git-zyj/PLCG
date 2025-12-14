/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49182
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_2))) || (((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) / (3063595058U))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_7))))))))));
    var_21 = ((((/* implicit */long long int) -219234762)) ^ (1659249546962003561LL));
    var_22 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned int) (signed char)88)), (969682475U))), (((/* implicit */unsigned int) 2091110693)))), (3429257517U)));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((arr_7 [i_2] [i_2] [i_0] [i_0]) ^ (3978997342U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))) + (min((7072102997893789697LL), (((/* implicit */long long int) 865142773))))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((89876127556557532LL) << (((/* implicit */int) (_Bool)1))))))))));
                }
                /* LoopSeq 1 */
                for (int i_3 = 4; i_3 < 9; i_3 += 2) 
                {
                    var_23 = (!(((/* implicit */_Bool) ((signed char) (signed char)-108))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_3 - 3] [i_4 - 1] [i_4] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)73)))) <= ((-(arr_13 [i_1 + 4] [i_4 - 1] [i_3 + 2])))));
                        arr_18 [i_0] [i_0] [i_4] [i_4 - 3] = ((int) ((((3429257506U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [(unsigned char)0] [i_0] [i_4] [i_4])))));
                    }
                    arr_19 [i_1 + 3] &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 0LL)) / (min((((/* implicit */unsigned long long int) var_6)), (var_14))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) + (var_6))))))))));
                    var_24 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) | (((((/* implicit */unsigned int) arr_11 [i_0])) & (arr_5 [i_0])))))) ^ ((~(((long long int) (short)-13711))))));
                    var_25 ^= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_3]))) / (var_6))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 1086253891)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (3788860852U))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) + (min((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) ((_Bool) (_Bool)0)))))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max(((signed char)104), ((signed char)-83))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
