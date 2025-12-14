/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32036
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (max((2147483647), (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) 4148591198818410703ULL);
        var_14 = ((/* implicit */unsigned char) (+(((long long int) arr_0 [i_0] [i_0]))));
        var_15 = (-(-1753936307));
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (4148591198818410710ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) arr_4 [i_1]))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) arr_4 [i_1]))))) * (max((-1493489187828967224LL), (((/* implicit */long long int) (unsigned char)0)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 14488191221890137198ULL)) ? (4148591198818410685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))))) >> (((15851219994936763907ULL) - (15851219994936763884ULL)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_6 [i_3] [i_4])) & ((~(arr_1 [i_2] [i_3 + 1]))))) * (max((((((/* implicit */_Bool) (unsigned char)0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2]))))));
                var_19 = ((/* implicit */int) ((min((((arr_6 [i_4] [i_3]) | (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((var_9) <= (((/* implicit */int) arr_13 [i_3] [i_2]))))))) % (((long long int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    arr_19 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1985207722U))))) : (((/* implicit */int) var_10))));
                    arr_20 [i_4] [i_3] = ((signed char) arr_12 [i_3 - 2] [i_3] [i_3 - 2]);
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    arr_23 [i_2] [i_4] [i_6] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2797)) ? (((/* implicit */int) arr_0 [i_2] [i_3 - 2])) : (((/* implicit */int) arr_0 [i_2] [i_3 - 2]))))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (7912245094426709996ULL)))));
                    var_20 = ((/* implicit */long long int) min(((((_Bool)1) ? (arr_1 [i_2] [i_3 - 2]) : (arr_1 [i_4] [i_3 - 2]))), (max((((/* implicit */unsigned long long int) 9223372036852678656LL)), (arr_1 [i_2] [i_3 - 2])))));
                    arr_24 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */int) (signed char)96))));
                }
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 4148591198818410685ULL))));
                arr_27 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 176839648)) : (15851219994936763889ULL))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_7]))) : (arr_1 [i_2] [i_3])))));
            }
            arr_28 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_32 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])))) ? (((/* implicit */unsigned long long int) max((1656008986823722604LL), (-6848477466224043872LL)))) : ((~(var_3)))));
            var_22 = ((/* implicit */unsigned long long int) var_4);
            var_23 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_17 [i_2] [i_8] [i_2] [i_8])), (((/* implicit */unsigned long long int) ((arr_17 [i_2] [i_8] [i_2] [i_2]) || (((/* implicit */_Bool) (unsigned char)255)))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) -935701735)) < (4294967271U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_31 [i_2] [i_2])))) : (15851219994936763907ULL)));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (-2113124861)))) : (((((/* implicit */unsigned long long int) 1656008986823722615LL)) ^ (2595524078772787702ULL))))))));
                        arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_26 [i_11] [i_2] [i_2]))));
                        arr_44 [i_10] [i_9] [i_9] [i_9] = ((/* implicit */int) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (arr_1 [i_2] [i_9])));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_9] [i_2] [i_12]))));
                            arr_49 [i_2] [i_9] [i_9] [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)211)) > (((/* implicit */int) arr_47 [i_2] [i_2] [i_10] [i_10] [i_11] [i_10] [i_2]))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 11970520U))));
                            arr_50 [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) < (((((/* implicit */_Bool) -115701194)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_37 [i_2] [i_9] [i_10] [i_11])))));
                        }
                    }
                } 
            } 
            arr_51 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [4LL] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)4] [i_2]))) : (((long long int) arr_9 [i_9]))));
        }
    }
}
