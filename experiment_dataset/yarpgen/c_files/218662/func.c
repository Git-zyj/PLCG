/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218662
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_10)))) / (((((/* implicit */_Bool) 0ULL)) ? (2930034015U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1024)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_6)))))))))) : (((((/* implicit */_Bool) var_1)) ? (2561790580U) : (((/* implicit */unsigned int) -469066121))))));
                    var_14 += ((((/* implicit */_Bool) (short)1024)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : ((((!(((/* implicit */_Bool) (short)-1024)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16743909406443951121ULL))));
                }
            } 
        } 
        arr_7 [(unsigned short)7] = ((/* implicit */short) var_2);
        var_15 &= ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)73))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (~((~(15811640405690276826ULL)))));
        var_17 &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-66)) / (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */unsigned int) (+(var_2)));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) (-((+(18446744073709551606ULL)))));
                var_20 = ((((/* implicit */_Bool) (short)30217)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (unsigned short)16380)))));
            }
        } 
    } 
}
