/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39409
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
    var_15 = var_10;
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_4) : (var_9))), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (var_11) : (var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((var_12) >= (6956958835484174469ULL)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 -= ((((/* implicit */_Bool) 6278601008847124682ULL)) ? (4611685949707911168ULL) : (13835058124001640448ULL));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((var_4) > (var_13))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0 - 3] [i_0 + 1])) ? (arr_12 [i_0 - 3] [i_4] [i_0 - 2]) : (var_1))) : (max((arr_12 [i_0 - 3] [12ULL] [i_0 - 1]), (var_11)))))));
                                var_20 = ((unsigned long long int) min((13835058124001640448ULL), (4611685949707911171ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] = arr_15 [i_0];
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((unsigned long long int) ((var_13) << (((var_9) - (9026624572776629153ULL))))))) ? (((min((7107775230299070112ULL), (arr_8 [i_1] [i_1] [i_1]))) << ((((~(((/* implicit */int) (_Bool)1)))) + (26))))) : (((((/* implicit */_Bool) (~(var_12)))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0 - 3] [i_5]))), (11421607181593082650ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)1), (var_14))))))) : (var_12)))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned long long int) arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [(_Bool)1]);
                                var_24 = ((unsigned long long int) arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1]);
                                var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                    var_26 += ((unsigned long long int) 2ULL);
                    arr_30 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1] [i_6] [i_1] [i_0] [22ULL] [22ULL])) || (((/* implicit */_Bool) arr_1 [i_1] [i_1])))))) / (arr_4 [i_1] [i_1]));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((arr_10 [i_0 + 1] [i_0 + 1]) ? (min((((/* implicit */unsigned long long int) var_8)), (var_6))) : (9948709729815347563ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_11)));
                }
                arr_35 [i_0] = ((/* implicit */unsigned long long int) ((arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) != (min((arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 3]), (arr_23 [i_0 + 1] [i_0] [i_0 - 3])))));
                var_29 -= ((unsigned long long int) min((var_9), (((/* implicit */unsigned long long int) arr_27 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 2]))));
            }
        } 
    } 
}
