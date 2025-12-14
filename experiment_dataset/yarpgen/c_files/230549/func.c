/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230549
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
    var_18 -= var_10;
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        arr_4 [i_0 + 3] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) (signed char)-51)), (max((-2911835144335219775LL), (3871793190860217888LL)))))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max(((((-(((/* implicit */int) (short)32767)))) - (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((max((arr_5 [10LL]), (-3809726393194579527LL))) >= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (7765671605784379215LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))))))));
        arr_8 [4] |= ((/* implicit */signed char) (-(((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1]))))) | (-9223372036854775777LL)))));
        var_20 = ((/* implicit */signed char) ((_Bool) 7765671605784379215LL));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
    {
        var_21 = ((((((/* implicit */_Bool) arr_9 [(_Bool)1])) && (((/* implicit */_Bool) 9223372036854775807LL)))) ? (arr_10 [i_2 - 1]) : (((/* implicit */int) ((unsigned short) arr_0 [i_2 - 1] [i_2 - 1]))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) var_8))))) ? (6893653913640228919LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [10LL]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_23 = var_3;
                        arr_23 [i_2 + 4] [i_2 + 4] [4ULL] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (11861883696400231842ULL)))));
                    }
                } 
            } 
            arr_24 [i_4] = ((/* implicit */unsigned int) arr_7 [i_2 + 3]);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((long long int) 14281369521023263605ULL)) | (((/* implicit */long long int) (+(-2147483647)))))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1500418262)) == (2441022332U))))));
                        var_26 = (-(((((/* implicit */_Bool) (short)4687)) ? (var_11) : (5609986631100613528ULL))));
                        arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) arr_11 [i_2 - 1] [i_2 + 4] [i_2 + 2]);
                    }
                } 
            } 
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_18 [i_4]))));
            var_28 = (_Bool)1;
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) 1500418261))));
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) var_14);
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)6)))))));
                            arr_42 [i_10] [(signed char)8] = ((/* implicit */signed char) 5U);
                            var_32 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) < ((+(arr_31 [i_9])))));
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_33 = ((long long int) 1205848947);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) 2873145193U))));
                        }
                    } 
                } 
                var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3809726393194579516LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_9])));
            }
            for (long long int i_16 = 4; i_16 < 9; i_16 += 2) 
            {
                var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4449)) ? (7141294255326729643LL) : (arr_34 [i_2 - 2] [i_9] [i_9])))) ? (((/* implicit */int) ((-8489004183234662537LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-12400))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    arr_55 [i_9] [i_17] = ((/* implicit */short) ((long long int) ((long long int) 6ULL)));
                    var_37 *= ((/* implicit */short) (unsigned short)52609);
                }
                arr_56 [i_16 - 4] [i_16] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) | (-8428331174631697186LL)));
            }
        }
    }
}
