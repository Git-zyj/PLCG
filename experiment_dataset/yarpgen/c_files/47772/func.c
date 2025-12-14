/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47772
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28697)) && (((/* implicit */_Bool) ((unsigned char) min((var_3), (((/* implicit */unsigned long long int) (unsigned short)8191))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)88))))), (((long long int) (+(arr_1 [i_1]))))));
            arr_5 [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1]))))));
            var_17 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 3])) ? (max((((/* implicit */unsigned long long int) (unsigned char)230)), (4344175726816797412ULL))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (1920LL)))))));
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_3 [i_0] [(unsigned char)23] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(3348115334980174544LL)))) >= (max((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)133))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4846938352986704576LL)) ? (min((131008ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((18446744073709551593ULL) - (((/* implicit */unsigned long long int) -3527087470701216373LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) 4611123068473966592LL)) ? (((long long int) 16640386026111093852ULL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))));
            var_19 = ((/* implicit */long long int) ((unsigned short) ((long long int) 18446744073709551604ULL)));
        }
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_0]))) | (arr_1 [i_0]))))))));
            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)5))));
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_3])) | ((~(((/* implicit */int) (unsigned short)23307))))));
        }
    }
}
