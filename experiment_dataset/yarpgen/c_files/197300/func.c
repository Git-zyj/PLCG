/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197300
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
    var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)63)) ? (936762716) : (((/* implicit */int) (unsigned short)63607))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-13)))))))), (((((((/* implicit */_Bool) (unsigned char)25)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_5) : (12))))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)13)) / (((/* implicit */int) (signed char)12)))))));
                    arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)45801)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)-13)));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) << ((((+(arr_2 [i_1]))) - (1488443084166818474LL))))))));
                    arr_13 [i_0 + 1] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) 5860472596449394403LL)))) ? (137438953344LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    arr_18 [i_0 + 1] = ((/* implicit */int) max((arr_0 [i_0 - 1] [i_0 - 1]), (((arr_11 [i_1] [i_1 + 4]) >> (((((((/* implicit */_Bool) -137438953322LL)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (16719180197108937511ULL))) - (4011364816169391146ULL)))))));
                    var_17 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (short)10806)) : (((/* implicit */int) (signed char)16))))) != (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [(_Bool)1] [i_1 - 2] [5LL]))))), (((unsigned long long int) (short)14344)))));
                }
                for (unsigned char i_5 = 4; i_5 < 19; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (arr_12 [i_0] [i_1 - 2] [(unsigned short)14] [(unsigned short)14])));
                    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_12 [i_0] [(signed char)8] [i_0] [i_0])), (min((1727563876600614104ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0 + 1]))))));
                    var_20 = ((/* implicit */signed char) ((arr_19 [i_1] [i_1] [i_5 - 1] [i_1]) | (max((arr_19 [(unsigned char)7] [(unsigned char)7] [i_5 - 2] [i_5]), (((/* implicit */long long int) (signed char)-50))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_7] [i_6] [i_5 + 1] [i_1 + 3])))) - (((unsigned long long int) arr_7 [i_5 - 4] [i_0 - 1]))));
                                var_21 = ((/* implicit */unsigned int) arr_8 [(_Bool)1] [i_1 - 1]);
                                var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_21 [i_1 - 2])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((((int) 12265876097858559683ULL)), (((/* implicit */int) (signed char)12))))) : ((~(min((1727563876600614105ULL), (((/* implicit */unsigned long long int) (signed char)-13))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2660583563941737311ULL)) ? (((/* implicit */unsigned long long int) 137438953344LL)) : (1727563876600614103ULL)))) ? (((/* implicit */unsigned long long int) arr_3 [i_8] [i_8] [i_10])) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)127))))), (((((/* implicit */_Bool) 1727563876600614105ULL)) ? (arr_29 [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8]))))))));
                    var_26 |= ((/* implicit */_Bool) ((unsigned short) (signed char)127));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) - (((((/* implicit */_Bool) (-(16719180197108937511ULL)))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}
