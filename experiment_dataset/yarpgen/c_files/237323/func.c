/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237323
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
    var_11 = ((/* implicit */signed char) ((short) var_9));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 12674108636706531600ULL)))) | (max((var_6), (((/* implicit */unsigned int) arr_3 [i_0]))))));
                var_13 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (var_10))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((-(var_5))) : (((arr_3 [i_3]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0)))))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) : (var_9)))), ((~(8831879892865405656LL)))))) ? (max((var_10), (arr_6 [i_3] [i_3] [i_1] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) 2246495208U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))))))));
                            var_16 = arr_6 [i_1] [i_1] [i_1] [i_1];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    var_17 = ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [10] [i_4 - 3]))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((signed char) var_4))))) : (((/* implicit */int) arr_0 [i_4 + 1] [i_4 + 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_1] [i_1]);
                                var_19 += ((/* implicit */unsigned int) (unsigned short)65535);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((short) ((int) arr_4 [i_0] [i_0])));
                                var_21 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) ((var_0) * (((/* implicit */unsigned int) var_5))))), (arr_4 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_22 += ((((/* implicit */unsigned int) arr_7 [i_0] [i_0])) | (arr_12 [i_0] [i_0] [i_0] [i_0] [(short)0] [i_4]));
                    var_23 = ((/* implicit */int) arr_14 [i_0]);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) ((long long int) var_0))) ? ((-(var_9))) : (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
}
