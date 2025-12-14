/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233723
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((((arr_4 [i_0] [i_1] [7U]) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)3)))))) + (2147483647))) >> (((/* implicit */int) arr_4 [i_1] [2U] [i_1]))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [10U] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)3)), ((short)633)))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_1])))) : (((/* implicit */int) ((signed char) (signed char)-78)))));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_2 [i_0 - 1])))))), (max((((((/* implicit */int) (short)13754)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */short) arr_2 [i_2])))))))));
                }
                for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((int) 63LL)))));
                    arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */int) 3406271965U);
                    arr_13 [i_0] [i_1] [i_0] [6LL] = ((/* implicit */signed char) max((min((min((arr_8 [i_0] [i_1] [i_3] [(signed char)4]), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) ((signed char) -2435745233941284461LL))))), (var_8)));
                }
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_4])) ? ((~(918353239U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))));
                    arr_17 [(signed char)14] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_4 [(signed char)3] [(unsigned char)14] [i_0]))));
                    arr_21 [i_0] [i_1] [i_5] |= ((/* implicit */signed char) min((2772923404534418388LL), (((/* implicit */long long int) (_Bool)1))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (var_11)));
    var_22 = ((/* implicit */unsigned char) (short)9627);
    var_23 = ((/* implicit */signed char) min((var_23), (var_2)));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_10)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_6)))))) : (min((((/* implicit */unsigned int) 305156598)), (((888695317U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))))));
}
