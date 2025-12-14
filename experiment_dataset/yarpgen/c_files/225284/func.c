/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225284
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)1920), ((short)1920)))) ? (max((((/* implicit */unsigned long long int) ((short) arr_6 [i_0] [i_1] [i_2]))), (arr_7 [(short)18] [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_7 [i_3] [i_1])))))));
                        var_12 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1921))))));
                    }
                } 
            } 
        } 
        var_13 = arr_8 [i_0] [i_0] [(short)3] [i_0] [i_0] [i_0];
        var_14 = ((/* implicit */short) ((unsigned long long int) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((short) (short)1920))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_15 = ((/* implicit */long long int) (+(892402443U)));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])) - (arr_12 [i_4])))) ? (arr_11 [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_2 [i_4]))));
    }
    var_17 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (11839992933109158262ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 70368744177662ULL)) && (((/* implicit */_Bool) 1853372418941393801ULL)))))) : (((((/* implicit */_Bool) (short)3701)) ? (((/* implicit */unsigned long long int) -6630702245427655254LL)) : (var_2))))));
    var_18 = max((max((max((((/* implicit */unsigned long long int) var_8)), (var_7))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (short)1920)), (var_1))) == (var_8)))));
    var_19 = ((((/* implicit */_Bool) 18998726609323851ULL)) ? (((/* implicit */unsigned long long int) 7945753988648863040LL)) : (18446744073709551615ULL));
}
