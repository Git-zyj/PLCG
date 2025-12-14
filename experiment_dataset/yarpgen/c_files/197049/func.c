/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197049
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((((/* implicit */int) var_9)) + (1232189257)))))) : ((-(max((-996331816429369841LL), (((/* implicit */long long int) 1427082248)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) 2789182101435645471LL)) > (2360898582723916428ULL))))))), (arr_2 [i_0] [i_0]));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 1232189257))));
                arr_5 [i_0] [i_0] [6U] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [4U]))), (((((/* implicit */_Bool) arr_0 [(unsigned char)8])) ? (arr_2 [i_0] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [10])))))));
                var_15 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [i_0]))), (arr_1 [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0])) : (((long long int) (-(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_16 -= var_9;
                            arr_10 [i_0] [i_0] [i_2] = min((((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_1])), (var_5));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) (~(var_2))))), (var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            {
                var_18 = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((long long int) min((arr_13 [i_5 + 3]), (arr_13 [i_5 + 2]))));
                            var_20 = arr_12 [i_6] [i_7];
                            var_21 -= ((/* implicit */short) arr_17 [i_5 + 1] [i_4]);
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1016503966)) - (((((/* implicit */_Bool) arr_16 [(unsigned char)11])) ? (arr_11 [i_4] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29260)))))));
                            var_23 = ((/* implicit */short) ((min((arr_11 [15LL] [i_7]), (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [11U] [i_7])))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_11 [i_4] [i_4]))), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_5] [i_6] [i_5] [i_4]))))));
                        }
                    } 
                } 
                var_24 = min((((arr_14 [i_5 - 1] [i_5]) - (arr_14 [i_5 + 3] [i_5 + 3]))), (((((/* implicit */_Bool) arr_12 [i_4] [i_5 + 2])) ? (arr_14 [i_5 - 1] [i_5 - 1]) : (((/* implicit */int) var_3)))));
            }
        } 
    } 
}
