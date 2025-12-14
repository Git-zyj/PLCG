/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32910
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
    var_16 = ((/* implicit */int) ((unsigned long long int) 6820118062781679358LL));
    var_17 = ((/* implicit */short) ((1451564597U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) - (26662)))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_11))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */signed char) arr_4 [i_1 - 1]);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19011)) - (((/* implicit */int) (signed char)53))))) ? (((/* implicit */int) var_9)) : (((arr_6 [i_1]) ? (((arr_6 [i_1]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_3 [i_1] [i_1])) % (((/* implicit */int) var_8))))))));
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)74)) >> (((65536) - (65512)))));
        arr_10 [i_2 + 1] [i_2] = ((/* implicit */_Bool) var_1);
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8800666770000460106ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))), (((/* implicit */unsigned long long int) arr_9 [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))));
    }
    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_22 = ((/* implicit */_Bool) (+(((((((/* implicit */long long int) ((/* implicit */int) (short)32766))) / (-8736576749531784038LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_8)))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((18446744073709551594ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            arr_17 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 8166001435571111921LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)23676))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (~(var_2))))));
            var_25 = ((/* implicit */short) var_2);
            arr_18 [i_4 + 1] [i_3] [i_4] = (short)32755;
        }
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(((((/* implicit */_Bool) 65536)) ? (((/* implicit */unsigned long long int) 65538)) : (arr_8 [i_3 + 3] [i_3]))))))));
    }
}
