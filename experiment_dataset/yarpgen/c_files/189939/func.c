/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189939
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-8133)))))))) ^ (var_0)));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) max((min((arr_0 [i_0 + 3]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((int) min(((short)8153), (((/* implicit */short) var_5))))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 3])) + (((/* implicit */int) arr_3 [i_1 + 1])))))));
            var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-8133))))) * (min((arr_0 [i_0]), (((/* implicit */long long int) var_2))))))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-8133)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */short) ((var_1) / (((/* implicit */unsigned long long int) var_10))));
            var_16 = ((/* implicit */short) ((_Bool) ((signed char) arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 1])));
            var_17 = ((/* implicit */unsigned short) (short)8133);
            var_18 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)8132)))))) : (((/* implicit */int) arr_3 [i_0])))));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-8133)))) ? (((((/* implicit */int) arr_11 [i_0 + 1])) >> (((((/* implicit */int) arr_11 [i_0])) - (89))))) : (max((var_9), (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_3]))))));
            var_19 = ((/* implicit */unsigned short) ((2717011510043238611ULL) + (((/* implicit */unsigned long long int) ((int) var_5)))));
        }
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0LL))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_5]))))) ? ((~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2])))) : ((~(var_7)))));
                var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) var_2)), (12783619607555208307ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((-(arr_16 [i_0] [i_4 + 1] [i_0])))));
                arr_18 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_6 [i_0 + 3] [i_0] [i_0]), (arr_6 [i_0 + 3] [i_0] [i_0 + 3]))))));
            }
            /* vectorizable */
            for (short i_6 = 4; i_6 < 22; i_6 += 2) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_7 [i_6 + 1] [i_0 + 1] [i_4 - 1]))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4 + 4] [i_6 + 2]))));
                    arr_23 [i_0 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_7] = ((/* implicit */unsigned int) var_7);
                }
                var_26 = ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4])));
                var_27 *= ((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_6] [i_4] [i_0])) ^ (((/* implicit */int) arr_20 [i_0]))))));
                var_28 = (!((_Bool)1));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((signed char) arr_15 [i_0]));
                var_30 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_20 [i_4 + 3])))) - ((~(((/* implicit */int) (unsigned char)89))))));
            }
            var_31 = ((/* implicit */unsigned char) (unsigned short)13237);
        }
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */long long int) var_2);
        var_33 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_9 + 1] [i_9 - 1])) * (((/* implicit */int) var_8))));
        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5233))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 4) 
    {
        arr_32 [i_10] = ((/* implicit */short) ((signed char) arr_30 [i_10 - 1]));
        var_35 = ((/* implicit */short) ((var_5) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (short)2535))))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) * (0ULL)));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_37 = ((/* implicit */short) (-((~(var_1)))));
        arr_36 [i_11] [i_11] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_1))) != ((~(((/* implicit */int) arr_4 [7LL] [i_11 - 1]))))));
        arr_37 [i_11] = var_6;
        arr_38 [i_11] = ((/* implicit */unsigned char) var_10);
    }
}
