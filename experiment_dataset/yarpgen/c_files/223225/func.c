/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223225
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (919890002)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (((+(arr_0 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)28))))));
        var_18 -= ((/* implicit */unsigned int) ((unsigned long long int) ((arr_0 [i_0]) == (arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) > (arr_4 [11U]))) ? ((~(((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1]))))) : (min(((-(((/* implicit */int) (_Bool)0)))), ((+(arr_3 [(unsigned char)7] [i_1])))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) max(((~(4101609690U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) var_6)))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) -2147483635))))), ((+(((/* implicit */int) (unsigned short)4251))))))) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((arr_6 [i_2]) << (((arr_6 [i_2]) - (3561879699U))))))));
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        arr_19 [0LL] [0LL] [i_4 + 3] [i_3] = ((/* implicit */int) ((((unsigned int) arr_3 [i_4 - 1] [i_5])) & (((/* implicit */unsigned int) ((arr_1 [i_3 + 2]) & (arr_1 [i_4]))))));
                        arr_20 [i_3] [i_4 - 3] [i_4 - 2] [i_5] [i_2] [i_4 + 1] = ((/* implicit */unsigned char) ((((660392423U) != (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8))))))) ? (min((((((/* implicit */_Bool) 14719924915589752198ULL)) ? (((/* implicit */int) (signed char)34)) : (arr_14 [i_2] [i_3]))), (max((arr_10 [i_2] [(unsigned char)9]), (((/* implicit */int) (unsigned char)215)))))) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_6 = 4; i_6 < 20; i_6 += 3) 
    {
        arr_23 [i_6] [i_6 - 4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_6]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_21 = ((/* implicit */short) ((-919889995) > (((/* implicit */int) (short)32767))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_22 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 4])))));
            arr_27 [(short)2] [i_6] [i_7] = ((/* implicit */signed char) ((int) ((193357606U) >> (((4101609677U) - (4101609659U))))));
        }
        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_21 [i_6])));
            var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_24 [i_8 + 2])))));
        }
        for (int i_9 = 4; i_9 < 20; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_40 [i_9] [i_6] = ((/* implicit */int) ((unsigned char) arr_22 [i_6]));
                        var_25 = (+(arr_38 [i_11]));
                        var_26 = ((/* implicit */short) (((+(-2096409209))) + (((var_11) / (arr_26 [i_6])))));
                        /* LoopSeq 2 */
                        for (int i_12 = 4; i_12 < 17; i_12 += 4) /* same iter space */
                        {
                            arr_44 [i_6 - 4] [i_6] [i_6 - 4] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_16)) != (((((/* implicit */_Bool) var_1)) ? (8574676402804685917ULL) : (((/* implicit */unsigned long long int) -8556735682266486046LL))))));
                            arr_45 [i_6] [i_6] [i_10] [i_11] [i_10] [i_6] [i_6] = ((((unsigned long long int) (unsigned char)31)) >= (((/* implicit */unsigned long long int) var_0)));
                        }
                        for (int i_13 = 4; i_13 < 17; i_13 += 4) /* same iter space */
                        {
                            arr_48 [i_6] [i_9] [i_10] [i_6] [i_6] = ((unsigned short) (+(arr_43 [i_9] [i_6])));
                            var_27 = ((/* implicit */long long int) arr_32 [i_9 + 1] [i_6]);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_6 - 4] [i_6 - 4] [i_6] [i_6])) ? (((/* implicit */int) arr_36 [i_13] [i_6 + 1] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)107))));
                        }
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)143))));
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
        }
        for (int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            arr_53 [i_6] = ((/* implicit */unsigned int) var_8);
            arr_54 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(arr_34 [i_6] [i_6 - 4] [i_6])));
            var_31 = arr_28 [i_14];
            /* LoopNest 2 */
            for (signed char i_15 = 3; i_15 < 19; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_63 [i_6] = ((/* implicit */_Bool) var_2);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65509))) | (3697715942U)))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_6 + 1] [i_6 + 1] [i_6 - 4] [i_6 + 1] [i_6] [(signed char)5])) ? (((/* implicit */int) arr_42 [i_6 + 1] [12ULL] [i_6 - 4] [i_6 + 1] [i_6] [5LL])) : (((/* implicit */int) (unsigned char)4))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (arr_34 [i_6] [i_6 - 3] [i_6]) : (-1164460167208759000LL)));
        }
        arr_64 [i_6] = ((/* implicit */long long int) (+(2147483641)));
        var_35 *= ((/* implicit */short) ((unsigned int) 15263242793613021828ULL));
    }
}
