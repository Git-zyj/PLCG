/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2487
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (4294967295U)))), (min((var_5), (((/* implicit */long long int) arr_3 [i_1])))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_1])), (arr_3 [i_0])))) == (var_7))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (+(1351584094U)));
                            arr_14 [i_0] [i_0] [i_1] [i_1] [12] [i_1] = ((/* implicit */unsigned char) min((((((arr_12 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((arr_10 [i_0]) + (((/* implicit */int) arr_3 [i_0])))))));
                            var_18 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_10 [i_0]))) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */int) var_12)) << (((var_4) - (3728050217U)))))))), (1351584094U)));
                            var_19 = ((/* implicit */unsigned short) ((((int) arr_0 [i_3])) - ((+(((/* implicit */int) arr_0 [i_1]))))));
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(unsigned char)15])) ? (((6249075092232637006LL) | (((/* implicit */long long int) 1270158465U)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) arr_10 [i_0]))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_7 [i_0] [(signed char)5] [i_0])))) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [8LL])) ? (arr_12 [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))))))));
            }
        } 
    } 
}
