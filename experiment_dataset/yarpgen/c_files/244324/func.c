/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244324
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_11 -= var_6;
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    var_12 = ((/* implicit */unsigned short) (short)10103);
                    var_13 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 - 2] [i_3]);
                }
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_1])));
            }
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)8] [i_0])) ^ (((/* implicit */int) (unsigned short)63623))));
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_10)), (var_9))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_4 [i_0] [4LL] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65532))))) % (-1912187761575964606LL)))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_3 [i_4] [i_4] [i_4])))))) | (min((((/* implicit */int) max((arr_4 [i_4] [(unsigned short)4] [(unsigned short)0] [i_4]), (((/* implicit */unsigned short) arr_0 [i_4] [i_4]))))), (((((/* implicit */int) (unsigned short)4032)) & (((/* implicit */int) (unsigned short)65535))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((arr_16 [i_6 + 1] [i_6 - 1] [i_8] [i_8]) ? (arr_15 [i_6 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_8] [i_8] [i_8])))));
                            var_19 += (((~(((/* implicit */int) arr_10 [(_Bool)1])))) == (((/* implicit */int) ((unsigned short) var_4))));
                            var_20 = (!((!(((/* implicit */_Bool) var_9)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) max((var_21), ((-(((((/* implicit */_Bool) (unsigned short)40569)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (-4866605348031924381LL)))))));
            arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) | (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27696))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) > (((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) arr_1 [i_5]);
                        arr_26 [i_4] [i_5] [i_9] [i_10] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65385)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (unsigned short)2306))));
                        arr_27 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14448))));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_23 = ((/* implicit */_Bool) (+((+(4294967295U)))));
            arr_31 [i_4] [6U] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * ((+(((/* implicit */int) (unsigned short)65532))))));
            arr_32 [i_4] [i_4] = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) (unsigned short)26493)))) ? ((((_Bool)1) ? (-431998364114035998LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56533))))) : (((/* implicit */long long int) (~(arr_22 [i_4] [i_4]))))))));
        }
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_28 [i_4] [i_4])) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_0)))) ? (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) + (71))))) : (((/* implicit */long long int) (+((+(arr_29 [i_4]))))))));
                            arr_44 [i_4] [i_4] [i_15] [i_14] [i_15] [i_4] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned char)235)) / (((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))))));
                            var_25 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) + (((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))))));
                            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_41 [i_4] [i_12] [i_4] [i_14] [i_14]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) (unsigned short)63488)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) >= (((/* implicit */int) arr_8 [(_Bool)1] [i_14] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) var_6))));
                            var_27 = ((/* implicit */long long int) arr_2 [i_14] [i_12] [i_4]);
                        }
                    } 
                } 
            } 
            arr_45 [i_4] = ((/* implicit */unsigned short) arr_15 [i_4] [i_4] [i_4] [10U] [i_4] [i_4]);
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            arr_50 [(unsigned short)20] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28672)) || (((/* implicit */_Bool) (unsigned short)0))))) : ((-(((/* implicit */int) arr_49 [i_4] [i_4]))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_4] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)));
        }
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_4] [i_17] [i_18] [i_19]), (((/* implicit */unsigned short) (unsigned char)109))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_8 [i_4] [18LL] [i_18] [i_4]))));
                        arr_59 [i_4] [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3491030975U), (((/* implicit */unsigned int) (unsigned short)54989))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32750))) * (-30LL))))));
                    }
                } 
            } 
        } 
        var_30 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65524))))));
    }
    var_31 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_6)))))))));
}
