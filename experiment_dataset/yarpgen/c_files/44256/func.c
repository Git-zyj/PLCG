/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44256
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_7 [i_0] [1LL] [i_0] [i_0] [i_4] [i_4]))))));
                                var_19 = ((/* implicit */int) var_13);
                                var_20 = ((/* implicit */signed char) ((-1666832981) >= (1666833005)));
                                arr_11 [i_0] [1] [i_0] [(unsigned short)4] [i_2] = ((/* implicit */short) (~((~(min((-1666833012), (((/* implicit */int) var_0))))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~((~(arr_6 [i_1] [i_1] [i_1]))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) - (182041758804073938ULL)));
                    var_24 ^= ((/* implicit */unsigned short) var_11);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << ((((~(min((((/* implicit */unsigned long long int) var_9)), (var_14))))) - (18446744072628479572ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)98)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-104))));
                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_0 [1U] [i_6])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_5] [11U] [i_5]))))) : (min((var_12), (18264702314905477677ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_5] [i_6] [i_6] [i_5] [i_6] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6]))) : (18446744073709551611ULL)))) ? (var_11) : (((/* implicit */int) arr_1 [i_5])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_3)))));
    var_29 += ((/* implicit */int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (var_12))))) << (((((/* implicit */int) var_4)) - (108)))));
}
