/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222803
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
    var_18 = ((/* implicit */unsigned short) (-(var_12)));
    var_19 = ((/* implicit */short) ((max((var_12), ((~(var_12))))) / (((/* implicit */int) var_17))));
    var_20 = ((/* implicit */long long int) (signed char)95);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) var_9);
                            var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21397))));
                            var_23 = (~(1800838840));
                            var_24 = ((/* implicit */int) (~(arr_3 [12LL] [i_0])));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_25 = ((int) ((short) -1800838849));
                            var_26 = ((/* implicit */short) (~(((int) 2556027061U))));
                            arr_18 [i_5] [i_5] [i_1] [i_1] [(short)0] [i_0] = var_15;
                            var_27 = var_9;
                        }
                        var_28 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] [4U]);
                        arr_19 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_8)) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [(short)13])))))) % ((-(((int) arr_0 [i_3]))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) (~(var_14)));
}
