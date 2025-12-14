/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236650
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (-(((arr_3 [i_0]) ? (3290581856770477861LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1] [i_0]))));
            var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)210)) ? (7108879700768013423ULL) : (2507664701342457486ULL)))))) || (((/* implicit */_Bool) var_9))));
            arr_9 [i_0] [9ULL] [i_1] |= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
            arr_10 [i_0] = ((/* implicit */_Bool) (+(10742591624205684644ULL)));
        }
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_13 &= max((arr_12 [(short)16]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [10U]))))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(-7363361179691059693LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)33570))))));
        var_14 = ((/* implicit */long long int) (((+(arr_12 [i_2]))) <= ((((_Bool)1) ? (arr_12 [i_2]) : (((/* implicit */long long int) 3U))))));
        arr_14 [7LL] [i_2] = ((unsigned long long int) ((signed char) min((((/* implicit */unsigned int) var_7)), (4294967278U))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_12 [i_3]));
        var_15 = ((/* implicit */long long int) arr_15 [i_3 - 1] [i_3]);
    }
}
