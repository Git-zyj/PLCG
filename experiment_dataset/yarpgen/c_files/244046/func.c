/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244046
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
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (!(((/* implicit */_Bool) -312324110))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned short) -312324110);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) (signed char)-103))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (((((/* implicit */_Bool) 2210581254U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (403703848U)))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((short) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (unsigned char)109)))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = min(((((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((var_5) - (3063725580U)))))) : (min((var_0), (((/* implicit */unsigned int) (signed char)105)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_9))))))));
            var_15 -= ((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_16 |= ((/* implicit */_Bool) var_1);
        var_17 -= ((/* implicit */unsigned int) ((unsigned long long int) (~((~(((/* implicit */int) var_4)))))));
    }
}
