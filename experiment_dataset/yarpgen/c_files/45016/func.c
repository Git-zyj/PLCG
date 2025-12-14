/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45016
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_0 [i_0] [i_0 - 1])))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (var_0))))))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8247707904254201548LL)) ? (3LL) : (((/* implicit */long long int) 2147483647))))) ? (min((((/* implicit */long long int) var_5)), (arr_3 [i_0] [(_Bool)1]))) : (arr_3 [i_1 + 4] [i_0 + 1])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(arr_0 [i_1 + 1] [(short)9]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) min(((~(arr_8 [i_0 + 1] [i_3 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-32)))))));
                                var_15 = ((/* implicit */unsigned short) var_0);
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2577129418U)) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) -3831959681847445746LL)) ? (((/* implicit */int) (short)-8777)) : (-1758674739)))))));
            }
        } 
    } 
}
