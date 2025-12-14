/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37164
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (var_2) : (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (1017336705464095131LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 4294967271U)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((-1017336705464095118LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54428))))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(arr_0 [i_0])));
        var_19 ^= ((/* implicit */signed char) var_10);
        var_20 = ((/* implicit */unsigned char) max(((+(arr_0 [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_5 [i_1]))));
                    arr_12 [i_1 - 2] [i_1 - 2] [i_3] = ((/* implicit */signed char) arr_3 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (var_16)))) ? (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) / (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
}
