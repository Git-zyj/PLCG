/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21883
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)-114)))), (((min((arr_2 [i_1] [i_0]), (arr_2 [(_Bool)1] [(_Bool)1]))) / (arr_2 [i_0] [i_1])))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    var_15 = ((/* implicit */short) min(((+(22486688214861824LL))), (((/* implicit */long long int) (+(((/* implicit */int) max((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (-(arr_3 [i_0])));
                    arr_11 [i_0] [i_0] [i_2] = min((((/* implicit */int) var_2)), ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_3)))))));
                    var_16 &= (-(((long long int) var_8)));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [20LL] [i_2])))) ? (min((2097151ULL), (((/* implicit */unsigned long long int) -6495050907999376175LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 22486688214861815LL))))))) ? (min((16363270578275632023ULL), (((/* implicit */unsigned long long int) arr_7 [i_2 - 1])))) : (((/* implicit */unsigned long long int) (~(((unsigned int) -3122781719207274735LL)))))));
                }
                for (short i_3 = 2; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_0] = (+(3808347558U));
                    arr_17 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (-(arr_2 [i_0] [13LL])))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_3] [i_1]) : (((/* implicit */int) (signed char)(-127 - 1)))))), ((+(var_0)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        var_18 += ((/* implicit */short) ((long long int) (signed char)22));
                        arr_21 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) (~(var_11)));
                        var_19 ^= ((/* implicit */int) var_13);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((15760082700774871786ULL) << (((((/* implicit */int) var_5)) + (5049)))))) ? (((/* implicit */unsigned long long int) ((-3122781719207274720LL) + (6974263322709588482LL)))) : (arr_22 [i_0] [i_1] [i_0] [i_5])));
                            var_21 &= ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1]))));
                        }
                        for (short i_7 = 4; i_7 < 24; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(arr_12 [i_3 + 1] [i_5]))))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 9007199237963776ULL))));
                        }
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [17] [i_5])) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_10))));
                    }
                }
                for (short i_8 = 2; i_8 < 24; i_8 += 2) /* same iter space */
                {
                    var_25 = max(((((~(var_11))) - (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_4 [i_8 + 1] [i_1])))));
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8])))) ? (min((((/* implicit */unsigned int) var_9)), (var_12))) : (arr_9 [18LL] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_9] [(short)21] [i_0] [i_0]))));
                    arr_33 [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) var_9);
                    arr_34 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -6974263322709588476LL))))) == (((/* implicit */int) arr_1 [i_0]))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14615)) <= (((/* implicit */int) var_4))));
                    var_29 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_29 [24LL] [i_0])))));
                }
            }
        } 
    } 
    var_30 |= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) / (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11)))) : (max((16ULL), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) var_11))));
    var_31 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    var_32 += ((/* implicit */unsigned int) (short)12090);
    /* LoopNest 3 */
    for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                {
                    var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_31 [i_12] [i_11])))) || (((/* implicit */_Bool) arr_40 [i_10 + 2]))))) : (((/* implicit */int) arr_20 [i_10] [(signed char)18] [i_12] [i_12]))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_48 [i_10] [i_10] [i_12] [i_13] [i_10 + 1] [i_10 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_10 + 3] [i_11])))))) + (((((/* implicit */_Bool) arr_13 [i_10] [i_10 + 3] [i_10 + 3])) ? (arr_13 [i_10] [i_10 + 3] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10])) ? (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (18437736874471587846ULL))) : ((((!(((/* implicit */_Bool) arr_31 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (351686804078927493LL)))) : (((unsigned long long int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
