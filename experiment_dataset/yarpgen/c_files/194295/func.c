/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194295
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)201)) - (((/* implicit */int) (unsigned char)229))));
    var_11 = ((/* implicit */int) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)223))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) / (var_8)));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) + (arr_0 [6U]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (arr_5 [i_1 + 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 + 1]));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)6206))))) : (var_7)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */short) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (signed char)-121)), (var_3))))) << ((((((+(var_2))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((140703128616960LL) != (((/* implicit */long long int) var_8)))))))) - (15339173296647331587ULL)))));
                    var_17 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((var_7) / (var_8)))), (arr_6 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_4])) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_2] [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        var_18 = (((-(6630354396790097621LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_1))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_3] [i_4] [i_4])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((max((arr_16 [i_2] [i_3] [i_4] [i_6]), (((/* implicit */long long int) var_1)))), (((arr_16 [13ULL] [i_3] [i_4] [7LL]) + (arr_16 [i_2] [i_3] [i_4] [i_4])))));
                        var_22 = ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (max((arr_16 [i_4] [i_4] [i_2] [i_2]), (((/* implicit */long long int) 2197140423U))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            var_23 = (signed char)-62;
            var_24 = ((/* implicit */unsigned short) ((-1893824598779733487LL) >= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)11063)) : (((((/* implicit */_Bool) 140703128616939LL)) ? (0) : (((/* implicit */int) (short)6206)))))))));
        }
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) max((min(((+(((/* implicit */int) (signed char)-123)))), (((/* implicit */int) (unsigned short)24078)))), (((/* implicit */int) (signed char)127))));
        arr_25 [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */int) arr_22 [i_8]))))), (max((var_3), (((/* implicit */unsigned long long int) var_0))))));
        var_26 = ((/* implicit */short) (!(((((/* implicit */int) (unsigned char)204)) != (var_8)))));
        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))));
    }
}
