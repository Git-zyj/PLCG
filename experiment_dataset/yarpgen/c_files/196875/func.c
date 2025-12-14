/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196875
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(short)5] [(short)5] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [21ULL]))) / (max((((/* implicit */unsigned long long int) ((-1415684339) - (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) * (arr_5 [i_0] [18ULL])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) 4442953534622855507LL)) % (var_0))), (((/* implicit */unsigned long long int) arr_1 [i_0] [5ULL])))) >> (((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (arr_2 [i_0] [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(_Bool)1] [i_1]))))))) - (1568454449LL)))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1570538934018643763ULL) << (((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (arr_5 [20ULL] [i_1]))) - (6703351935353703740ULL)))))) ? (max((max((3523865310058483799LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -15LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((1187112556U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_8 [4ULL] [1U] |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (((((/* implicit */_Bool) 134201344U)) ? (((/* implicit */unsigned long long int) 3523865310058483799LL)) : (arr_5 [(unsigned char)13] [i_0]))))) / (((/* implicit */unsigned long long int) (+(((1838157305690671464LL) / (((/* implicit */long long int) ((/* implicit */int) (short)48))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((_Bool) ((((((/* implicit */int) (short)-32)) + (2147483647))) << (((7309991666322437316ULL) - (7309991666322437316ULL)))))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (4294967295U)))), (409600909338251313LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_14 = ((/* implicit */signed char) var_7);
}
