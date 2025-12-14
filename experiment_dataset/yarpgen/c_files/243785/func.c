/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243785
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] = min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])), (max((6066255162523559866ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                            arr_12 [i_1] [i_1] [i_0] [i_1] [(signed char)8] = ((/* implicit */long long int) 12380488911185991750ULL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_5 + 1]))) : (0LL)));
                                var_12 = ((/* implicit */short) (+(min((15LL), (((/* implicit */long long int) 1642289056))))));
                                var_13 = ((/* implicit */unsigned char) ((arr_2 [i_0]) << (((((/* implicit */int) arr_1 [(_Bool)1])) + (17057)))));
                                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_2 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)2]))))) : (16996241605051900074ULL)))) ? (5341913087924222457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [i_5 + 1] [(short)6] [i_5 - 2] [i_5]), (((/* implicit */short) (unsigned char)221))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
