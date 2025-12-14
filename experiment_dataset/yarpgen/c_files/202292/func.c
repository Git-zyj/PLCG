/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202292
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (signed char)-126))));
        var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) : (var_9))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4572867655271629561LL)) ? (((/* implicit */long long int) 0U)) : (var_9)))) ? (((/* implicit */unsigned long long int) 0U)) : (((unsigned long long int) 1688849860263936ULL))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            var_12 = ((/* implicit */unsigned int) (signed char)-126);
            arr_10 [i_1] [i_2 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_1 - 4] [i_2 - 1]));
            var_13 = ((/* implicit */unsigned int) ((unsigned short) var_8));
        }
        var_14 -= ((/* implicit */signed char) ((372471927) % (((/* implicit */int) (short)-21786))));
    }
    var_15 = ((((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)109)), (-372471928))), (((/* implicit */int) (unsigned short)65535))))) ? (229127923) : (((/* implicit */int) (short)0)));
    var_16 = ((/* implicit */unsigned short) (-(1909789131)));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_9 [i_3] [i_3 + 1] [i_3]), (var_2))), (((/* implicit */unsigned int) (short)-17991))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_12 [i_3] [i_3]))))), (min((-372471928), (((/* implicit */int) (unsigned char)217))))))) : (arr_6 [i_3] [i_3 - 1] [i_3 + 1])));
        arr_13 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned long long int) 0U);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((unsigned short) 3931975365U));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (_Bool)0))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63454)) / (-372471928))))));
            }
            arr_21 [i_4] [i_5] [i_5] = ((/* implicit */int) max(((-(5561485586672044474LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (var_7))))))));
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_4] [i_4])), (var_1))))));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */unsigned int) (-(arr_3 [i_7])));
        var_22 = ((/* implicit */int) 15883424700151865722ULL);
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_6)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)127)), ((-(-1479706762))))))));
    }
}
