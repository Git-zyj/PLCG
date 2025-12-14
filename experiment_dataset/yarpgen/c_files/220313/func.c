/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220313
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3959618872U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (unsigned short)47366)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32764))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((long long int) (signed char)-112))))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)4017)))))));
                var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-1)) ? (min((var_6), (((/* implicit */long long int) (signed char)121)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2] [(signed char)1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                arr_9 [0ULL] [i_2] = ((/* implicit */signed char) var_2);
                arr_10 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-83)), ((unsigned char)65)))))))) >= (((((((/* implicit */_Bool) 983280828310158047LL)) ? (5002710916692471262ULL) : (((/* implicit */unsigned long long int) -9223372036854775797LL)))) + (((/* implicit */unsigned long long int) (+(422549582))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)35048)) : (-1137363786)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)126)), ((unsigned short)19988)))) : (((/* implicit */int) var_4))))));
}
