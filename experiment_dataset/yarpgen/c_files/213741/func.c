/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213741
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_10 &= ((/* implicit */_Bool) (short)-25);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) || (((/* implicit */_Bool) var_8))))) <= (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_0 + 2]))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (var_6))))))));
                    }
                    arr_12 [i_2 - 1] [i_0] [(signed char)12] [i_0] = ((/* implicit */short) 9928237297064823680ULL);
                    var_12 += ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(var_0)))) + (max((var_2), (((/* implicit */unsigned int) arr_3 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_10 [i_2] [(unsigned short)10] [i_2] [i_2])))), (((/* implicit */int) (short)-27))))) ? (var_7) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (short)-3))), ((+(((/* implicit */int) (short)-7)))))))));
                                var_14 ^= ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)29)), (((((/* implicit */int) (short)-30)) - (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51836)) & (((/* implicit */int) (short)27))))) | (min((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1]))))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 2]);
        arr_17 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */int) arr_8 [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 + 1])))), (((/* implicit */int) (signed char)88))));
        var_17 -= ((/* implicit */unsigned char) var_3);
    }
    var_18 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8518506776644727936ULL))), (((9928237297064823670ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [8LL] [i_6]))) & (3004429369U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_6])) - (((/* implicit */int) arr_13 [i_6]))))))))));
        var_20 ^= ((/* implicit */unsigned long long int) (short)-6);
        var_21 += ((/* implicit */short) (~(((/* implicit */int) min((arr_5 [i_6] [i_6]), ((signed char)-7))))));
        var_22 = ((/* implicit */unsigned short) ((9928237297064823695ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 1290537910U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-12)))) : (((/* implicit */int) (signed char)-2)))))));
    }
}
