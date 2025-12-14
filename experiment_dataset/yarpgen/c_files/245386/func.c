/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245386
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
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (8475781626528686068ULL) : (((/* implicit */unsigned long long int) var_11)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */short) ((unsigned short) -791186380533752723LL));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                var_21 &= ((/* implicit */int) arr_0 [(unsigned short)6]);
                var_22 = (+(-3118751605827638803LL));
            }
            var_23 += ((/* implicit */unsigned char) arr_1 [i_1 + 1] [(unsigned char)0]);
            var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [(unsigned char)6])), (arr_0 [2])))) ? (((/* implicit */long long int) arr_2 [2ULL])) : (min((((/* implicit */long long int) 1163094648)), (1586470370238838313LL)))))) ? (((((/* implicit */_Bool) (short)15742)) ? (1266338510) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [6LL])) ? (((/* implicit */int) arr_0 [4])) : (((/* implicit */int) (unsigned char)255))))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */int) max((((/* implicit */long long int) arr_9 [i_0])), (4327743489600190124LL)));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
        }
        var_27 = min((min((arr_10 [i_0] [i_0]), (((long long int) -553076113)))), (((long long int) min(((short)-16565), ((short)11842)))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_6 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (arr_6 [i_0])))))) ? (-21LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0])), ((unsigned char)160)))))));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((short) (+((+(((/* implicit */int) arr_14 [i_4])))))));
        var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -8307658658316403947LL)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
    }
}
