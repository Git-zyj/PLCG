/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220060
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (var_10))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [(signed char)12] [i_1]))));
                        arr_11 [i_0] [i_0] [i_0] [5ULL] [i_1] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_2 + 1] [i_0])) : (var_4)))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_5 [0LL] [i_0 + 2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) max(((short)-32751), ((short)-32749)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]))))))))));
                        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_2] [i_3 + 2])) ? (arr_2 [(unsigned short)6] [(short)16] [i_0 + 1]) : (((arr_2 [14LL] [14LL] [14LL]) & (arr_2 [(unsigned short)10] [(signed char)10] [i_2 - 2])))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_7 [(unsigned short)10] [i_0] [i_0] [i_0]))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32753)) && (((/* implicit */_Bool) (short)32751))));
        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32735)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32757))))) : (((/* implicit */int) (short)-32763))));
    }
    for (short i_5 = 4; i_5 < 22; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5 - 4])))))) : (((((/* implicit */_Bool) arr_18 [i_5 - 2])) ? (arr_18 [i_5 - 4]) : (arr_18 [i_5 - 1])))));
        var_21 = ((/* implicit */short) var_10);
        var_22 = (!(((/* implicit */_Bool) (short)32763)));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_23 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))) < (arr_17 [i_5] [i_6])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) arr_22 [i_5] [i_6])))))) : (max((((/* implicit */long long int) var_0)), (arr_15 [i_5] [0U]))))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((arr_16 [(_Bool)1]), (((/* implicit */int) (short)-32765)))))));
        }
        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_25 = ((/* implicit */short) (((-((+(arr_15 [i_5] [i_7]))))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_5 - 2] [i_5])))))));
            var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)-32763)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)32765))))))))));
            arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_5 - 2] [i_5 + 2])) < (((/* implicit */int) arr_23 [i_5 - 1] [i_5 + 1])))) || (((((/* implicit */_Bool) arr_17 [i_5 - 3] [i_5 - 4])) && (((/* implicit */_Bool) arr_21 [i_7] [i_5 + 1]))))));
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (unsigned short i_10 = 1; i_10 < 23; i_10 += 1) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_8] [(_Bool)1] [i_10 + 1] = ((/* implicit */unsigned char) ((min((var_11), (((/* implicit */unsigned int) var_2)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) arr_24 [i_8 - 1] [i_5])) : (((/* implicit */int) var_12)))))));
                            var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32754), ((short)-32749))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) * (arr_22 [i_5] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) (short)32754)) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_21 [(short)6] [(short)6]) : (((/* implicit */int) (short)-32751))))))))) : (max((max((((/* implicit */long long int) (short)-32755)), (arr_31 [i_5]))), (((/* implicit */long long int) (short)32723))))));
                            arr_35 [i_10] [i_9] [i_5] [i_8] [i_5] [(short)20] [i_5 + 1] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_16 [i_5])) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (short)32728)))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (unsigned int i_14 = 4; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (short)32720))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((arr_33 [(signed char)10] [(signed char)10] [i_13] [(signed char)20] [i_13] [(unsigned short)14]) / (((/* implicit */unsigned long long int) arr_45 [i_5 - 3] [i_11] [2LL] [i_13] [i_14])))))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) (short)-32767)) || (((/* implicit */_Bool) arr_20 [i_14] [(unsigned short)19]))))) + (((/* implicit */int) (short)32749)))), (((((/* implicit */_Bool) ((short) (short)32729))) ? (arr_41 [i_11] [(short)8] [i_14]) : (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) var_6);
        }
        var_32 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1])) || (((/* implicit */_Bool) (short)-32767))))), (((((/* implicit */_Bool) arr_33 [i_5] [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5] [i_5])) ? (arr_21 [i_5] [i_5 - 2]) : (arr_21 [i_5 - 1] [i_5 + 1])))));
    }
    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)32724)) : (((/* implicit */int) var_3)))))))));
}
