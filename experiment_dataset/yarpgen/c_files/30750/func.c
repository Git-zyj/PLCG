/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30750
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
    var_18 = var_2;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_19 += ((/* implicit */unsigned short) var_5);
            arr_6 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1]) & (arr_5 [i_0 + 2] [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_0 + 2] [i_0 + 2])))) : (min((((/* implicit */unsigned int) -1764294289)), (var_7)))));
            var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (arr_0 [i_0] [i_0 + 2]) : (arr_5 [14U] [i_1]))))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [17] [17] [1])) ? (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)83)))))) : ((-(arr_1 [i_0 + 2])))));
            arr_10 [(short)24] [(unsigned char)10] [(short)24] &= ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_8 [9] [i_0 + 2] [i_0]) : (((/* implicit */unsigned int) -1764294302))));
        }
        for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
        {
            var_21 *= ((/* implicit */short) max((max((((/* implicit */unsigned int) (unsigned short)19904)), (max((((/* implicit */unsigned int) -1489727626)), (arr_0 [i_0] [i_0 - 1]))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-18502)), (-1764294274))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_16))));
        }
        arr_13 [(short)21] &= ((/* implicit */int) (+(8780042078805230656ULL)));
    }
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) (+(max((16777088), (((/* implicit */int) arr_7 [i_4] [i_4 + 1]))))));
        arr_17 [18] = max((((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)128)));
    }
    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (-(max((((/* implicit */unsigned int) (short)-27411)), (3961716373U))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((signed char) (+((-(36028797018963968LL)))))))));
        var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (unsigned short)19903)))));
        arr_21 [i_5] = ((/* implicit */unsigned int) var_10);
    }
    var_25 = ((/* implicit */unsigned int) var_2);
}
