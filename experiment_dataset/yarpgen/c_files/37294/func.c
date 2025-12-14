/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37294
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
    var_11 = ((/* implicit */unsigned long long int) ((int) var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_10 [5LL] [i_1] [i_1] [(short)3] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_8))))));
                                arr_11 [i_2] [i_2] [i_2] [i_0] [i_4 + 1] = ((/* implicit */unsigned long long int) (+(min(((+(arr_7 [7U] [i_2] [i_1] [2ULL]))), (((/* implicit */int) var_10))))));
                                var_12 = ((/* implicit */signed char) arr_4 [i_1] [i_0] [i_1] [i_0]);
                                var_13 = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */int) var_7);
                        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11696)) ? (1292333641U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) < (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_8 [i_0] [i_0] [i_0] [i_0] [6LL] [i_5])))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0 + 1])))));
                    }
                    arr_15 [i_0] [i_1] [(_Bool)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) <= (var_0)))))));
                    arr_16 [7U] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0] [i_0 - 1] [i_0 + 1] [12LL])))), ((~(0ULL)))));
                }
            } 
        } 
    } 
}
