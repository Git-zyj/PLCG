/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228907
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
    var_14 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1440999917)) ? (((((/* implicit */int) max((((/* implicit */short) (unsigned char)149)), (var_4)))) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) < (-822979926)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_6 [i_0] [i_2] [i_0])))))))));
                    arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((11038344800036162515ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_11)) : (8157519251382814500LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_3 + 3])) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 2]))) >= (((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1])))));
                arr_14 [i_3] = ((/* implicit */long long int) arr_11 [i_4]);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49452)) ? (((/* implicit */int) (unsigned char)170)) : (822979935)));
                arr_15 [i_3] [0U] [i_3] |= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_13 [i_3 + 1] [i_4]))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13))), (((/* implicit */unsigned long long int) ((unsigned char) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))) : (((((/* implicit */_Bool) 1790936620U)) ? (((((/* implicit */_Bool) 3171882333834886738ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((int) (signed char)-88)))))));
}
