/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213216
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
    var_17 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))));
        arr_3 [(short)10] |= ((/* implicit */unsigned int) 67076096LL);
        var_19 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (max((var_1), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) var_10);
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_1 - 1] [i_2])), (var_12))));
            arr_12 [i_1] [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -50090749))) ? (((/* implicit */unsigned long long int) -141938639)) : (arr_6 [i_1] [2])))) ? (arr_6 [(_Bool)1] [i_2 - 1]) : (((((/* implicit */unsigned long long int) ((unsigned int) 50090749))) ^ (((17293822569102704640ULL) ^ (((/* implicit */unsigned long long int) 50090736))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17293822569102704640ULL)) ? (arr_15 [i_1]) : (-117567718)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1])))))) ? (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (3758096384U)))), (min((-117567718), (arr_15 [i_1 - 1]))))) : (((((/* implicit */int) ((unsigned short) arr_15 [i_1]))) | (min((var_15), (arr_9 [i_1]))))))))));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2574783028859822295LL) > (((long long int) var_16)))))) != ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1]))) & (arr_13 [i_1 - 1] [i_3] [i_1 - 1])))))));
            var_22 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_3]);
            var_23 = ((/* implicit */long long int) arr_16 [i_1] [6ULL]);
        }
    }
}
