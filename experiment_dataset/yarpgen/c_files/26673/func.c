/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26673
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) 1715293999480289798ULL)) ? (1651344956) : (1651344964)))))));
                    var_20 = ((/* implicit */unsigned int) (-((~(-296135304)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */int) var_19);
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) 1651344950);
        var_22 -= ((/* implicit */_Bool) min((1785303757U), (((/* implicit */unsigned int) (unsigned short)65526))));
        arr_15 [(signed char)6] &= var_11;
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) >= (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (1651344963) : (((/* implicit */int) arr_3 [i_3]))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))), (min((arr_5 [i_3] [i_3] [i_3]), ((unsigned short)62247)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) arr_1 [i_3]))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_20 [i_4] = -1651344942;
        var_24 -= ((/* implicit */signed char) arr_18 [i_4]);
    }
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (arr_22 [i_5]) : (arr_22 [11]))))));
        var_26 = ((/* implicit */long long int) -1651344972);
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            for (short i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_29 [i_5] [i_6] [i_7] [i_7] = ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_27 [i_5] [i_6] [(unsigned short)10])))) % (max((((/* implicit */unsigned int) (unsigned short)21)), (var_10))))) * (arr_23 [i_5] [i_5] [i_7 - 2]));
                    arr_30 [i_5] [i_5] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 - 1] [i_7 - 1] [i_7 - 3]))) >= (arr_22 [i_6 + 1])))) >= (((/* implicit */int) ((unsigned char) arr_25 [i_6 - 1] [i_6 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (1651344930)))) ? (((/* implicit */long long int) var_5)) : ((-(arr_34 [i_5] [i_5] [i_7] [i_8] [i_7] [(signed char)2]))))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                                arr_36 [i_5] [i_6] [i_7] [i_7] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) 296135304)) ? (3827332315830510946LL) : (((/* implicit */long long int) 1651344926))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_37 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 296135289)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (unsigned short)27))));
    }
    var_28 -= ((/* implicit */unsigned char) var_14);
}
