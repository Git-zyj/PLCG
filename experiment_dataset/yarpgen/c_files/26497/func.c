/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26497
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (18446744073709551612ULL))) * (((/* implicit */unsigned long long int) ((int) arr_1 [i_0])))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((long long int) var_5)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (71987225293750272LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-58))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_13 &= max((arr_7 [i_1] [(signed char)20]), (((/* implicit */int) ((((/* implicit */int) (unsigned char)229)) != (arr_5 [i_1])))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (short)10007))))) && (((/* implicit */_Bool) 4662002)))))));
        var_15 ^= (short)32767;
    }
    for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        var_16 ^= ((/* implicit */signed char) arr_8 [i_2 + 1]);
        var_17 ^= ((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned short)13542)), (-388063814)))));
        var_18 = (+(arr_10 [i_2 + 1] [i_2 - 3]));
        arr_11 [i_2] = ((/* implicit */signed char) ((unsigned int) (!((_Bool)1))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (+(arr_7 [i_4] [i_3])));
                arr_17 [i_3] = ((/* implicit */int) ((max((min((arr_10 [i_3] [i_4]), (((/* implicit */long long int) var_3)))), (((arr_9 [i_4] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (arr_6 [i_3] [i_4]))))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)24)), ((short)12288)))))));
                arr_18 [i_3] [i_3] [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((arr_1 [i_3]) % (((/* implicit */long long int) arr_14 [2ULL] [2ULL])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)66)), ((short)-32744))))))));
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
    var_21 &= ((/* implicit */short) var_0);
    var_22 = ((/* implicit */unsigned int) (unsigned short)6342);
}
