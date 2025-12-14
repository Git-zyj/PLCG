/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234070
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_3 [i_1 + 1]) % (((/* implicit */int) arr_0 [i_1 + 3]))))), (((((/* implicit */_Bool) arr_5 [(signed char)14] [i_1] [i_1 - 1])) ? (5253395527409052659ULL) : (13193348546300498957ULL)))));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) var_10))) ? (13193348546300498957ULL) : (((/* implicit */unsigned long long int) var_1)))) == (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [24LL])), (13193348546300498957ULL)))));
                arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)78)) | (((/* implicit */int) (_Bool)1)))))))), ((~(((/* implicit */int) ((5253395527409052659ULL) != (((/* implicit */unsigned long long int) 160511909092531262LL)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_4) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (5253395527409052659ULL))))))), (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 5253395527409052659ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)100))))))));
    var_13 = ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (5253395527409052646ULL));
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(13193348546300498957ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
