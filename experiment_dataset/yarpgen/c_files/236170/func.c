/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236170
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    var_12 = ((/* implicit */unsigned long long int) -2008098653266524292LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_13 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
                            arr_15 [i_2] [i_2] [8U] [i_2 + 1] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (-((~(var_0))))));
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_8)) < (arr_4 [0] [4ULL]))) ? (((/* implicit */unsigned int) arr_5 [i_0 + 1])) : (((((/* implicit */_Bool) -1651073085)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))))))));
                        }
                    } 
                } 
                arr_16 [10] [i_0] &= ((/* implicit */int) var_3);
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [10U] [i_1] [i_1 - 1] [8ULL])) ? (arr_5 [i_0]) : (((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                arr_17 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((unsigned long long int) var_5)))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : ((-(1992175204)))));
                arr_18 [i_0] [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0])))))), ((-(min((var_10), (-1182541051))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
    {
        for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (short i_7 = 4; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) var_2);
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_1))))))) : (var_3)));
                            var_19 = ((/* implicit */int) arr_20 [i_4] [i_4]);
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_4] [i_4 - 1] [i_4])) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_25 [19] [i_5 - 1] [i_5] [i_5])))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (arr_25 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))) : (((((/* implicit */unsigned long long int) ((long long int) var_3))) ^ (arr_30 [i_5] [i_6] [i_6 - 1] [i_6 - 1]))));
                            arr_31 [i_4] [i_4] [i_5] [i_4] = ((unsigned long long int) (-(arr_29 [i_7 - 1])));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */unsigned short) (-(((unsigned long long int) var_3))));
            }
        } 
    } 
}
