/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36482
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
    var_10 = ((/* implicit */short) (~(((/* implicit */int) (short)0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_4 - 1] [i_4 + 1] [i_4])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-12712))))) : (arr_4 [i_4 + 1] [i_4 - 1])))) && (((/* implicit */_Bool) (~((+(arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                var_11 = ((/* implicit */unsigned int) (short)-18400);
                                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)136))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) (~(((arr_19 [i_0] [i_1] [i_2] [i_2] [i_5]) ? (((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_5]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_14 *= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_15 *= ((/* implicit */unsigned long long int) min(((unsigned short)65531), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_5] [i_6] [i_6])))))));
                            var_16 = arr_12 [i_0] [i_2] [i_5];
                        }
                    }
                    arr_23 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((arr_9 [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)111)))))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-87))));
                }
            } 
        } 
    } 
}
