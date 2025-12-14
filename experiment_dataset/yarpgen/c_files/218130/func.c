/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218130
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4150)) - (((/* implicit */int) arr_1 [i_0]))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_0))))))))));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [(signed char)3])))) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (var_3)))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)63)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (var_7))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((int) arr_8 [i_1] [i_2] [i_1]))) : (var_11)));
            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (16179758274975795399ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8062)))))) ? (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 1])) : ((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))))));
            var_17 = ((/* implicit */_Bool) ((15806231466068944747ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)40054)))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_2 - 1] [i_2 + 3])))));
        }
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_1]));
        var_20 = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]));
    }
    var_21 = ((/* implicit */long long int) var_9);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_11)) ? (2640512607640606862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_4)))))));
    var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)61)))) * (((/* implicit */int) var_9))))) : (min((((/* implicit */unsigned int) var_9)), (min((var_11), (((/* implicit */unsigned int) (unsigned short)36873))))))));
}
