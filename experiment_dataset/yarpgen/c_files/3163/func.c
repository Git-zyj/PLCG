/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3163
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1154592981U)) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 3]))), (((/* implicit */long long int) ((unsigned int) -4812664886649667661LL)))));
        var_11 = max((-4812664886649667656LL), (((/* implicit */long long int) (~(((unsigned int) var_4))))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((6131857782078899391LL) / (max((((long long int) arr_2 [i_1] [i_1])), (max((((/* implicit */long long int) 3140374315U)), (4812664886649667656LL)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_12 = ((((/* implicit */_Bool) ((max((arr_7 [i_1] [i_1]), (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) ((184157056U) % (arr_2 [i_1 + 3] [11LL]))))))) ? (max((((/* implicit */long long int) var_9)), (arr_1 [i_2 - 1] [i_2 + 1]))) : ((+(((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1 - 1] [i_2]) : (arr_1 [i_1] [i_2 - 1]))))));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6517156038867934629LL)) ? (3159449855703092569LL) : (((/* implicit */long long int) (-(var_2))))));
            arr_9 [i_1 + 1] [i_2] [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
            arr_10 [i_1] = max((((/* implicit */long long int) 4110810239U)), (min((max((((/* implicit */long long int) var_2)), (-8641129951760481739LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8641129951760481739LL)) ? (var_4) : (arr_3 [i_1])))))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_2);
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_14 = arr_15 [i_1 + 1] [6LL];
            /* LoopSeq 1 */
            for (long long int i_4 = 3; i_4 < 11; i_4 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (arr_4 [i_3])));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~((+(arr_17 [i_3] [i_4 - 3] [i_4 - 3]))))))));
                var_17 -= ((long long int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_1 + 1] [i_1]))));
            }
            arr_18 [i_1] = ((/* implicit */long long int) var_9);
            /* LoopSeq 4 */
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) max((4770866514320338835LL), (arr_15 [6LL] [i_5]))))))))));
                var_19 += ((/* implicit */long long int) var_5);
                var_20 -= ((/* implicit */long long int) arr_12 [i_5]);
                arr_21 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (3083590600927330204LL) : (-4768210434380638013LL)));
            }
            for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned int) -2116458184942127507LL))))) ? ((+(((unsigned int) var_7)))) : (var_3)));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1908227215U)) ? (arr_20 [i_7 - 1] [i_6] [i_3] [i_1]) : (arr_20 [i_1 + 1] [i_3] [i_7 + 1] [i_8 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1 + 3] [i_3] [i_6] [i_8 + 2])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1 + 3] [i_3] [i_6] [i_7 - 1])))))));
                            arr_31 [i_1] [i_3] = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
            }
            for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 184157060U))))) >> ((((-(arr_8 [i_1 + 1]))) + (3505564302874812517LL)))));
                var_23 = max((((/* implicit */long long int) arr_16 [i_1] [i_3])), (-3390477827031984154LL));
            }
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_3] [12LL] [i_10]))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        {
                            arr_40 [i_1] [i_12] = arr_2 [i_1 + 1] [i_10 + 1];
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8641129951760481739LL)) ? (4770866514320338841LL) : (-3652112315794011343LL)))) ? (610235416U) : (arr_12 [i_12])))));
                            arr_41 [i_12] [i_1] [i_10] [i_3] [12LL] [i_1] [i_1 + 1] = ((/* implicit */long long int) 3985978531U);
                        }
                    } 
                } 
            }
            arr_42 [i_1] [12LL] [i_1] = ((unsigned int) (!((!(((/* implicit */_Bool) 5729443388748053705LL))))));
        }
    }
    var_26 ^= var_0;
    var_27 &= ((((/* implicit */long long int) var_6)) - (((long long int) var_9)));
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (4110810235U)))), ((~(-2521309324040128072LL))))))));
}
