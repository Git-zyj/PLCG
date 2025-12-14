/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236297
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
    var_10 = ((/* implicit */int) 10373201186617448495ULL);
    var_11 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [4]))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5440277509550351029LL)) ? (8073542887092103120ULL) : (10373201186617448506ULL)));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (461787166U)));
                    arr_11 [13] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 2]))));
                }
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) var_8)) | (var_1))))) > (((/* implicit */unsigned long long int) 461787166U))));
                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) 8073542887092103120ULL);
                arr_14 [i_0] = ((/* implicit */unsigned char) var_1);
                arr_15 [18LL] = ((/* implicit */short) var_3);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */unsigned short) var_8);
}
