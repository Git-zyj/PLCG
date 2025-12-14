/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200658
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_5 [i_0 - 1])))) + (((/* implicit */int) arr_5 [i_0 - 1]))));
                            var_12 = ((/* implicit */int) min((var_12), ((~((-(((/* implicit */int) arr_5 [i_0 + 1]))))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned long long int) (~((~(((/* implicit */int) var_4))))))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */int) max((((arr_7 [i_1] [i_1] [(signed char)3]) + (-1581696437054622014LL))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)28)), (arr_0 [i_0] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [(unsigned char)7] [3] [i_1] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [4ULL] [i_1])), (arr_13 [i_4] [i_1] [i_4] [i_1])))) == (((/* implicit */int) min((arr_13 [6] [i_5] [i_5] [i_5 - 2]), (((/* implicit */unsigned short) arr_3 [i_0] [i_1]))))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (min(((-(2554241950994924207LL))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)5] [i_0] [i_0]))) > (511U)))))))))));
                            arr_18 [i_1] [i_1] [i_4] [i_1] = (+(((unsigned long long int) arr_8 [i_0] [i_4])));
                            arr_19 [i_0] [i_0] [i_1] [i_0 + 2] [(signed char)3] = ((((/* implicit */_Bool) min((arr_1 [i_5]), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) | (var_10)))))) ? (var_8) : (((((/* implicit */int) arr_4 [i_0] [i_1])) + (((/* implicit */int) ((signed char) var_9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)-83))));
}
