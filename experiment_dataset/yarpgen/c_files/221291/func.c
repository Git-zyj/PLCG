/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221291
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3])) == (((/* implicit */int) arr_0 [i_0] [i_1]))))) <= (arr_4 [i_1 + 2])));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [(unsigned char)21] = (unsigned char)233;
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_1 - 4] [i_1 - 4]), (arr_5 [i_1 + 1] [i_1 + 1])))) && (((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1]))));
                    var_16 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) max((var_0), (((/* implicit */short) (unsigned char)33))))), (arr_1 [i_1 - 3] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)198)), (var_4)))))))));
                }
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((arr_1 [i_3 - 2] [i_1 - 1]) == (arr_1 [i_3 - 1] [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_18 [i_3] [i_1] [(unsigned char)5] [(unsigned short)22] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3495043873U)) && (((/* implicit */_Bool) (signed char)92))));
                            var_18 = ((((((/* implicit */int) (unsigned char)220)) % (((/* implicit */int) (unsigned char)236)))) >> (((((/* implicit */int) (unsigned short)37324)) - (37316))));
                            arr_19 [i_0] [i_3] [i_3] [i_3] [i_0] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_13 [i_3] [(unsigned char)9]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)37314)) - (37314))))))))) : (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((arr_13 [i_3] [(unsigned char)9]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)37314)) - (37314)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_6]);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 2])) ? (arr_13 [i_3] [i_3 - 2]) : (arr_13 [i_3] [i_3 - 1])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) || (((/* implicit */_Bool) arr_10 [i_3 - 2] [(unsigned char)21] [i_3] [i_6]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) ((arr_12 [i_3] [i_1]) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) arr_15 [(signed char)9] [i_1] [i_3] [(_Bool)1] [i_0] [i_0] [i_1]))))) ? (arr_6 [i_7]) : ((-(arr_20 [i_0] [i_7]))));
                        var_23 = ((/* implicit */int) arr_17 [i_3] [i_3]);
                    }
                    var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */signed char) arr_21 [i_1] [i_1 - 2] [i_3 - 2] [i_3] [i_3])), (arr_5 [i_1 - 4] [i_3 - 2]))))));
                }
                var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (2468816437U) : (((/* implicit */unsigned int) (~(-75749646))))))) : (min((max((8423940227346144603ULL), (((/* implicit */unsigned long long int) (unsigned char)233)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) (unsigned char)75)))))))));
                var_26 = ((((/* implicit */int) (signed char)122)) > (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) var_11)) + (((/* implicit */int) var_0)))))))))));
}
