/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38265
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
    var_15 = ((/* implicit */int) ((short) ((unsigned long long int) ((int) var_10))));
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) ((int) ((unsigned int) var_3)));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((short) ((unsigned long long int) var_4)));
                arr_9 [5ULL] = ((short) ((short) var_14));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_16 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((signed char) ((short) var_12)));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                            {
                                arr_21 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((short) ((unsigned char) var_13)));
                                arr_22 [i_0] [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) ((signed char) ((unsigned long long int) var_7))));
                                var_17 -= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_13)));
                                var_18 = ((signed char) ((signed char) var_14));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                            {
                                var_19 ^= ((/* implicit */unsigned short) var_4);
                                arr_27 [i_3] [i_1] [i_2] [i_2] [i_5] [i_2] [i_3] = ((/* implicit */unsigned int) ((short) ((unsigned char) var_1)));
                                arr_28 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) ((short) var_5)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                            {
                                var_20 ^= ((/* implicit */int) ((unsigned short) var_5));
                                arr_32 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) var_8));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                            {
                                var_21 = ((/* implicit */int) var_10);
                                var_22 ^= ((/* implicit */unsigned char) ((unsigned int) var_5));
                            }
                            arr_37 [i_0] [i_0] [i_2] [i_0] [i_2] = var_11;
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_11);
}
