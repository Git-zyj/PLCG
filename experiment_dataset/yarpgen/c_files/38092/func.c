/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38092
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
    var_18 = min((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) var_17)), (var_15))))), (max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_2)), (var_3))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_1 [(unsigned short)12]))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_21 &= min((max((var_9), (((/* implicit */long long int) -3)))), (((/* implicit */long long int) arr_4 [i_4] [i_1])));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_12 [i_4] [i_1] [i_2] [i_3])));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)0)), (-311031022))), (var_8)))), (((unsigned long long int) var_15))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [1LL]);
            arr_16 [i_0] [i_0] = ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) var_7)), (arr_14 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max(((short)21772), ((short)-21784)))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            arr_17 [i_5] &= ((/* implicit */signed char) max((-639201508), (((/* implicit */int) (short)21770))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_25 = ((/* implicit */short) arr_19 [i_0] [i_6]);
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                arr_22 [i_7] = min((((/* implicit */unsigned long long int) arr_11 [i_7] [i_6] [i_0] [i_0])), (((unsigned long long int) min((arr_2 [i_0] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_11 [i_7] [i_6] [i_0] [i_0]))))));
                arr_23 [18ULL] [18ULL] [i_6] [i_7] = ((/* implicit */int) var_6);
                arr_24 [i_0] [i_6] [i_7] = ((/* implicit */int) var_0);
            }
        }
        for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
        {
            arr_27 [i_8 - 1] = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0]));
            var_26 = ((/* implicit */short) min((arr_7 [i_8]), (min((min((arr_2 [i_8] [i_8] [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_8] [i_0])))), (((/* implicit */unsigned long long int) arr_15 [(short)12] [i_0]))))));
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            arr_32 [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) var_6);
            arr_33 [i_0] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((arr_19 [i_0] [i_0]), (((/* implicit */long long int) arr_30 [i_0] [i_9] [i_9])))), (((long long int) var_7))))), (max((((/* implicit */unsigned long long int) min((-639201495), (((/* implicit */int) (signed char)-75))))), (arr_2 [i_9] [i_9] [i_0])))));
        }
    }
    var_27 = ((/* implicit */unsigned short) var_10);
    var_28 = var_10;
}
