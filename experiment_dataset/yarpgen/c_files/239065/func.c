/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239065
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
    for (short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (short)32691);
                var_15 -= 18446744073709551601ULL;
                var_16 = 18446744073709551582ULL;
                arr_7 [i_0] = ((/* implicit */long long int) 11ULL);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_17 = 11ULL;
                    var_18 = 0ULL;
                }
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    var_19 = 1ULL;
                    arr_12 [i_0 - 4] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) 18446744073709551567ULL);
                    var_20 = ((/* implicit */unsigned short) (short)17);
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_21 = 18446744073709551576ULL;
                        arr_17 [i_0] [9ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) 17ULL);
                        var_22 = ((/* implicit */unsigned short) (short)-4096);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */short) 18446744073709551597ULL);
                            arr_22 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_6] [i_0] = 11233266122833736202ULL;
                            var_23 = 18446744073709551578ULL;
                        }
                    }
                    var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)39285)));
                    var_25 = (short)-17426;
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 0ULL))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    var_27 -= ((/* implicit */unsigned short) 13714150995598672737ULL);
                    arr_25 [i_0] [i_0 - 2] [(short)10] = 432345564227567616ULL;
                }
            }
        } 
    } 
    var_28 -= ((/* implicit */unsigned long long int) var_13);
    var_29 = ((/* implicit */unsigned long long int) var_7);
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_5))));
}
