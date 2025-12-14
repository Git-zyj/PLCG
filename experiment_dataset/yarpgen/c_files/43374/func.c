/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43374
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
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((long long int) (+(((/* implicit */int) (unsigned char)60)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (~((+(arr_4 [i_0])))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((int) 579052824U)) << (((/* implicit */int) ((unsigned short) ((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                            arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) arr_1 [i_0] [(unsigned char)2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), ((+((+(((int) arr_4 [i_1]))))))));
                            var_14 *= ((/* implicit */unsigned long long int) (+(arr_7 [i_5] [i_5] [i_5 + 1])));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
