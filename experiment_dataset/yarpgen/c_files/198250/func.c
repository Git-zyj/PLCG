/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198250
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] [(signed char)19] = ((/* implicit */short) var_3);
            var_11 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            var_12 = ((arr_3 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))));
        }
        var_13 = ((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_14 = ((((/* implicit */int) (short)32767)) >> (((-8556600098714911949LL) + (8556600098714911975LL))));
                        var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 544402948))) ? (arr_18 [i_2] [i_2] [i_4 + 3] [i_4] [(_Bool)1]) : (arr_1 [i_3])));
                        var_16 = ((/* implicit */signed char) ((arr_18 [i_0] [i_4 + 3] [10LL] [1ULL] [i_4 + 1]) >> (((/* implicit */int) var_0))));
                        arr_19 [i_0] [i_4] [i_3] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_0] [i_0] [i_4 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_18 [i_4 + 2] [i_4 + 2] [15ULL] [i_4 + 2] [15ULL])));
                        arr_20 [20LL] [20LL] [i_2] [i_0] [20LL] [i_4] = ((/* implicit */short) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_17 = ((/* implicit */short) var_1);
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 7669435338537751574ULL)))))));
        arr_24 [i_5] = min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (5767803080896506815ULL));
    }
    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_11 [i_6]);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_9 [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3288742208U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (max((arr_10 [i_6 - 1]), (((/* implicit */long long int) var_8)))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (~((-((-(((/* implicit */int) var_0))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_2)), (5345231230834891530LL)))));
                        /* LoopSeq 1 */
                        for (int i_11 = 3; i_11 < 13; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) arr_36 [10ULL] [i_9] [i_8] [i_7]);
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_11] [i_11]), (arr_5 [i_10] [i_11]))))));
                        }
                        arr_40 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) ((((unsigned int) 4289578469U)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) -8091045213717696388LL))));
                        var_26 = ((/* implicit */long long int) arr_27 [i_7]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((long long int) var_2));
        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (signed char)-9)))));
        arr_41 [i_7 - 1] [3LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((-4109597539133680046LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) 5388826U)) : (((-5105982436888051179LL) - (-8091045213717696388LL))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))));
    }
    var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */long long int) 1756250396U)) >= (-6049344755255538388LL)))) / ((-(((/* implicit */int) var_5))))))));
}
