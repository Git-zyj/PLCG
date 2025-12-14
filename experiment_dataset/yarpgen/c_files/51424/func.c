/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51424
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
    var_20 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) -670395609);
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))))));
                }
                arr_7 [(unsigned short)2] [i_1] = ((/* implicit */unsigned int) (!((((!(((/* implicit */_Bool) (short)0)))) || (((/* implicit */_Bool) arr_3 [i_0]))))));
                var_23 = ((/* implicit */signed char) max(((~(arr_4 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(1003307192)))))) ? ((+(arr_4 [i_0] [i_1] [i_3]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55099))) / (18446744073709551603ULL)))) ? (((((/* implicit */unsigned long long int) var_7)) * (var_17))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_18))))))));
                            arr_15 [4U] [i_4] [11ULL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_0])) ? (((((/* implicit */_Bool) 10096251447082564662ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)13174)) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) (-(2593501343U))))));
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_10);
}
