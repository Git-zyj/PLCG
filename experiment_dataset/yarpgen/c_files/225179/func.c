/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225179
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
    var_10 = ((/* implicit */short) (signed char)11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) (unsigned char)143);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [(unsigned char)5] [(unsigned char)5]);
            arr_6 [i_0] [2ULL] [(unsigned char)9] = 8413023923804183554ULL;
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_12 += ((/* implicit */unsigned char) (signed char)-12);
            var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-11))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) 1139259582U);
            arr_13 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-118)) * (((/* implicit */int) (short)27138)))) / (((((/* implicit */int) (signed char)-12)) * (((/* implicit */int) (unsigned short)12980))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0] [i_4]));
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned char) (((-(17350433932087264325ULL))) < (((var_0) ^ (arr_2 [i_0])))));
        }
    }
    var_16 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned long long int) 14348208738853366749ULL))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))))));
}
