/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199259
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_10 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((var_4), (arr_1 [i_0])))), (1048575ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                var_11 = ((/* implicit */unsigned short) var_1);
                arr_12 [i_0] [i_1] [i_2] = arr_10 [i_1] [i_2];
            }
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned long long int) arr_9 [i_0] [i_0])))));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) var_7);
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_16 [i_3] &= ((/* implicit */_Bool) (-(5066647004391236578LL)));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) var_0);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4257851316U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) : (2007615625U)));
        arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((int) arr_0 [19] [i_3]))) : (((((/* implicit */_Bool) (~(arr_10 [i_3] [i_3])))) ? (arr_9 [i_3] [i_3]) : (arr_6 [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_23 [13LL] [i_4] = ((/* implicit */unsigned int) 9223372036854775792LL);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((unsigned char) var_5));
            var_15 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)40))));
            arr_28 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (-(arr_22 [i_5])));
        }
        arr_29 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_32 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6])) ? (((((/* implicit */_Bool) arr_30 [13U] [i_6])) ? (arr_31 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6])))));
        arr_33 [i_6] = ((/* implicit */long long int) ((unsigned short) arr_31 [i_6]));
        var_16 = ((/* implicit */unsigned short) -7372877310628679235LL);
    }
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((7372877310628679235LL) >> (((7372877310628679235LL) - (7372877310628679181LL))))) : ((+(-7372877310628679235LL))))))));
    var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -7372877310628679238LL)) ? (5414413349860448543LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (((/* implicit */long long int) var_9)))) >> (((((((/* implicit */_Bool) ((long long int) var_2))) ? (max((var_4), (((/* implicit */long long int) var_7)))) : (((long long int) 9223372036854775807LL)))) - (4104342563422380029LL)))));
}
