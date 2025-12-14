/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36497
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46346)) + (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */int) arr_1 [i_0 - 2])) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) min(((unsigned char)201), (((/* implicit */unsigned char) arr_1 [i_0 - 2])))))));
                            var_12 += ((/* implicit */short) (signed char)-49);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [(unsigned short)10] = ((/* implicit */signed char) ((unsigned char) max((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18389))) : (-5644333783859599284LL))), (((/* implicit */long long int) (short)20487)))));
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (short)-4506)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1U)))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294836224U))) ^ ((~(510U)))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (arr_7 [i_5] [i_4] [i_0 - 2])));
                            var_15 = ((/* implicit */short) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)199))));
                            var_16 = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_19 [i_1] [i_1])), (min((((/* implicit */long long int) var_9)), (-730777226447803323LL)))))));
                            var_17 = ((/* implicit */signed char) (unsigned short)48573);
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_1] = (unsigned short)35675;
                            var_18 = (unsigned short)153;
                        }
                    }
                    arr_23 [i_0 + 1] [10U] [(short)9] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) >> (((((/* implicit */int) (signed char)-91)) + (94))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            {
                                arr_30 [i_9 - 1] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */int) var_6);
                                arr_31 [0] [i_1] [i_4] [i_1] [5LL] = ((int) 33554431);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min(((unsigned short)14), ((unsigned short)64145)));
}
