/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217826
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (-5891707083039784366LL))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) min((max((((short) var_12)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0]))))))), (((/* implicit */short) max((var_2), (((_Bool) arr_0 [i_2])))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [9LL] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14372155643405706524ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25))) : ((+(14372155643405706537ULL)))))) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                                var_21 = ((/* implicit */short) min((min((arr_14 [i_0] [i_1 - 2] [i_2] [i_0] [i_4 + 1]), (arr_14 [i_3] [i_1 - 2] [i_2] [i_2] [i_4 + 2]))), ((-(arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_4 + 2])))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */unsigned char) ((int) var_17));
                var_23 = ((/* implicit */unsigned short) -5891707083039784362LL);
                var_24 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (min((var_3), (((/* implicit */unsigned long long int) var_2))))))), (max((var_14), (var_14)))));
    var_26 = ((/* implicit */long long int) var_12);
    var_27 = ((/* implicit */unsigned char) var_7);
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((int) (unsigned char)0)))) ? (var_18) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (min((var_17), (((/* implicit */int) (unsigned char)6))))))))))));
}
