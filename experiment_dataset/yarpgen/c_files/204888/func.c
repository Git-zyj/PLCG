/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204888
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
    var_18 = ((/* implicit */int) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (1327815532747481873LL))) ^ (min((1327815532747481873LL), (1327815532747481887LL))))), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((-1327815532747481856LL), (((long long int) 4188125168U))));
                var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)-13039))))))), (18106772197382502721ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [15LL] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_14 [i_2] [0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_22 [i_2] [i_2] = ((/* implicit */int) arr_16 [i_6] [(short)14] [i_4] [7ULL]);
                                arr_23 [i_2] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) max(((unsigned short)40182), (((/* implicit */unsigned short) (signed char)-32)))))))), ((-(0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_30 [i_8] [7U] [i_4] [5U] [i_4] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_3] [i_4] [i_7] [i_4] [i_8]);
                                arr_31 [i_7] [i_8] [i_7] [i_4] [i_2] [i_2] = ((/* implicit */int) arr_6 [5] [i_2]);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) (signed char)0))) / (3842202855508343835LL)));
                    arr_32 [i_3] [1ULL] [i_3] [i_3] = ((/* implicit */unsigned int) (~(6403151896215228926LL)));
                }
            } 
        } 
        arr_33 [i_2] = ((/* implicit */signed char) min((((unsigned short) max((-1327815532747481856LL), (((/* implicit */long long int) arr_28 [i_2] [i_2] [(signed char)9] [i_2] [i_2]))))), (((/* implicit */unsigned short) ((-1327815532747481884LL) != (((/* implicit */long long int) arr_10 [i_2])))))));
    }
}
