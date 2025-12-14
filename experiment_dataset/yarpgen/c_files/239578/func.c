/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239578
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) var_2);
        var_14 *= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 = (!(((/* implicit */_Bool) var_3)));
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_4))))) != ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            arr_7 [i_2] [(unsigned char)12] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((var_7), (((/* implicit */int) arr_0 [i_1] [i_2]))))), (max((max((var_12), (((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2])))), (((/* implicit */long long int) var_5))))));
            var_18 += ((/* implicit */_Bool) arr_1 [i_1]);
            var_19 = ((/* implicit */unsigned short) (-(var_4)));
            arr_8 [i_1] [i_2] = ((/* implicit */signed char) max((((max((arr_1 [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_2])))) << (((min((var_8), (((/* implicit */long long int) arr_0 [i_2] [i_2])))) + (342195427369455661LL))))), (((max((arr_2 [i_1]), (arr_1 [i_2]))) * (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_9)))))))));
            var_20 -= var_4;
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        arr_17 [(unsigned char)4] [i_1] [(unsigned char)4] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_3] [i_1] [i_1]))) != ((-(min((((/* implicit */long long int) var_1)), (var_6)))))));
                        arr_18 [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (arr_0 [i_1] [(unsigned short)5])))), (((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_4]) > (arr_11 [i_1]))))) * (((var_12) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_4] [i_4])))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((arr_15 [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_1] [(short)1])), (max((((/* implicit */long long int) arr_5 [i_3] [i_1] [14ULL])), (arr_11 [i_3]))))))));
        }
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_6 [i_1])), (var_0))), (((/* implicit */long long int) var_10))));
            arr_23 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), ((-(((arr_21 [i_1] [i_6]) / (((/* implicit */int) var_1))))))));
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_16 [10LL] [i_1] [i_1] [i_7])))) % ((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))), (min((((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((((var_0) + (494769379243504079LL))) - (49LL)))))), (min((arr_15 [i_1]), (var_4))))))))));
            arr_27 [i_7] = ((/* implicit */int) min((min((min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) arr_9 [i_7] [(signed char)0] [(signed char)0])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                arr_34 [i_1] [i_8] [i_8] = ((/* implicit */signed char) (+(((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (63106)))))));
                var_24 = ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */unsigned long long int) (~(var_8))))));
                            var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_40 [4LL] [i_11] [i_9] [i_10] [i_11])) & (((/* implicit */int) arr_6 [i_1]))))));
                            var_27 = ((/* implicit */unsigned long long int) (+((+(var_5)))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_7))));
        }
        var_29 = ((/* implicit */unsigned char) max((var_5), ((~(arr_41 [i_1] [i_1])))));
    }
    var_30 = ((/* implicit */unsigned char) var_1);
    var_31 = ((/* implicit */unsigned short) (+(var_7)));
}
