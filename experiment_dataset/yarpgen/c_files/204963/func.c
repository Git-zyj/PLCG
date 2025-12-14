/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204963
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (((((+(1536449280U))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_1)))))))));
        arr_2 [(short)11] [i_0 + 4] = ((/* implicit */unsigned char) ((15812710880689656500ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) (unsigned short)54648))));
        var_17 = ((/* implicit */unsigned long long int) var_4);
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)251)) << (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_7))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) var_0);
        arr_9 [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [0LL]))));
    }
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [0U])) < (((/* implicit */int) var_9))))) >= (((/* implicit */int) var_7))))) == (min((((/* implicit */int) var_9)), (var_8)))));
        var_21 = ((/* implicit */unsigned long long int) ((max((((((-1204588091) + (2147483647))) << (((11372194280226361233ULL) - (11372194280226361233ULL))))), (((((/* implicit */int) arr_0 [i_3])) & (((/* implicit */int) arr_6 [i_3])))))) - (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 - 2])) <= (((/* implicit */int) var_1)))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((847700240) - (((/* implicit */int) var_10)))) < (((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
        arr_18 [i_4] [21ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((arr_17 [i_4]) + (arr_17 [i_4]))))))) <= (((/* implicit */int) (((+(((/* implicit */int) arr_14 [i_4])))) == ((~(((/* implicit */int) var_9)))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) (~(var_8)))), (((((var_5) + (((/* implicit */long long int) arr_17 [i_4])))) | (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_7)))))))));
    }
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)32767)))) && (((/* implicit */_Bool) (short)-13929)))))) < (var_6))))));
}
