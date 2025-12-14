/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43148
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
    var_18 *= ((/* implicit */unsigned int) ((unsigned long long int) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)127)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        arr_3 [i_0 + 4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((arr_2 [i_0 + 3]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_14 [6ULL] [i_1] [i_4 - 3] [9ULL] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_2] [i_2] [i_1] [i_0])) ? (arr_10 [2ULL] [(unsigned char)9] [i_2] [i_1] [2ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned short)10] [i_1] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [18U] [i_0] [i_0] [i_0 + 4]))))) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)32462))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 2] [i_1]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [6ULL] [(signed char)18] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_19 [i_0 + 1] [i_0] [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23832))) : (17134440170065491625ULL)))));
            arr_22 [i_0] [i_5] [(signed char)19] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
        }
        var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)35180))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))) : (((/* implicit */unsigned int) (+(arr_20 [(signed char)4] [(signed char)4] [i_0])))));
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_26 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(12U)))) && (((/* implicit */_Bool) ((arr_2 [i_6]) ? (17134440170065491634ULL) : (((/* implicit */unsigned long long int) var_10))))))))));
        arr_25 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 562949953421311ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (-60641015) : (((/* implicit */int) arr_15 [i_6] [(short)14] [i_6] [(short)14] [i_6])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 7))) ? ((-(((/* implicit */int) var_17)))) : ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */_Bool) arr_14 [i_6] [(short)2] [(unsigned char)18] [i_6] [(unsigned char)18])) ? (-5609553380032511383LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_28 [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_14))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63)))))))) <= (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)65526)))))));
            var_29 = ((/* implicit */int) (+(((unsigned long long int) arr_12 [i_7] [i_7] [14LL] [i_6] [i_7]))));
        }
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [10] [i_6])))))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (1127397990527890448LL)))) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) ((unsigned short) 0LL)))))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)162)))))));
            var_32 *= ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_15))) == ((~(((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 1]))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_33 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_11))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1] [i_10])) ? (var_10) : (((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6] [i_9] [i_6] [i_11])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_4 [i_6] [i_9] [i_9])))))))))));
                        var_35 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_23 [i_9])))));
                    }
                } 
            } 
            var_36 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned char)162))))));
            arr_38 [i_6] [i_9] = ((/* implicit */unsigned short) ((((var_2) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_6]) && (((/* implicit */_Bool) arr_7 [i_6]))))))));
            arr_39 [i_9] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) : (-4853992287129325977LL)));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 1; i_12 < 23; i_12 += 2) 
    {
        arr_43 [i_12 - 1] = ((/* implicit */short) ((((int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_3))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_1))) || (((/* implicit */_Bool) (~(17134440170065491635ULL)))))))));
        var_37 = ((/* implicit */unsigned int) ((short) (!((_Bool)1))));
        var_38 = ((/* implicit */short) (-((~(((/* implicit */int) var_14))))));
    }
}
