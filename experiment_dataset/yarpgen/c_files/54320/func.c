/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54320
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((-(min((var_13), (var_9))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)71))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2276))) : (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2291))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_8);
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_4 [(signed char)1] [i_2 + 1] [i_2 - 1]))))) : (((unsigned int) var_4))));
                    arr_8 [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63271)) ? (((/* implicit */int) (unsigned short)2272)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-72)) == (((/* implicit */int) (unsigned short)2266))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_13), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 - 1])))))) ? (((unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)2305))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)2270)), (1721694123)))) ? (min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) % (arr_6 [i_1] [(signed char)7]))))))));
                                var_22 |= ((/* implicit */short) (unsigned short)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
