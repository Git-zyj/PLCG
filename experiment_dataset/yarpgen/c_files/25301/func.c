/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25301
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2] [i_2])))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)39)), (arr_0 [i_1])))) ? ((~(((/* implicit */int) arr_0 [1LL])))) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))));
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) (signed char)39)), (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) min(((signed char)-4), ((signed char)39))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-((((!(var_14))) ? (((((/* implicit */_Bool) (unsigned short)2312)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))));
    var_18 = ((/* implicit */unsigned short) var_3);
    var_19 -= ((/* implicit */short) (-((+(((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) var_4);
                var_21 = arr_8 [i_3];
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)251)), (0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (signed char)-32)), (arr_11 [i_3])))))) : (min((arr_11 [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                arr_13 [i_3] [i_4] = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
