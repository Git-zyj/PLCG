/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200366
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 -= arr_1 [i_0 + 1];
                var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)240)) - (((/* implicit */int) (unsigned short)40991)))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_9 [i_6] [i_4] [i_3] [(unsigned char)4])), ((+(arr_12 [2LL] [10U] [2LL] [i_5 + 1] [i_5 + 1]))))))));
                                var_18 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) -1875234480716726358LL)) && (((/* implicit */_Bool) 1875234480716726355LL))))))), (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) (_Bool)1)), (1875234480716726364LL)))))));
}
