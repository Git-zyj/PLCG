/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222205
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
    var_13 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (var_9) : (min((var_2), (((/* implicit */unsigned long long int) var_3)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((_Bool) max(((+(144115187807420416LL))), (((/* implicit */long long int) var_11)))));
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_2)))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) == (15655435635071993124ULL)))))))));
                var_15 = ((/* implicit */unsigned int) ((unsigned short) ((-90027935) < (-90027932))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~((~(arr_1 [i_1 + 3]))))))));
                var_17 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)3990))))));
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) -90027932)) : (var_8))) : (((/* implicit */unsigned int) 90027923))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 90027951)) ^ (arr_9 [i_2])));
        }
        var_20 += ((/* implicit */_Bool) ((short) arr_8 [(unsigned short)9] [i_2]));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) >= (187732831))))));
        arr_13 [(short)16] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61005))) / (2089745722888647419LL)))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_11 [i_2] [i_2] [(_Bool)1]) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (1653016829U))))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] |= ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */unsigned int) (+(((min((arr_9 [(short)11]), (((/* implicit */long long int) (short)15566)))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60537)))))));
    }
    var_23 ^= ((/* implicit */unsigned short) 2089745722888647419LL);
}
