/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49610
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
    var_20 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)81)), (4196890122068752921LL)))), (min((((/* implicit */unsigned long long int) (signed char)30)), (var_7))))), (min((max((var_10), (((/* implicit */unsigned long long int) (short)21326)))), (((((/* implicit */_Bool) var_16)) ? (7ULL) : (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1523890159)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) << (((((((/* implicit */int) var_9)) + (33))) - (12)))))) : ((-(1154414788426082370LL)))))));
                arr_6 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((arr_2 [i_0 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65408))))), (((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 1455144673)))))) - (arr_3 [i_1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 2] [i_2 + 1])))) - (((/* implicit */int) (((+(((/* implicit */int) var_14)))) != (((/* implicit */int) (!(((/* implicit */_Bool) -1932788348))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)245));
                                var_24 = ((/* implicit */unsigned int) ((arr_7 [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_2 - 2]) - (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2 - 2])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -1523890159)) & (898300561U)))) : ((+(-9223372036854775805LL))))) : (((/* implicit */long long int) (+(((((-472831435) + (2147483647))) << (((((/* implicit */int) arr_10 [i_2] [i_2] [i_4])) - (42658))))))))));
                    var_26 = ((/* implicit */unsigned short) ((max(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11862768796332707472ULL)) ? (-2147483647) : (((/* implicit */int) var_11))))))) <= (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), ((~(arr_15 [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
}
