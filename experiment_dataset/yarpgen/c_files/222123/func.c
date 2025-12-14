/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222123
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (short)32767))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)-23605))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_3] [i_2 + 2] [i_2] [i_1]))));
                        arr_14 [15ULL] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (var_7)))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(signed char)1] [i_2 + 2] [i_0])) : (((/* implicit */int) var_3))));
                    }
                    var_13 -= ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_2 + 1])) <= (((/* implicit */int) ((((/* implicit */_Bool) -4296250782987435099LL)) || (((/* implicit */_Bool) (short)32767)))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-8434)) : (((/* implicit */int) (short)-23605)))), (1230118998)))), (min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_9)), (var_6)))))));
                    arr_17 [i_0] = max((((/* implicit */int) ((unsigned short) var_2))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_9 [i_0] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_4)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_20 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) var_8);
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) % (((((/* implicit */_Bool) var_4)) ? (arr_7 [3LL] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5635508485801442464LL))))));
                }
                arr_22 [i_0] [i_0] = ((/* implicit */long long int) 139742423);
                var_17 = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7 - 3] = ((/* implicit */int) var_5);
                            var_18 -= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_24 [i_7] [(short)16] [i_7] [i_7])) : (arr_23 [16LL] [i_1] [i_6]))), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) (-(var_7))))));
                            arr_31 [i_0] [(signed char)4] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */int) (signed char)-52)), (var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))) : (((/* implicit */int) var_3))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_7 [i_0] [i_0]) % (var_6))), (((/* implicit */unsigned long long int) var_3))))) || (((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) min((max((((/* implicit */int) var_3)), (804869116))), (((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (arr_8 [i_1])))) ? (((/* implicit */long long int) ((int) (unsigned short)1023))) : ((-(arr_5 [i_0])))))));
            }
        } 
    } 
    var_20 += ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_5)))))))), (var_0)));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 0ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (min((var_8), (((((/* implicit */_Bool) var_6)) ? (var_8) : (-7424839124295761884LL)))))));
}
