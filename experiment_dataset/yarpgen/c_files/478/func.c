/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/478
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)65517))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 439477614)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) var_6)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((~(((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) var_0)) : (9479648935271891629ULL))))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_9)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) min(((((!(arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), (var_10))))) : ((+(var_5))))), (((/* implicit */unsigned long long int) arr_3 [i_0] [24] [i_1]))));
            arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) var_9))))) >= (((((/* implicit */_Bool) 8967095138437659982ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_0 [i_0])))))), (((((((/* implicit */_Bool) var_11)) ? (9479648935271891629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))))))));
        }
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_2] [i_0] [(unsigned short)4] &= ((/* implicit */unsigned short) arr_0 [i_0]);
            var_16 = ((/* implicit */short) var_2);
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 23; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */long long int) ((unsigned short) ((((long long int) -513159587)) == (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_3)))))));
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) min((var_1), (var_1))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_3 [i_5] [(unsigned short)1] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_15 [8] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_3]))))))))));
        }
        var_19 = ((/* implicit */int) max((((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0] [20LL] [i_0]) : (((/* implicit */int) (unsigned short)42022))))), (((/* implicit */unsigned short) arr_11 [17ULL] [i_0] [i_0]))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((arr_9 [i_7]) * (((/* implicit */unsigned long long int) arr_18 [15U] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (arr_9 [i_7])));
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) var_2);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((-560210397), (((/* implicit */int) (unsigned short)19942))))) : (((unsigned long long int) (+(var_0))))))));
    }
}
