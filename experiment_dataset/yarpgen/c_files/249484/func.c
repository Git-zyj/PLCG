/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249484
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
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((signed char) var_0)))))) - (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) 4814209491863566316ULL));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((unsigned int) (signed char)39)) ^ (max((max((var_0), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1))))));
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 13257810970105539969ULL)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_16)))))) / (((/* implicit */long long int) var_16))));
                    var_19 *= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28))) + (arr_0 [i_0] [i_0]))) < (((((/* implicit */_Bool) -680492396)) ? (((/* implicit */long long int) -680492396)) : (var_5))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7] [i_7] [i_5] [i_7] [i_3] = ((/* implicit */signed char) ((min((arr_20 [i_6 + 3]), (arr_20 [i_6 + 3]))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)1120)) ? (4814209491863566328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                                arr_23 [i_3] [i_4] [i_6] [i_6] [i_7] |= ((/* implicit */unsigned long long int) (short)-23818);
                                var_20 = ((/* implicit */short) var_5);
                                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_5]))) | (((unsigned int) (+(var_13))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (max((((/* implicit */long long int) ((arr_1 [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-24702)))))), (1258789567556203487LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_7);
}
