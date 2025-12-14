/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192774
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
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */int) ((_Bool) (unsigned short)255))) << (((((var_5) ? (var_0) : (var_0))) + (8665057930474125596LL)))))));
    var_21 = ((/* implicit */int) (unsigned short)65281);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) (((+(-909796747))) / (((((/* implicit */int) (unsigned short)16384)) - (909796747)))));
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_1 [i_0])) - (9795)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_1 + 2])) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 1])) != (((/* implicit */int) (unsigned short)49152)))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_3 [13ULL] [i_1]))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            var_25 = ((arr_7 [i_1 + 1] [i_1 + 3]) + (arr_7 [i_1 - 2] [i_1 + 1]));
            arr_8 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [(signed char)5]) >= (((/* implicit */unsigned long long int) var_7)))))) > (arr_4 [i_2 + 1])));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_13 [i_1 + 1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_7 [i_1] [i_3])))) >= (arr_10 [i_1] [i_1 + 3])));
            var_27 = ((/* implicit */signed char) arr_3 [i_1] [i_3]);
            var_28 = ((/* implicit */signed char) min((var_28), (((signed char) var_15))));
        }
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15698574461724576374ULL)) ? (((/* implicit */unsigned long long int) ((271213600) - (((/* implicit */int) (unsigned short)49168))))) : (5186403810529240829ULL)));
    }
    var_30 = ((/* implicit */long long int) (((((+(((/* implicit */int) var_6)))) & (((/* implicit */int) var_1)))) < ((~((+(((/* implicit */int) var_10))))))));
}
