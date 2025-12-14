/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44855
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_1 [i_0]) : (arr_1 [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] = max((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_6)))), ((-(arr_1 [i_1 - 1]))));
            arr_7 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
        }
        for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) arr_3 [i_2])))))))) : (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1] [2])) ? (((/* implicit */long long int) var_5)) : (var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_2])))))))));
            var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_10 [i_0])))), (((/* implicit */int) var_8))))));
            arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_2 - 1]), ((_Bool)1))))) * (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2 - 2])))))));
            arr_12 [i_0] = ((long long int) arr_9 [(unsigned char)9] [i_0]);
            var_14 ^= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) arr_5 [i_0]))))), (var_4))), (((arr_5 [i_2 - 2]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 3])))))));
        }
        arr_13 [i_0] = ((/* implicit */int) arr_8 [i_0]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)64)) & (((/* implicit */int) (_Bool)1))));
        arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))) : ((((((_Bool)1) || (var_7))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (var_1) : (((/* implicit */long long int) var_2)))) : (arr_1 [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_3])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_21 [i_3] = (_Bool)0;
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_19 [2LL] [i_5]))) << (((max(((+(var_1))), (((/* implicit */long long int) var_9)))) - (4333290380972344625LL)))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_10 [0])));
                arr_27 [i_5] &= (signed char)-116;
                arr_28 [i_3] [i_5] [i_6] = ((signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
            }
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
            arr_33 [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((var_0), (((long long int) (_Bool)1)))))));
        arr_34 [i_3] [i_3] = ((/* implicit */unsigned char) arr_32 [i_3]);
        arr_35 [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))));
    }
}
