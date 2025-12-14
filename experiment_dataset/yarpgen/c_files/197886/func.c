/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197886
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), (var_2)))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_11))))) ? (var_10) : (((/* implicit */int) arr_3 [i_0])))) : ((-((-(((/* implicit */int) var_4))))))));
        var_13 = ((/* implicit */short) min(((unsigned short)43663), (min(((unsigned short)48), (var_8)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) >= (min((((/* implicit */long long int) (unsigned short)65488)), (((long long int) var_1))))));
            arr_10 [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
            var_14 = ((/* implicit */long long int) max((var_14), (max((((/* implicit */long long int) var_0)), ((~((~(arr_5 [i_0])))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_15 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_1 [i_0])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) arr_6 [i_2] [i_0]))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((arr_12 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65490)))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) max((((arr_15 [i_4] [i_4] [i_4 - 1] [i_4 + 1]) > (arr_15 [i_4] [i_4] [i_4 - 2] [i_4 + 1]))), (((arr_16 [i_2] [i_4] [i_4] [i_4 - 1] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        arr_19 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */int) min((max((arr_2 [i_4 + 1] [i_4 - 2]), (((/* implicit */long long int) var_4)))), ((~(3057290108193881280LL)))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_21 [i_5]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((unsigned int) (-(30U))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_7)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_10)) ? (var_12) : (var_12)))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_20 [i_5]), (arr_20 [i_5])))) & ((-(((/* implicit */int) (unsigned short)48)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) ((unsigned short) (unsigned short)43652));
                    arr_28 [i_5] [i_5] [i_5] = ((/* implicit */short) var_5);
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_27 [i_5] [i_5] [i_7 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((+(arr_24 [i_5] [i_6] [i_7]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)43673)) : (((/* implicit */int) arr_21 [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48))) : (var_5)))))));
                }
            } 
        } 
        arr_29 [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_10)), (var_3))) | (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5])) * (((/* implicit */int) (unsigned short)21863)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_5] [i_5])))) / (((/* implicit */int) var_2))))) : (((long long int) ((unsigned short) var_1)))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (var_10)))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) (unsigned short)65280)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((var_4), (((/* implicit */short) ((((/* implicit */int) min(((short)32329), (var_2)))) >= (((/* implicit */int) ((var_5) >= (var_12))))))))))));
}
