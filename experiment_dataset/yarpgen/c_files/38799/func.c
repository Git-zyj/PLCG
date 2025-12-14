/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38799
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) (short)-342);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [2U] = ((/* implicit */unsigned short) (short)-21154);
                                var_21 *= ((/* implicit */short) arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_22 = min((max((16773120U), (((/* implicit */unsigned int) arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_2])))), (((/* implicit */unsigned int) ((unsigned short) min(((unsigned char)128), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))));
                    arr_17 [(short)10] [i_0] [i_2] = (-((+(-5847590794373873421LL))));
                    var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_0 - 3] [(_Bool)1]))) / (max((((/* implicit */long long int) ((short) (unsigned char)128))), (((((/* implicit */_Bool) arr_8 [0LL] [i_0] [i_0])) ? (((/* implicit */long long int) arr_8 [i_2] [i_0] [i_0])) : (arr_11 [i_0] [i_1] [10ULL] [i_2])))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) ((2067461167U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
}
