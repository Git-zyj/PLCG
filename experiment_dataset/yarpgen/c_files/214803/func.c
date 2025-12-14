/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214803
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
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) var_10)))) : ((+(6040347505604226229ULL))))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(min((62914560), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (-1) : (((/* implicit */int) var_14))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */int) (~((~((~(0ULL)))))));
                                var_20 -= 853107280622337319ULL;
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_1 - 2]), (16718515122282051224ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) 13705874120142881899ULL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_12 [i_2])))) : (((/* implicit */unsigned long long int) (-(842756818)))))) : (((/* implicit */unsigned long long int) max((var_5), ((~(var_8))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_13);
    var_23 &= ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) -842756818)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))), (((/* implicit */long long int) -1))));
    /* LoopSeq 1 */
    for (short i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_5 - 1] [i_5] [6U] [i_5 - 1] [i_5])) : (((((/* implicit */_Bool) 6040347505604226229ULL)) ? (((/* implicit */int) var_9)) : (var_6)))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) (unsigned char)222)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_5] [i_5 - 1] [(short)18] [i_5 + 1] [(unsigned short)16] [i_5 + 1])) : (((/* implicit */int) arr_9 [i_5] [i_5])))))))));
        arr_20 [i_5 - 1] = -7615148171513583519LL;
        var_25 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_18 [i_5 + 1] [i_5])))) ? (((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_15)))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5 + 1] [(_Bool)1] [i_5 + 1])) ? (arr_16 [i_5 - 1] [i_5 - 1]) : ((~(var_2)))))));
    }
}
