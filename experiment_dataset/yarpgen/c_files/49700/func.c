/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49700
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
    var_10 = ((/* implicit */long long int) max((var_10), (max((((/* implicit */long long int) var_7)), ((~(((((/* implicit */_Bool) 1023685258U)) ? (var_2) : (6884270732772907219LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) 4294967289U)))) ? (min((max((((/* implicit */unsigned int) arr_4 [i_1])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(unsigned char)16])) < (((/* implicit */int) arr_4 [(signed char)4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((1023685283U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) > (((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */long long int) 3891444534U)) : (var_2)))))))));
                arr_5 [(unsigned short)17] [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_12 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [(signed char)15])))))) % (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_7 [i_0] [i_2] [i_2] [i_3])))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((min((arr_6 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) 1659532430U)))), (((/* implicit */unsigned long long int) (!(arr_8 [i_0] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] = (~(var_8));
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((3305050361425923439LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))) > (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((arr_16 [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_17 [i_5] = ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_23 [i_6] [i_7] |= ((/* implicit */long long int) arr_21 [i_6] [i_6 - 2] [i_6 - 1]);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_12 [(unsigned char)5])) >> (((/* implicit */int) (_Bool)1))))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))) : (3138751976609760744ULL))));
                        var_18 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_6 - 2] [i_6 - 1] [i_6 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 2] [i_6 + 1])) + (25))) - (7)))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        arr_31 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_12 [i_5]))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 2]))))));
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 514904571U)) ? (arr_9 [i_9] [i_9] [i_9 + 1] [i_9]) : (arr_7 [i_9] [18LL] [i_9 - 1] [i_9])));
                    }
                    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 - 2] [i_6 + 1])) ? (((/* implicit */int) arr_18 [i_6 - 2] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 2] [i_6 - 2]))))));
                }
            } 
        } 
    }
}
