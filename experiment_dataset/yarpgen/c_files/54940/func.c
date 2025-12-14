/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54940
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56079)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-8))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)2047), ((unsigned short)2038))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)2065)), (9LL))))));
                var_17 ^= ((/* implicit */signed char) max((((((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55926))))) * (min((63LL), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1 + 3])))))), (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-39))))) + (((long long int) var_12))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_1] [(unsigned short)1] [i_0 + 2] = ((/* implicit */long long int) (unsigned short)0);
                                var_18 &= (unsigned short)65535;
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (+(-4891747624428023330LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_0 + 2] [14LL] [i_1])))) : (min((var_11), (((/* implicit */long long int) max(((signed char)-11), ((signed char)-10))))))));
                                var_19 |= arr_6 [12LL] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_17 [i_1] = ((/* implicit */signed char) ((long long int) (-(arr_5 [i_1] [i_0]))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) << (((arr_3 [i_0 + 2]) + (1189419136591897181LL)))));
                        arr_19 [i_0] [i_0] [i_0] [i_0 - 1] &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)8)) ^ (((/* implicit */int) var_5)))) | (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)63496))))));
                        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(signed char)16] [i_1] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_13 [i_1 + 2] [i_1 - 3] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_0] [i_1 - 1]))));
                        arr_20 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)5614))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) min((((max((var_3), (((/* implicit */long long int) (signed char)39)))) >> (((((/* implicit */int) var_0)) - (33445))))), (((/* implicit */long long int) ((signed char) (unsigned short)5622)))));
                        var_22 = ((/* implicit */long long int) max((var_22), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4891747624428023330LL)) ? (((/* implicit */int) (unsigned short)59918)) : (((/* implicit */int) (unsigned short)63491))))) ? (((15LL) | (4415390416169958810LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11145)))))))));
                        var_23 = ((((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_1]))))) | (((((/* implicit */_Bool) var_6)) ? (-1284471153564006727LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)11] [i_2] [i_1] [i_2]))))))) | (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5622)))))))));
                        var_24 |= ((unsigned short) ((signed char) arr_2 [i_2 - 2] [i_1 - 2] [i_2 - 2]));
                        arr_23 [i_0 + 2] [i_1] [1LL] [(signed char)6] [i_0] = ((((/* implicit */_Bool) ((var_13) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 2] [(unsigned short)5] [i_1])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_7 [i_1])))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54391)) ? (((/* implicit */int) (unsigned short)32754)) : (((/* implicit */int) (signed char)120))))), (((((/* implicit */_Bool) arr_6 [(signed char)16] [i_1] [i_1] [17LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [16LL] [i_0] [i_1] [8LL]))) : (var_11))))) : (-9LL));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        arr_28 [14LL] [i_0] [i_2] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 6766656331528771253LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)37880))))));
                        var_25 = ((signed char) max((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)37631)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 320096508370061822LL)))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            for (unsigned short i_10 = 3; i_10 < 14; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((var_7) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_8] [i_8] [i_9] [i_10])))))));
                    var_27 ^= ((long long int) (unsigned short)56519);
                }
            } 
        } 
    } 
    var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_12))) && (((/* implicit */_Bool) -1LL)))))) : (var_7)));
}
