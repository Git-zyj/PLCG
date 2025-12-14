/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39341
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) var_15))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)21229))))))) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (signed char)118))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)47510)) <= (((/* implicit */int) (unsigned short)21229)))))) ? (((((/* implicit */_Bool) min(((unsigned short)43838), ((unsigned short)240)))) ? (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)44307)))) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_15))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((arr_1 [i_0]), (((unsigned short) arr_0 [i_0])))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) max((min(((unsigned short)14310), (var_6))), ((unsigned short)1024)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1 + 2]))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                var_25 = ((/* implicit */signed char) (unsigned short)65535);
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) ((unsigned short) (unsigned short)22289))) : (((/* implicit */int) max((var_3), (arr_10 [i_0] [(signed char)0] [i_2] [(signed char)12]))))))) ? (((((/* implicit */_Bool) max(((unsigned short)44307), ((unsigned short)41969)))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-21))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((((/* implicit */_Bool) max((arr_9 [(signed char)6] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]), (var_13)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)12523)))) : (((/* implicit */int) (unsigned short)61172))))));
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2])) / (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) (unsigned short)64700)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)5950)))) : (((((/* implicit */_Bool) (unsigned short)43246)) ? (((/* implicit */int) (unsigned short)30401)) : (((/* implicit */int) (unsigned short)4909))))))));
            arr_12 [i_2] [(unsigned short)6] = ((/* implicit */signed char) max((max((arr_9 [i_0] [i_2] [i_2] [i_2]), (arr_9 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned short) ((signed char) (unsigned short)7341)))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)53012)) : (((((/* implicit */_Bool) (unsigned short)31702)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((min(((unsigned short)64700), (var_9))), (arr_1 [i_0]))))));
        }
        arr_13 [i_0] |= ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (unsigned short)40911)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned short)12523)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)57778)) & (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)15360)) : (((/* implicit */int) (unsigned short)4629))))));
        arr_16 [i_4] = var_17;
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                {
                    var_30 = ((/* implicit */signed char) (((+(((/* implicit */int) var_7)))) / (((/* implicit */int) var_5))));
                    var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61172)) ? (((/* implicit */int) (unsigned short)5950)) : (((/* implicit */int) (unsigned short)34683))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_5] [(unsigned short)9])) : (((/* implicit */int) (signed char)-62))))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-1))));
        arr_23 [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned short)3893)) - (3880)))));
    }
}
