/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34580
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) * (((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(_Bool)1])) >> (((/* implicit */int) var_1))))) % (min((281474976702464LL), (((/* implicit */long long int) (short)6099))))))));
        var_16 |= max(((+(((((/* implicit */int) arr_0 [15LL])) / (((/* implicit */int) var_9)))))), (((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) (+(((/* implicit */int) (signed char)16)))))))));
        arr_3 [i_0] [11LL] = (unsigned char)38;
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_7 [(_Bool)1] = ((/* implicit */long long int) 4294967295U);
        var_17 = 2015172577696799367LL;
    }
    var_18 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (long long int i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                arr_12 [i_2] [(unsigned char)10] [i_3] |= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_6 [i_2 - 2]), (arr_6 [i_2 + 2]))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((long long int) (-((+(((/* implicit */int) arr_9 [i_2] [(unsigned char)7])))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)0))))));
}
