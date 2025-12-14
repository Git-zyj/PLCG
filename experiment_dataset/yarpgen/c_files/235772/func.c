/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235772
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [6U] [18ULL]))) == (min((min((var_12), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])))), (((/* implicit */unsigned long long int) (short)-31817))))));
                var_20 |= ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0])) | (var_3)))), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_3 - 1] [i_3 - 1]))))))))));
                            arr_13 [i_2] [i_1] [i_2 - 1] [i_3 - 1] |= ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (signed char)-120))));
                            arr_14 [i_2] &= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 18127468612078094556ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31835)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_11)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_23 ^= min((((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */unsigned int) 14680064)) : (43915058U))), (max((2021991526U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32758)) >= (((/* implicit */int) (short)-31835))))))));
                        arr_20 [i_0] [i_1] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31854))))), (((((/* implicit */_Bool) arr_11 [6] [(unsigned char)7] [6] [6])) ? (1682605973U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))))))) - (((((/* implicit */unsigned long long int) var_6)) - (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))))));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (16955671086013432260ULL)))) ? (((/* implicit */int) min(((short)19321), (((/* implicit */short) var_8))))) : (((/* implicit */int) var_14)))))));
                        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_5]))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_0] [(short)15] [i_0] [7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [16ULL] [15U])) & (((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))))));
                        arr_25 [i_6] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_8 [17ULL])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (2147483635))));
                    }
                    var_25 = ((/* implicit */int) var_2);
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    arr_29 [i_0] [i_0] [i_7 + 1] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7] [(unsigned short)7]))) & (6015223591912452888ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0 - 1] [i_1])), ((short)31809)))))))), (((unsigned short) var_5))));
                    arr_30 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) min(((~(arr_9 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]))), (((/* implicit */unsigned long long int) var_17))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (536805376)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_18))))))));
}
