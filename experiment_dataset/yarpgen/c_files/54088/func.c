/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54088
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
    for (int i_0 = 1; i_0 < 6; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) (-((+(17748407150175618838ULL)))));
        var_21 ^= ((/* implicit */unsigned long long int) (!((!(arr_0 [(unsigned short)0] [i_0 + 3])))));
    }
    for (int i_1 = 1; i_1 < 6; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 1])) >> (((max((((/* implicit */int) arr_0 [(_Bool)0] [(_Bool)0])), (1460700102))) - (1460700078)))));
        var_22 = ((/* implicit */unsigned char) 9071639874509133741ULL);
        var_23 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) 1087527905)), (5267925853831641135ULL))), (((((((/* implicit */_Bool) (unsigned char)119)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)155), (var_1)))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 6; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned short) var_13);
        var_24 = ((/* implicit */unsigned long long int) arr_0 [(_Bool)0] [i_2]);
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        arr_12 [i_3] [i_3 - 2] = ((/* implicit */unsigned long long int) 749314635);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) * (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (5267925853831641135ULL)))));
        arr_13 [i_3] = arr_9 [i_3 - 1];
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) max(((((-(arr_15 [i_4]))) * ((-(9071639874509133739ULL))))), (((unsigned long long int) (+(13178818219877910471ULL))))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((9375104199200417875ULL) ^ (arr_14 [i_4])))))));
    }
    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) (((-(arr_14 [i_5]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))));
        arr_21 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned char)179), (((/* implicit */unsigned char) arr_10 [i_5] [i_5 + 3])))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) ((((14891354934442442416ULL) + (((/* implicit */unsigned long long int) 1460700102)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_5 - 1])) < (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)88)), ((unsigned short)32256))))))))));
    }
}
