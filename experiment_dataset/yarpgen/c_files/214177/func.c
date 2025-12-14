/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214177
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [(unsigned char)0]))))) ? (((/* implicit */int) arr_3 [(short)5])) : (arr_4 [i_1] [(signed char)5])))) ? (((((/* implicit */_Bool) arr_1 [13] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)1))) : (arr_1 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1] [i_2]))) ? (((/* implicit */int) ((arr_1 [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_3)))))));
                    arr_9 [i_2] [i_1] [(unsigned char)2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_2] [i_1]);
                    var_16 = ((/* implicit */short) arr_0 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)0]))) : (var_7)))) ? (((arr_1 [i_0] [(_Bool)1]) * (arr_5 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) (+(arr_8 [i_2] [i_2] [i_1] [i_2])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [(_Bool)0])))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (1161000455) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) (+(arr_15 [i_3] [(unsigned char)16])))) : (((((arr_12 [(_Bool)1]) ? (arr_10 [i_3] [i_4]) : (var_4))) & (var_4)))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_3] = ((/* implicit */unsigned char) (+(((int) arr_18 [i_3] [i_3]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 256673926)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((arr_17 [i_4] [i_5 - 1] [i_6]) / (((/* implicit */int) arr_14 [7LL] [i_4]))))) ? (((((/* implicit */_Bool) arr_18 [i_3] [i_5])) ? (arr_15 [9LL] [i_3]) : (((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_3))))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_4] [i_4]))))) ? (min((var_1), (((/* implicit */long long int) arr_18 [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (arr_11 [i_3 - 2]) : (arr_10 [i_3] [i_3 + 1])))))) ? (((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) != (256673926)))) : (((/* implicit */int) ((((/* implicit */long long int) -256673928)) <= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_11 [i_3])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))) ? (((var_14) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (((/* implicit */long long int) max((((((/* implicit */int) var_2)) * (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_13)))))))));
}
