/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21399
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
    var_14 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_9)) ? (11874792450880385104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) var_13)))) + (((((/* implicit */_Bool) min((var_1), (var_1)))) ? (var_4) : (var_12)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)18] = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [(unsigned char)6] [i_0] [i_1])), (var_10)))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_4))))));
                arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_8))))), (var_13)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] &= ((/* implicit */short) arr_2 [i_2]);
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) ((11874792450880385104ULL) - (var_12)));
                        }
                    } 
                } 
                arr_14 [i_0] [(unsigned short)4] |= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-7005)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)39))))));
    var_16 = ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (var_9))), (((/* implicit */unsigned long long int) max((var_0), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            {
                var_17 ^= ((/* implicit */int) ((unsigned short) (_Bool)1));
                var_18 = ((/* implicit */long long int) arr_0 [i_4]);
            }
        } 
    } 
}
