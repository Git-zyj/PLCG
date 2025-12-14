/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234034
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_18 += ((/* implicit */long long int) (_Bool)1);
        var_19 -= ((((/* implicit */unsigned long long int) ((int) (unsigned char)78))) != ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) || (((/* implicit */_Bool) (unsigned char)178)))))) : (((unsigned long long int) (unsigned char)78)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_4 [(signed char)1] &= (unsigned char)89;
        var_20 ^= ((/* implicit */signed char) (~((+(arr_3 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_21 ^= (~(((/* implicit */int) var_13)));
        var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)78))))));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((/* implicit */short) (!((!(((/* implicit */_Bool) var_17))))))), (var_10))))));
    var_24 ^= ((/* implicit */_Bool) ((signed char) var_5));
    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_10)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))), ((-(var_0))))))));
}
