/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31584
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 3283119486592613769ULL)) && (((/* implicit */_Bool) var_10))))) << ((((+(var_3))) + (2027880288)))))) * (((unsigned long long int) ((((/* implicit */int) (unsigned short)47282)) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_2 + 2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */int) arr_0 [i_2] [i_2])) * (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) max((((/* implicit */unsigned short) (short)6796)), (arr_12 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 + 1] [i_4])))))))));
                                arr_16 [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8707526265795249617ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]))) : (9223372036854775807LL)))) ? (max((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2 - 2] [i_0] [3LL])), (479559968U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned short)8] [i_3] [(unsigned short)8])) : (arr_14 [i_0] [i_3 + 1] [i_1] [i_0]))) ^ ((~(((/* implicit */int) (short)-4)))))) : (((/* implicit */int) (signed char)16))));
                                arr_17 [i_0] [i_1] [i_2] [0LL] [(_Bool)1] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((541068020) != (((/* implicit */int) arr_13 [i_1] [i_1] [i_2 + 1] [i_4] [i_4 - 2])))) ? (((((/* implicit */_Bool) ((arr_0 [8ULL] [i_1]) ? (4095) : (var_3)))) ? (((3258060002U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) 645781608)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_10 [4LL]))) ? (((((/* implicit */_Bool) (unsigned short)61398)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)6722)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_3] [(unsigned char)4]))))))))))) : (((/* implicit */short) ((((541068020) != (((/* implicit */int) arr_13 [i_1] [i_1] [i_2 + 1] [i_4] [i_4 - 2])))) ? (((((/* implicit */_Bool) ((arr_0 [8ULL] [i_1]) ? (4095) : (var_3)))) ? (((3258060002U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) 645781608)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_10 [4LL]))) ? (((((/* implicit */_Bool) (unsigned short)61398)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)6722)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_3] [(unsigned char)4])))))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0 - 1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((short) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) (_Bool)1)))))), ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    arr_22 [i_0] [i_1] [i_5 - 2] = ((/* implicit */short) ((max(((-(var_2))), (((/* implicit */int) ((unsigned char) arr_6 [i_0]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_23 [i_0] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) (short)22550)))) ? (min((-438876152), (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_5])))) : (((/* implicit */int) var_5))))));
                    arr_24 [i_1] [i_5] = ((/* implicit */long long int) (short)-18446);
                }
                arr_25 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_19 [(_Bool)1] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [(signed char)2]))))));
            }
        } 
    } 
}
