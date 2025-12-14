/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226681
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((arr_1 [i_2]), (18446744073709551615ULL)))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)26)) << (((arr_1 [9ULL]) - (903183394520546442ULL)))))))));
                    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2030066630)) ^ (5962416625216655148LL)))), (((((((/* implicit */int) (unsigned char)176)) > (-2030066630))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) -2030066630)))) : (18446744073709551615ULL)))));
                    arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) 10055354966523288452ULL);
}
