/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21924
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
    var_11 = ((/* implicit */unsigned short) var_3);
    var_12 -= var_10;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_13 *= ((/* implicit */_Bool) (~((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) | (max((((/* implicit */int) var_10)), (2147483647)))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)142)) & (((/* implicit */int) arr_0 [i_0] [(signed char)10]))));
        var_15 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min((2272236705U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)57903))));
            var_17 ^= ((/* implicit */unsigned int) arr_3 [(unsigned char)6] [(unsigned char)6] [i_1]);
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) var_6);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_2])) >> (((((/* implicit */int) (unsigned char)149)) - (149)))));
                var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 2022730590U)) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : ((~(arr_3 [4LL] [4LL] [i_2])))));
                var_20 *= ((/* implicit */unsigned int) ((unsigned char) (signed char)105));
                arr_8 [i_2] = ((/* implicit */int) var_1);
                arr_9 [i_2] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2] [i_2])) + (((/* implicit */int) arr_2 [i_1] [i_2]))));
            }
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
            {
                var_21 ^= ((/* implicit */short) ((arr_3 [i_3] [i_1] [(short)3]) >> (((/* implicit */int) arr_0 [i_0] [i_3]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_5 [i_0] [i_1] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [5] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_3])) * (((/* implicit */int) arr_1 [i_5 + 1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((long long int) 485792876890344121ULL));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((int) ((unsigned char) arr_13 [i_6 - 2] [i_6 - 2])));
            arr_25 [i_0] = ((/* implicit */long long int) (+(16843368171413276890ULL)));
            var_24 = ((/* implicit */unsigned char) arr_24 [i_0] [10LL]);
        }
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [5] [(unsigned short)10] [(unsigned short)12] [i_7] [i_7] [i_7]))));
        arr_28 [i_7] = ((/* implicit */unsigned char) -480171045);
    }
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_26 = ((/* implicit */int) min((2022730591U), (((/* implicit */unsigned int) arr_29 [i_8]))));
        arr_32 [i_8] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_26 [i_8])), (arr_29 [i_8]))) | ((+((+(((/* implicit */int) arr_31 [i_8] [i_8]))))))));
    }
    var_27 -= ((/* implicit */unsigned short) ((_Bool) var_4));
}
