/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244710
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_0 [i_0] [8ULL])) : (var_7))));
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 3])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) var_0))))));
        var_19 = ((long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_20 = min(((+((+(var_11))))), ((~(arr_1 [i_1 + 1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_7))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((unsigned long long int) (!((_Bool)1)));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((max((arr_7 [i_1 - 2] [i_1 + 2]), (((/* implicit */unsigned long long int) var_5)))) + (var_6))))));
                    var_23 = ((/* implicit */_Bool) ((int) ((unsigned int) (-(var_13)))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((long long int) -561775172993698617LL));
    }
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_4) : (var_17))), (var_9))))));
                    arr_21 [0LL] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (-561775172993698634LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 8; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_8] [i_7] [i_8] = ((/* implicit */long long int) var_4);
                    arr_29 [8U] [i_7] [i_4] = ((((/* implicit */_Bool) (-(((unsigned int) var_2))))) ? ((-(min((var_1), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (+(6693510656116493495LL)))));
                    arr_30 [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1909949554)) || (((/* implicit */_Bool) 11301791636317722392ULL))));
                    arr_31 [i_8] [i_7] [i_7] [i_4] = (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_7 - 1] [i_7 + 1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 4; i_10 < 9; i_10 += 2) 
            {
                {
                    arr_37 [i_4] [(_Bool)1] = ((long long int) var_10);
                    var_25 = ((/* implicit */long long int) max((var_25), (max(((~(((((/* implicit */_Bool) var_15)) ? (var_0) : (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -561775172993698654LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_11 [i_9] [i_9])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_15)) : (var_9))) : (((/* implicit */unsigned long long int) ((long long int) var_0)))))) ? ((+(4722164596350533900LL))) : (var_0)));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((long long int) (!((!(((/* implicit */_Bool) arr_5 [i_4] [i_4]))))))))));
                    }
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_11))))));
    var_29 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
}
