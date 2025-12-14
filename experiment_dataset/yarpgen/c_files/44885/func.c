/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44885
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
    var_14 = ((/* implicit */signed char) max(((-((~(((/* implicit */int) (unsigned char)215)))))), (((/* implicit */int) var_12))));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) -626255099)) & (1068720788077251502LL))))))));
    var_16 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_9 [i_2 - 1] [(signed char)6] [i_3] [(signed char)12] = (~(min((((/* implicit */unsigned long long int) var_12)), (17684371516854382247ULL))));
                            var_17 &= max((((/* implicit */int) (unsigned char)195)), ((-(arr_4 [i_2 - 2] [i_1] [i_0 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_5])))) >> (((((unsigned long long int) arr_10 [i_4 + 1] [i_1])) - (16ULL)))));
                            arr_14 [(short)0] [(short)0] [i_4 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_5 [i_0] [i_0 + 2] [i_0]) : (((/* implicit */int) arr_13 [i_1] [i_1] [8] [i_1]))))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2])))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_8))))));
            }
        } 
    } 
}
