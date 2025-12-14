/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49652
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (min((((/* implicit */long long int) (signed char)-47)), ((-9223372036854775807LL - 1LL))))))) ? (max((((((/* implicit */int) (unsigned char)239)) | (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_1))))))) : (((/* implicit */int) (short)-1549)));
                    arr_8 [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)47))));
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) <= (min((((/* implicit */unsigned long long int) var_0)), (var_9)))))), (((((2147483647) != (((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_0])))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-30702)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+(-6286115974767393105LL)));
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = max((((unsigned int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned short)61441))))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((short)-1549), (((/* implicit */short) (signed char)38))))) * (((/* implicit */int) (unsigned char)16))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 2; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_3 + 1] [i_3]));
        arr_13 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (314604443U) : (((/* implicit */unsigned int) 1780584600)))) << (min((min((((/* implicit */long long int) (unsigned char)250)), (arr_10 [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)35)) < (1406046356))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (unsigned char)6)))));
        arr_18 [i_4] = (+(((/* implicit */int) ((unsigned char) var_7))));
    }
}
