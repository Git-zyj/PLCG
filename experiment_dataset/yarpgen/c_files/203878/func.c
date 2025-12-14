/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203878
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) (~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3])));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)221)) ? (-6975876181262319945LL) : (6975876181262319949LL)));
                                var_19 ^= ((/* implicit */unsigned long long int) arr_3 [i_0 - 1]);
                                var_20 = ((/* implicit */long long int) var_11);
                                var_21 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1])) * (((/* implicit */int) var_3))))) ? ((-(var_9))) : ((+(var_7))))) == (((/* implicit */long long int) (+(((((((/* implicit */int) (short)-1)) + (2147483647))) << (((6975876181262319945LL) - (6975876181262319945LL))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) -1340212789528231842LL))))))) <= (((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_6]))) : (5263923945199494391LL)))) ? (((long long int) 18446744073709551597ULL)) : (arr_19 [i_5])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [1ULL] [1ULL]))));
                    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_7)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_7 + 1])) ? (2147483630) : (((/* implicit */int) arr_2 [i_5])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [1ULL] [i_7 - 1])) && (((/* implicit */_Bool) var_13)))))));
                    var_26 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_6 + 1] [i_6 - 3])))) >> (((((/* implicit */int) min((arr_0 [i_6 - 2] [i_6 - 2]), (arr_0 [i_6 + 1] [i_6 - 1])))) - (32927)))));
                    var_27 = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
}
