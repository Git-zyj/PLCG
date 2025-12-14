/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33465
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
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) var_9)) ? (max((var_10), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) 1073737728U))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_0] [(unsigned char)11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_0 [i_0])))))) : (arr_1 [i_0 - 1] [i_1 + 2])));
                arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) arr_0 [i_1 - 2]))));
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_4 [i_1 - 2] [i_1] [i_1]))));
            }
            arr_9 [i_0] [1LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [6U])))) || (((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0]))));
            var_17 = ((/* implicit */long long int) var_6);
            arr_10 [i_0 + 2] [i_1 - 2] = ((/* implicit */unsigned long long int) 32767U);
            arr_11 [i_0] = ((/* implicit */short) (-(arr_2 [i_0 + 1])));
        }
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((arr_1 [i_0] [i_0 - 2]) / (((((/* implicit */_Bool) 1915973919U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (arr_2 [i_0]))))))));
        var_19 = ((/* implicit */int) var_11);
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_12 [i_3])) * (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) ((((/* implicit */int) min(((short)29005), (((/* implicit */short) arr_14 [i_3]))))) >= (((/* implicit */int) (unsigned char)255)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_14 [i_3]), (arr_14 [i_3])))) <= (((((/* implicit */_Bool) 3221229568U)) ? (max((var_5), (((/* implicit */int) arr_14 [i_3])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_14 [i_3])), ((signed char)-108))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned int) arr_18 [i_4] [i_4]);
        var_22 += ((/* implicit */unsigned char) ((arr_14 [i_4]) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) (unsigned char)245))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [8LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [0LL] [(short)9]))) : (var_12)));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5]))));
        }
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_23 [i_5]))));
        arr_25 [11LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    }
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned int) var_9)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))));
    var_26 = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_1)) ? (var_7) : (var_1))), (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
}
