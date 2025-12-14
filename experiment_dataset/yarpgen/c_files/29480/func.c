/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29480
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [5U] = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]), (arr_10 [3] [i_1 - 1] [i_2] [i_2] [i_3])))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (short)3455))));
                        arr_11 [i_2 + 2] [(signed char)12] [i_2 + 2] [i_2] = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3456)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (2LL)))), (arr_5 [i_2 + 2] [i_3] [i_3]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2] [i_0]))));
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_15 [3U] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-3469), ((short)3443)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3455)))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2 + 2] [i_1])) : (arr_10 [i_0] [i_1] [i_2] [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_15)))) && (((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [11]))))))))))));
                        var_21 = ((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_1 + 1] [i_1]) >> (((var_14) + (4071791115092349367LL)))))) ? (max((arr_7 [i_1] [i_2 + 1] [i_1 - 3] [i_1]), (var_9))) : ((+(arr_7 [i_2] [i_2 + 1] [i_1 - 1] [i_0]))));
                    }
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) 764568550U)) < (arr_1 [i_2])))))))));
                    var_23 = ((((/* implicit */_Bool) (~(arr_7 [i_2 + 1] [i_2] [i_1 - 4] [i_1 - 2])))) ? (((/* implicit */int) (short)3455)) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [8ULL] [i_2 - 1])))))));
                    var_24 += ((/* implicit */unsigned int) arr_1 [i_0]);
                    arr_16 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_1 - 3])), (var_9)))), (min((((/* implicit */unsigned long long int) (short)-3442)), (min((arr_5 [10U] [17LL] [i_0]), (((/* implicit */unsigned long long int) var_13))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (-((-(((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-91))))))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3470)) ^ (((/* implicit */int) (_Bool)1))))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (arr_13 [i_0] [i_0] [4LL] [i_0]))))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((var_1) + (9223372036854775807LL))) << (((((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_5] [(unsigned char)1] [10ULL])) ? (var_11) : (((/* implicit */int) var_13))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [(short)4]))))) + (54LL))) - (34LL)))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_2 [i_5 + 1]))))) ? (((((/* implicit */_Bool) 16290679228083351842ULL)) ? (3851597998U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_13 [(unsigned short)10] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_5])))))))));
        var_28 = ((/* implicit */signed char) var_2);
    }
    var_29 = ((/* implicit */long long int) ((((((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) == (((/* implicit */int) var_7)))) ? (min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-3467)) : (((/* implicit */int) (short)3448))))))) : (max((((/* implicit */unsigned long long int) ((unsigned short) var_18))), ((-(var_17)))))));
}
