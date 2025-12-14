/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26217
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-576460752303423488LL) != (((/* implicit */long long int) ((/* implicit */int) var_2))))))) > (var_11))))) % (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))) : (((unsigned long long int) var_4))))));
                    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)226)))) + ((-(-576460752303423481LL)))));
                        var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)62))))) || (((((/* implicit */_Bool) (signed char)120)) || (((/* implicit */_Bool) arr_2 [i_1 + 1])))));
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) - (9423848450819888419ULL)))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)255))))))) / (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) & (((unsigned int) 3055642788031352183LL))))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((unsigned int) ((unsigned char) 9423848450819888419ULL));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) 68685922304LL)))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_5)) / (18446744073709551611ULL))) * (((9423848450819888419ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_1 + 1])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -576460752303423466LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_1 + 2] [i_5])))) : (((unsigned int) var_9))));
                        arr_25 [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -576460752303423466LL)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_31 [i_6] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 65011712U)) ? (((/* implicit */int) (short)-22061)) : ((-(((/* implicit */int) (short)22060)))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((long long int) (unsigned char)93))))) != ((-((~(3996192550U)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((728970085956987475ULL) * (((/* implicit */unsigned long long int) -1889003460))))) && (((/* implicit */_Bool) ((unsigned char) 134201344)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_0);
    var_19 = ((/* implicit */long long int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))));
    var_20 = ((/* implicit */long long int) var_11);
}
