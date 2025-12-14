/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235832
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3])))) / ((~(18446744073709551614ULL)))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((short) max((((/* implicit */short) ((((/* implicit */int) (unsigned short)23440)) > (((/* implicit */int) (unsigned short)42093))))), (min((var_5), ((short)4032)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [(unsigned short)6] [i_2] = ((/* implicit */signed char) (unsigned short)46809);
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 984589735553893434LL)) || (((/* implicit */_Bool) (signed char)-1))));
                    arr_14 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2] [i_0] [i_1]))))), (10656176861359541397ULL)));
                }
                var_17 = ((/* implicit */short) var_14);
                var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((var_3) <= (((/* implicit */long long int) var_13))))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) (unsigned short)23452)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            {
                arr_22 [(short)3] = ((/* implicit */_Bool) ((unsigned long long int) var_13));
                var_19 = ((/* implicit */long long int) arr_0 [i_5]);
                var_20 = ((/* implicit */short) (~(arr_16 [i_5 - 1])));
                arr_23 [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
                var_21 = ((/* implicit */_Bool) ((signed char) max((min((arr_9 [i_5] [i_6] [i_5] [(short)7]), (arr_9 [(short)1] [(_Bool)0] [i_6] [(_Bool)0]))), (((/* implicit */long long int) arr_3 [i_6] [i_6 - 2] [i_5 + 2])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 7679992458016653869ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9315))) : (699415799357269923ULL))), ((-(1518457077464988870ULL))))))));
}
