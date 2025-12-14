/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50876
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) var_4);
        arr_2 [(_Bool)1] [(signed char)14] = ((/* implicit */long long int) max((max((4294967295U), (4294967277U))), ((-(4294967278U)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) (~(2952828808U)));
            var_11 += ((/* implicit */unsigned int) (+(arr_4 [i_0 + 3] [i_0 + 3] [i_0])));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_12 -= ((/* implicit */long long int) min(((short)-4853), (((/* implicit */short) (!(var_5))))));
                        var_13 = ((/* implicit */signed char) max((var_4), (max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7979))) : (var_4))), (min((4294967295U), (((/* implicit */unsigned int) 1052294600))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_17 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) 1342138487U);
                arr_18 [i_2] [i_2] [i_5] = ((/* implicit */short) (~(-6495479037381599534LL)));
                arr_19 [i_0 + 2] [i_0 + 2] [0] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_2] [20LL] [i_5]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((8191LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_16 [i_0] [i_0] [i_0]) : (1027562155U)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)3)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_1))))) : (min((var_2), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911LL)) ? (1342138487U) : (1342138488U)))))))));
                var_15 -= (~((~(2097151LL))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) 2952828807U)) ? (4294967291U) : (1342138480U)))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (var_1)));
                var_18 = ((/* implicit */int) min((2952828831U), (4294967277U)));
            }
        }
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */_Bool) (-(2952828808U)));
        var_19 = ((/* implicit */long long int) min((max((763099375), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2952828806U)))))));
        arr_26 [(_Bool)1] [i_7] = ((/* implicit */int) max((((((/* implicit */_Bool) var_8)) ? (-7271588710989104790LL) : (arr_11 [i_7] [i_7]))), ((+(536870911LL)))));
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        var_20 = max((((/* implicit */long long int) min((max((((/* implicit */unsigned int) (_Bool)1)), (0U))), (4294967274U)))), (max((max((-9131198551186812220LL), (7469258659781700125LL))), (arr_13 [i_8] [10LL]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            arr_32 [i_9] [i_9] [i_9 + 2] = (!(((/* implicit */_Bool) arr_30 [i_9 + 1])));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            var_22 -= ((/* implicit */signed char) arr_13 [i_9 + 1] [i_9 + 1]);
        }
    }
    var_23 = ((/* implicit */long long int) var_1);
    var_24 = ((/* implicit */long long int) min((var_24), (var_0)));
    var_25 = ((/* implicit */unsigned int) var_0);
    var_26 = ((/* implicit */_Bool) var_0);
}
