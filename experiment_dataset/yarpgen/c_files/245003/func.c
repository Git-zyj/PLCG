/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245003
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (_Bool)0);
                var_21 = ((/* implicit */unsigned char) 0U);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((unsigned long long int) 1179364040)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))), ((-(((arr_6 [i_0] [4ULL] [4ULL]) & (((/* implicit */long long int) ((/* implicit */int) (short)-102)))))))));
                                arr_14 [1LL] [(signed char)10] [(signed char)3] [i_3] [i_0] [i_3] = (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4150072704039092057ULL))))) : (((/* implicit */int) (_Bool)0)));
                                arr_15 [i_0] [i_2] [i_2] |= ((/* implicit */_Bool) arr_2 [i_3]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (signed char)106))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1]))) : (arr_3 [i_1] [i_0 - 1] [i_0 + 1]))) : (((var_13) ? (arr_3 [i_2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1]))))))))));
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)60)) > (((/* implicit */int) (signed char)-106))));
                    var_26 ^= ((/* implicit */long long int) arr_1 [i_5]);
                }
                var_27 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (min((((/* implicit */unsigned long long int) 1699860338120295680LL)), (arr_5 [i_0 + 1] [i_0] [i_0])))))));
                var_28 = ((/* implicit */short) var_18);
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-41))));
    var_30 = ((/* implicit */unsigned short) var_10);
}
