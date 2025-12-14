/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35867
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) ? (var_10) : ((~(min((var_10), (((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) max((arr_7 [i_2] [i_1 - 1] [i_2] [i_3]), (((/* implicit */signed char) var_7))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 4] [i_0 - 1] [i_0 + 1] [i_0 + 3])) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) -139516968)))))))))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 139516969))));
                            arr_11 [i_0] [i_0] [i_3] [i_0 - 4] [i_3] = ((/* implicit */short) (~(((((/* implicit */unsigned int) 139516978)) / (arr_9 [i_1 + 1] [i_1 - 1] [i_2] [i_3])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 3]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) 2147483647);
                            var_22 = ((/* implicit */long long int) var_12);
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */unsigned int) var_15))))) ? (((var_7) ? (((/* implicit */int) arr_13 [i_7])) : (var_12))) : (max((var_10), (((/* implicit */int) (_Bool)1)))))))));
                            arr_25 [i_4] [i_7] [i_6] = arr_15 [20];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) ((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)12152))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_4] [i_9 + 3] [i_9] [i_9 - 1] [i_9] [i_9])))))));
                            arr_32 [(unsigned char)10] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_17 [i_4])))) ? (((((/* implicit */_Bool) arr_24 [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */unsigned long long int) arr_24 [i_5] [i_9] [i_9] [i_9])) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) || (((/* implicit */_Bool) var_0)))))) | (arr_27 [i_8] [18LL] [i_8]))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned short) var_12)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
