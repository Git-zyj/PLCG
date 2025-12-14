/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190308
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
        var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) min((3U), (4294967287U)))) && (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) 1306253252)) : (4294967281U)))) - (((10486397235992396140ULL) - (((/* implicit */unsigned long long int) 0U)))))) + (((((/* implicit */_Bool) (~(-1637560494)))) ? (((15453982352600311892ULL) | (2940734565164378611ULL))) : (((/* implicit */unsigned long long int) 4119282221U))))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((4077857360291050990ULL), (((/* implicit */unsigned long long int) (signed char)91))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) >= (arr_5 [9ULL] [i_1]))) ? (arr_2 [i_1 + 3]) : ((-(arr_2 [i_1])))));
        arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 441477204U)) || (((/* implicit */_Bool) 2297853128U)))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_9 [i_2] [i_2])) == (((((arr_11 [i_2]) - (((/* implicit */unsigned int) 0)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)104)) + ((-2147483647 - 1)))))))));
        var_20 = ((/* implicit */unsigned long long int) (+((-(arr_11 [i_2 - 1])))));
    }
    var_21 &= ((/* implicit */unsigned int) var_8);
    var_22 = ((/* implicit */unsigned int) var_5);
    var_23 = ((/* implicit */unsigned int) (((~(((22ULL) - (((/* implicit */unsigned long long int) 0)))))) <= (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) >> (((/* implicit */int) (unsigned char)0)))))));
    var_24 = (((((+(0U))) >= (((/* implicit */unsigned int) ((int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)212)) << (((4035349329U) - (4035349314U)))))) : ((((~(18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
}
