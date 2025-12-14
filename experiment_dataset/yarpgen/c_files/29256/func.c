/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29256
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
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((((/* implicit */int) var_6)) & (((/* implicit */int) var_3)))), (((/* implicit */int) var_8))))), (((long long int) ((signed char) var_5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) 1215245585);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) ((arr_1 [i_0]) / (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                var_14 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_0] [i_0])))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 8482920848972974212ULL)))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_15 = (unsigned short)65535;
                            var_16 = ((/* implicit */long long int) ((arr_9 [i_3 + 3] [i_2 - 3] [i_2 - 1] [i_2 - 3]) / (var_10)));
                            arr_13 [i_0] [i_2] = ((/* implicit */_Bool) 4);
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] [i_0] = var_7;
                arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_7);
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */signed char) ((unsigned long long int) var_8));
        }
        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned short) arr_23 [i_0] [i_7 - 1]);
            var_20 = ((/* implicit */signed char) var_1);
        }
        var_21 += ((/* implicit */short) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))));
    }
}
