/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236563
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (-695430043)))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (_Bool)1)))))))) | (2224501489U))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 2] [i_1 - 4])) < (((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_1 - 3]))))) / (min((var_1), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)69))))))));
                                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-122)) ? (-5692075569260244154LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))));
                                arr_15 [i_1] [i_3] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) (((~(arr_9 [i_4 + 1] [i_1] [i_2] [i_1] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_12 [i_0] [i_0] [(signed char)10])))) && (((/* implicit */_Bool) max((-9223372036854775787LL), (((/* implicit */long long int) arr_5 [i_1] [i_3] [i_4])))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_15))));
                            var_20 = ((/* implicit */signed char) (~(4294967286U)));
                        }
                    } 
                } 
                arr_21 [i_1] [(signed char)12] [i_1 - 4] = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_13)))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (0ULL)))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (-1282853222)))) >> (((long long int) var_6))))) / (min((((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)23)))))))));
}
