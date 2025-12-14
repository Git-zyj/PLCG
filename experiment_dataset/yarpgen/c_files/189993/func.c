/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189993
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
    var_14 = ((/* implicit */unsigned char) (short)-25033);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (_Bool)0);
                var_15 = ((/* implicit */unsigned short) 1997145151290988912ULL);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [2LL] [i_1] = ((/* implicit */signed char) (unsigned short)35977);
                    arr_9 [i_0] [i_0] [6LL] = ((/* implicit */_Bool) 7245896743598775945LL);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_16 *= ((/* implicit */signed char) (unsigned char)127);
                    var_17 = ((/* implicit */int) 16449598922418562704ULL);
                    arr_12 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) (signed char)-71);
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) (unsigned char)191);
                    var_19 *= ((/* implicit */signed char) (unsigned short)26184);
                    var_20 = ((/* implicit */signed char) (unsigned short)26185);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [(unsigned char)17] [i_1] [0U] [i_5] [i_5] [i_6] [i_4] = ((/* implicit */int) (unsigned short)26194);
                                var_21 = ((/* implicit */short) -178077632);
                                var_22 = ((/* implicit */long long int) 9863543914207682435ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (signed char)36);
}
