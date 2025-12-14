/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238245
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_13)) | ((-(((((/* implicit */_Bool) (unsigned short)27110)) ? (6221646414916545545LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [(unsigned char)4] = ((/* implicit */long long int) var_14);
                                var_17 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_2 [i_1 + 2] [i_2 + 2]))))));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_5)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_5))) != (((/* implicit */int) ((unsigned short) var_7)))));
    /* LoopSeq 2 */
    for (int i_5 = 4; i_5 < 15; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((min((arr_4 [i_5] [17U] [17U] [i_5]), (-163048808))), (arr_0 [(unsigned short)23])))), (min((var_6), (((/* implicit */long long int) arr_2 [i_5] [i_5 - 3]))))));
        var_21 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((var_11) & (var_13)))), (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)27110))))), (arr_15 [(unsigned char)2] [i_5])))));
        arr_16 [i_5] = ((/* implicit */signed char) arr_12 [i_5 + 2] [i_5] [(signed char)6] [i_5] [(unsigned char)22]);
        var_22 -= ((/* implicit */long long int) arr_3 [18] [18] [i_5]);
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_7 + 1] [2LL]));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_22 [i_6] [17LL])));
                /* LoopSeq 1 */
                for (short i_9 = 3; i_9 < 16; i_9 += 3) 
                {
                    arr_30 [i_6] [7] [3ULL] [i_8] [i_6] [i_6] = ((/* implicit */short) (-(var_4)));
                    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_6 - 1] [i_7 - 3] [i_9 - 3]))));
                }
            }
            var_26 = ((/* implicit */unsigned long long int) arr_7 [i_7 + 2] [i_6 + 1]);
            arr_31 [(short)12] [i_7] |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7))));
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (var_4) : (1872750431)));
    }
    var_28 -= ((/* implicit */long long int) (unsigned short)27110);
}
