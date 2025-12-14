/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197215
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
    var_11 = var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((989700711507785382ULL) ^ (7997205470413128602ULL)))) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 2])) : (((/* implicit */int) (unsigned char)32))))) != (0ULL)));
                arr_7 [i_0] [(unsigned char)6] [i_0] = min(((((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))) ? (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)9]))))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 4] [i_1 - 2]))) <= (var_9)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_2 - 2]))) ^ (((/* implicit */int) ((min((var_0), (arr_11 [i_0] [8ULL]))) <= (var_0))))));
                            var_13 *= var_4;
                        }
                    } 
                } 
                var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_1 - 4] [i_1 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (7997205470413128602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [(unsigned char)2] [i_1 + 1] [8ULL]) == (arr_8 [i_1 - 4] [i_1 - 1] [i_1]))))));
                var_15 = ((((/* implicit */_Bool) arr_6 [5ULL] [1ULL] [i_1])) ? (((max((3513897898547847731ULL), (989700711507785382ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))) : ((((-(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))))));
}
