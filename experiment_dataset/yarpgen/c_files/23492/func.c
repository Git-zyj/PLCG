/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23492
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
    var_18 = ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) min((((arr_0 [i_0] [i_0]) ? (((unsigned long long int) (unsigned char)248)) : (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_1 [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (33423360ULL) : (var_5))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                arr_8 [i_1] [i_1] [i_1] [(signed char)1] = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
            }
            for (int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_3]);
                var_22 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)217))) ? (((/* implicit */int) ((unsigned char) 18446744073676128261ULL))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) <= (((/* implicit */int) (signed char)-115))))))) : ((-(((/* implicit */int) var_13)))));
            }
            /* LoopSeq 1 */
            for (short i_4 = 4; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_4 + 2])) ? ((-(18446744073676128261ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_4] [i_5])), (arr_15 [i_1] [i_1] [i_1] [i_1])))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [(signed char)10] [i_0 + 1] [i_1]))))) ? (((/* implicit */int) max((arr_15 [i_0 - 2] [i_1] [i_4] [i_1]), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])) < (((/* implicit */int) arr_15 [i_0] [i_1] [i_4 - 1] [i_1])))))));
                    var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned char)248)), (var_5))), (((/* implicit */unsigned long long int) min((arr_11 [i_0 + 2] [i_0 + 2] [i_5]), (((/* implicit */int) var_10)))))));
                    arr_17 [i_1] [i_1] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))) * (((((/* implicit */_Bool) arr_15 [i_1] [i_4] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (var_7))))), (((/* implicit */unsigned int) (signed char)-111))));
                    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)27)) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0] [i_4 + 2] [i_5])) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_4] [(short)14])))) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((signed char) -299616647))) : (((((/* implicit */int) arr_7 [i_1] [i_1] [i_5])) * (((/* implicit */int) (signed char)-115))))))));
                }
                var_27 = ((/* implicit */signed char) (unsigned short)13607);
                arr_18 [i_4] [i_1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) 18446744073676128257ULL);
            }
            var_28 *= ((/* implicit */short) var_1);
        }
    }
    var_29 |= ((/* implicit */unsigned char) var_5);
}
