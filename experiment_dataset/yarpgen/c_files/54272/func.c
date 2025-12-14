/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54272
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8407288228759248024LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (8151070304838135520ULL)))) ? (((arr_9 [i_1 + 2]) / (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_9 [i_1 + 2]) : (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                                arr_14 [i_0] [i_1 - 1] [i_0] [8ULL] [i_3] [i_3] [(signed char)11] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1])), (-8407288228759248025LL))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_0] [11ULL] [i_3] [i_4])) ? (((/* implicit */int) var_3)) : (arr_7 [i_0]))), ((~(((/* implicit */int) arr_3 [(unsigned short)12] [i_1 - 2] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_17 [i_1] [i_1] [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [12LL] [i_0] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)113))))) : (min((((/* implicit */long long int) (_Bool)1)), (-694708150344532606LL)))));
                    var_13 = ((/* implicit */int) arr_8 [i_0]);
                    var_14 = ((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                    var_15 *= ((/* implicit */unsigned int) min(((unsigned short)8473), (((/* implicit */unsigned short) (unsigned char)33))));
                    var_16 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_8 [i_5]), (arr_8 [i_1])))) ? (max((arr_16 [(unsigned short)5] [(unsigned short)5] [i_1] [i_1]), (-1024LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0] [(unsigned short)12] [i_0])))))) & (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57060))))))))))));
                }
                for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 694708150344532606LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (15698666163776839921ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))))));
                    var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) var_8))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((arr_8 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))))))))) : (((((/* implicit */_Bool) arr_16 [i_6 + 2] [i_1 - 1] [(signed char)3] [i_0])) ? (arr_16 [i_6 + 3] [i_1 - 2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_20 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-8010168198923982338LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (((-(((var_8) >> (((((/* implicit */int) var_7)) - (57984))))))) >> (((var_4) - (85955507129686258ULL)))));
}
