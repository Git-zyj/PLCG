/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2314
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [(unsigned short)13] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) min((var_4), (((/* implicit */short) (unsigned char)53))))), ((~(((/* implicit */int) (unsigned short)23781))))))));
                                arr_14 [i_1] [5LL] [i_1] [i_3] = ((((/* implicit */int) var_3)) * (min((((/* implicit */int) arr_7 [(short)13] [i_1] [i_2])), ((-(((/* implicit */int) arr_12 [i_4] [(signed char)10] [i_2] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((5149461513222106709ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))))))));
                    arr_15 [i_2] [(signed char)22] [i_0] = ((/* implicit */unsigned short) var_1);
                    var_16 = ((/* implicit */unsigned int) (-(arr_0 [i_2])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((unsigned int) 13297282560487444906ULL)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((unsigned char) var_12))) & ((~(((/* implicit */int) var_11)))))), (((/* implicit */int) var_12))));
}
