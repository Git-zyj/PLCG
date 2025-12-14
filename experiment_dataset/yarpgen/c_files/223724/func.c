/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223724
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_1)))) % (max((var_10), (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1]))))))));
                                var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) (short)-1203))))), ((((_Bool)1) ? (5407487255596561918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1203)))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_0))));
                            }
                        } 
                    } 
                    var_14 ^= (signed char)-109;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) max((var_6), (((/* implicit */signed char) arr_4 [i_5] [i_5] [i_5]))))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2614)) ? (arr_6 [i_5] [i_5]) : (arr_6 [12ULL] [i_5])))) ? (((/* implicit */long long int) ((arr_12 [i_5]) >> (((((/* implicit */int) (unsigned short)17462)) - (17437)))))) : (((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33086))))));
        var_18 -= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_11 [12LL]))))));
    }
}
