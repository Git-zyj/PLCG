/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194564
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
    var_19 ^= -76860670;
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (min((1ULL), (((/* implicit */unsigned long long int) -1130600358544011420LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((var_15) + (var_1))) + (((((/* implicit */int) var_10)) + (-1370685404))))))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(-232958880)))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_13))))) ? (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (((((+(var_1))) ^ (((/* implicit */int) ((_Bool) 12523615982224231041ULL))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 3])) && (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])) ? ((-(var_1))) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_1)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)3] [i_2] [i_3])) ? (var_13) : (((/* implicit */int) (unsigned short)16947)))) : (min((((/* implicit */int) var_5)), (var_15))))) : (((/* implicit */int) ((((((/* implicit */int) (short)30513)) >> (((var_17) + (774657545))))) <= (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) arr_5 [(unsigned char)1] [i_1 + 3] [5LL])))))))));
                        }
                    } 
                } 
                arr_9 [3] [i_0] = ((/* implicit */unsigned char) (+(437286497)));
                var_24 = ((/* implicit */_Bool) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) 1126419014))))), (var_0)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)-10672)), (237258550)));
                                var_26 = ((unsigned short) (~(((/* implicit */int) min((arr_6 [i_6] [i_5] [i_1]), (((/* implicit */unsigned short) var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
