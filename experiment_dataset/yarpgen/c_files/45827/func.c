/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45827
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)31), ((unsigned char)242))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_19 ^= ((/* implicit */signed char) (unsigned short)65535);
                                arr_17 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */_Bool) 16777216);
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) (signed char)21)) >= (((/* implicit */int) (signed char)13))));
                            }
                            for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((886961861) | (((/* implicit */int) (unsigned short)65525))));
                                arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)54)) >= (((/* implicit */int) (_Bool)1))));
                                var_21 &= ((/* implicit */short) (unsigned short)16380);
                            }
                            /* vectorizable */
                            for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned short) (signed char)64);
                                arr_25 [i_0] [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)20206))))));
                            }
                            arr_26 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) 16777213));
                            var_23 = ((/* implicit */signed char) max(((unsigned short)65526), (((/* implicit */unsigned short) (signed char)-23))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */_Bool) (~((+(-1)))));
}
