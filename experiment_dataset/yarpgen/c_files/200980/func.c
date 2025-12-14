/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200980
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
    var_20 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (var_19)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) (+(((max((4235406082U), (((/* implicit */unsigned int) arr_0 [i_1])))) + ((-(59561214U)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((((((((/* implicit */int) arr_6 [i_2] [i_3 - 2])) | (((/* implicit */int) arr_6 [(_Bool)1] [i_3 - 1])))) + (2147483647))) >> ((((~(var_7))) - (6923049086586004615ULL)))))));
                                arr_14 [i_0] [i_2] [i_2] [15] = (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) < (((((/* implicit */unsigned long long int) 1890399113)) / (5851717443529316705ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_19 [i_6] [i_5] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)13037)) | (((/* implicit */int) (short)-16547))))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (1738680277U))))))));
                                var_23 += max((((((/* implicit */unsigned long long int) 59561213U)) | (((5851717443529316705ULL) / (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_2 + 2] [i_5] [i_6]), (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) var_3);
                }
                arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [(unsigned short)7] [i_1])) ? (arr_18 [i_1 + 1] [(unsigned short)18]) : (arr_18 [i_1 + 1] [i_1])))) - ((~(-2442575200529460003LL)))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) 4217285974U)), (((long long int) var_3)))));
}
