/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212390
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned long long int) 1132304570813431364ULL));
        var_15 = ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [6ULL])) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_13 [i_1] [i_2] [i_3] [i_4 + 1] [(_Bool)1] = ((/* implicit */_Bool) 17314439502896120274ULL);
                            arr_14 [i_2] [i_2] [13ULL] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((arr_9 [i_1] [i_1] [i_3] [i_4] [i_5]) ? (17314439502896120250ULL) : (var_13))) : (arr_4 [i_1 + 1] [10ULL] [(_Bool)1])));
                            var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < ((+(var_5))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1)))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_18 = ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2])) ? (arr_5 [i_1 - 2] [i_1 - 3]) : (15277258397975291567ULL));
                            var_19 = ((arr_8 [13ULL] [i_4 - 2] [i_4 - 2] [i_1 - 2]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_1 - 2] [i_4 + 1] [i_1 - 2]))));
                            var_20 += ((/* implicit */_Bool) ((arr_6 [i_1 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                        arr_18 [i_2] [i_2] [(_Bool)1] = 3169485675734260049ULL;
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) >> (((var_8) - (10433362397953344878ULL))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2] [i_7 - 1])) ? (var_7) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (arr_11 [i_7] [i_1] [i_1])))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (var_13) : (arr_2 [i_7 + 1])));
        }
        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            arr_23 [i_1 - 3] [i_1 - 3] [i_8] = ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_8 + 1] [i_8])) ? (var_7) : (var_4)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_1 + 2]))));
            var_26 = ((arr_22 [i_1 - 3]) ? ((~(1685869799829544146ULL))) : (0ULL));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_8 [i_1 - 2] [i_9] [(_Bool)1] [i_9])))) << (((var_8) - (10433362397953344863ULL)))));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_10))));
            var_29 = ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_30 [i_1] = var_3;
            var_30 = ((/* implicit */_Bool) ((arr_22 [i_1 + 1]) ? (((/* implicit */int) ((var_2) || ((_Bool)1)))) : (((/* implicit */int) arr_15 [i_1 + 2] [i_1 - 1]))));
            arr_31 [i_1] [i_10] [i_1] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_20 [i_1] [i_1] [i_10])));
            arr_32 [(_Bool)1] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_1 - 2]))));
        }
        var_31 |= var_9;
    }
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((var_5) | (((unsigned long long int) ((_Bool) 12594349914696075572ULL))))))));
    var_33 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2)))) | (((/* implicit */int) var_3))));
}
