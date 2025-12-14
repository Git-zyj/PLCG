/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194620
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
    var_13 = ((((unsigned long long int) ((var_9) & (1294100729U)))) | ((~(((var_3) ^ (2994068001812094316ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (2920461747U)))) && (((arr_3 [i_0]) >= (1374505535U))))))));
            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1374505560U)) ? (3092855000U) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (2920461737U) : (var_2)))) : (18146491231991056722ULL)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_16 = (-(((var_9) * (1202112283U))));
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-5854)))))) == (arr_2 [i_4])));
                        arr_17 [i_5] [i_2] &= ((/* implicit */unsigned long long int) 1374505543U);
                        var_18 *= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_3] [i_4] [i_5]);
                        arr_18 [i_0] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32202)) && (((/* implicit */_Bool) 11399749747336706059ULL)))) || (((/* implicit */_Bool) (-(3410490686U))))));
                    }
                    arr_19 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26035))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_0] [i_4] [i_4 - 3] [i_4]))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8047783344785627137ULL)))))));
                }
                arr_20 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3092854970U) >> (((15052787179418513777ULL) - (15052787179418513771ULL)))))) && ((!(((/* implicit */_Bool) (short)3463))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_3])))))));
            }
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? (((/* implicit */unsigned long long int) (+(arr_15 [i_0])))) : (((((/* implicit */unsigned long long int) 3092854997U)) & (8047783344785627120ULL)))));
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_24 [i_0] [i_2] [i_2] [i_2] = 3092854999U;
                var_24 *= arr_3 [i_6];
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_28 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_13 [i_0] [i_2] [i_7] [i_7]) : (arr_13 [i_0] [i_2] [i_7] [i_7])));
                var_25 = ((/* implicit */short) ((arr_13 [i_2] [i_2] [i_7] [i_7]) | (arr_13 [i_0] [i_0] [i_2] [i_7])));
                var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) * (arr_9 [i_0] [i_2] [i_0]))))));
                var_27 = ((/* implicit */unsigned int) (~(5332277983560412527ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    arr_31 [i_0] [i_8 + 2] [i_7] [i_0] [i_2] = ((/* implicit */unsigned int) 13114466090149139116ULL);
                    var_28 = ((/* implicit */unsigned int) 4567864635502556076ULL);
                }
            }
        }
        var_29 = ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (13114466090149139070ULL) : (7320272028326187467ULL));
        var_30 += arr_3 [i_0];
    }
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (unsigned int i_11 = 3; i_11 < 9; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_11 + 1]), (arr_15 [i_11 + 1])))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10148)))));
                        var_33 -= ((/* implicit */unsigned int) (~(10676950288953653880ULL)));
                    }
                } 
            } 
        } 
    }
}
