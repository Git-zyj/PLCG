/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247931
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
    var_15 = var_7;
    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((var_14), (((/* implicit */int) (unsigned short)64780)))))) ? (min((((((/* implicit */_Bool) (unsigned short)14903)) ? (-9035285042762675089LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))), (min((((/* implicit */long long int) var_1)), (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(1609911420)))) >= (max((var_11), (var_11)))))))));
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_11)))) && (((/* implicit */_Bool) (unsigned short)64780)))))) != (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_1)) ? (9035285042762675089LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 2147483647))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min(((-((((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_2] [17ULL] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))))), ((-((-(((/* implicit */int) var_13))))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : ((-(arr_6 [i_0] [i_0] [i_0]))))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) -118533755))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_0] [i_1 + 3] [i_0] [i_0])) ? (arr_10 [i_0 + 3] [i_0] [i_1 + 3] [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        }
        arr_14 [i_0] = ((/* implicit */short) (signed char)38);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_11 [(short)3]))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 4; i_7 < 18; i_7 += 4) 
                    {
                        arr_21 [i_0] [i_5] [i_0] [i_6] = ((/* implicit */short) arr_18 [i_0] [i_5] [i_6] [i_6]);
                        arr_22 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned char) arr_19 [i_7] [i_0] [i_0] [i_0]);
                    }
                    var_23 -= ((/* implicit */unsigned long long int) ((long long int) min(((unsigned short)20650), (((/* implicit */unsigned short) (signed char)-15)))));
                }
            } 
        } 
    }
}
