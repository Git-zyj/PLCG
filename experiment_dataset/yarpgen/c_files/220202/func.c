/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220202
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
    var_13 ^= var_5;
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_7), (var_12)))), ((+(((/* implicit */int) (unsigned short)23352))))))) && (((/* implicit */_Bool) ((max((var_0), (var_2))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20905))) : (var_10))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((arr_3 [(unsigned short)10] [(unsigned short)4]) == (max((((/* implicit */unsigned long long int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38656)))))), (arr_3 [i_0] [6ULL])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) (unsigned short)9999)), (15203219212875526644ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_1 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_3 - 1] [i_0]))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (1868448991440010351ULL) : (((((/* implicit */_Bool) 2280636485027115873ULL)) ? (var_2) : (arr_8 [i_4] [i_3] [i_2] [i_3] [i_0])))))));
                                var_17 *= 6055911986661391648ULL;
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_11 [(unsigned short)10] [i_0] [i_0] [(unsigned short)2] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(max((var_2), (((/* implicit */unsigned long long int) (unsigned short)55280))))));
    var_20 = (~(((((var_10) << (((((/* implicit */int) var_12)) - (56484))))) ^ (((unsigned long long int) var_0)))));
}
