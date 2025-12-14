/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205264
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) ((max((((1773384138595758784LL) + (1773384138595758784LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) var_6)) - (33)))))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [10LL] [i_1])) ? (((int) arr_2 [i_0])) : (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((-1773384138595758784LL) % (((/* implicit */long long int) -491635594))))))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1773384138595758808LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) var_5)) ? (1169400635887472289LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
        }
        for (int i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            var_15 = ((/* implicit */unsigned short) 1169400635887472309LL);
        }
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_16 = (-(((/* implicit */int) var_6)));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [2LL])) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_0)))))) : (((min((((/* implicit */int) var_0)), (arr_4 [i_3]))) % (((/* implicit */int) var_6))))));
        arr_8 [8] [8] = ((/* implicit */int) ((unsigned char) var_2));
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) & (-1169400635887472309LL)))) ? (((/* implicit */int) arr_11 [i_4])) : (arr_9 [i_4]))) ^ (((/* implicit */int) arr_11 [i_4]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 4194304)) ? (-1344727417848050112LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51370)))));
            /* LoopSeq 1 */
            for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                var_20 = arr_12 [i_6] [i_6] [i_6];
                arr_20 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_1))));
            }
            arr_21 [i_5] = ((/* implicit */int) (unsigned char)172);
        }
        for (int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [4] [i_4])) ? (arr_19 [i_7] [i_4]) : (((/* implicit */unsigned long long int) -1725991533))))) ? (arr_22 [20]) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_6))))) ? (arr_18 [2] [2] [i_7] [2]) : (((/* implicit */int) arr_10 [i_7] [i_4]))))));
            arr_24 [i_7] = ((/* implicit */int) 1169400635887472289LL);
            var_22 = ((/* implicit */long long int) ((int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)109)) : (-58559921)))));
            arr_25 [6ULL] [i_7] &= (+(-1773384138595758785LL));
            var_23 = ((/* implicit */long long int) var_4);
        }
        arr_26 [15] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (7626846945019920637LL) : (((/* implicit */long long int) arr_9 [i_4]))))) ? (((((/* implicit */_Bool) arr_22 [10])) ? (arr_15 [20] [i_4]) : (var_3))) : (((/* implicit */int) var_5))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_8]), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), ((unsigned char)110)))))));
        arr_30 [(unsigned short)13] = ((/* implicit */unsigned short) (unsigned char)169);
    }
    var_24 = ((/* implicit */unsigned char) ((int) 14143368374410230379ULL));
}
