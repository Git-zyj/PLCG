/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242408
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_10 -= ((/* implicit */short) arr_3 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)2841)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25884))) >= (2664504740U))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)2841))) >> ((((-(((/* implicit */int) (unsigned short)21845)))) + (21860)))))) ? (((/* implicit */unsigned int) (~(-1547742495)))) : ((-(max((((/* implicit */unsigned int) (unsigned short)49527)), (var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [(short)4] = min((((((/* implicit */int) arr_0 [7ULL] [7ULL])) ^ ((-(((/* implicit */int) (signed char)-106)))))), (((/* implicit */int) max(((unsigned short)50169), (((/* implicit */unsigned short) (signed char)67))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */short) (+(((/* implicit */int) max(((short)-25886), ((short)2837))))));
                                var_14 -= ((/* implicit */int) (~(((unsigned long long int) 140737488355328ULL))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_8 = 4; i_8 < 11; i_8 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) 328627980);
                    var_16 = ((/* implicit */long long int) (unsigned short)25226);
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    arr_24 [(unsigned short)4] [i_1] [i_1] [i_9] = ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_17 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_9] [i_9])))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                arr_32 [i_11] [12] [(short)11] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */int) ((unsigned short) arr_30 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1]));
                                var_18 -= ((/* implicit */signed char) arr_5 [i_0] [i_10]);
                                var_19 = (+(var_7));
                                var_20 = (~(3141172022937842220ULL));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_0] [i_10] [(unsigned short)0] = arr_5 [i_0] [i_1];
                }
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (unsigned short)5296);
                    arr_36 [13U] [i_1] [i_1] [13U] = ((/* implicit */signed char) (+(((4U) >> (((3613529857799175836ULL) - (3613529857799175826ULL)))))));
                }
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) var_1);
    var_23 |= ((/* implicit */long long int) var_0);
}
