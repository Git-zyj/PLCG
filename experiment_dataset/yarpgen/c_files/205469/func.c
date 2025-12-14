/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205469
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 265656622U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_0]))) / (265656622U)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3949209655U)) ? (265656622U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14388)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_14 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_0 [i_1 - 4])) ? (var_0) : (arr_6 [i_1 - 3]))));
            var_15 = var_9;
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((min((arr_14 [i_1 - 4] [i_4 + 1] [i_4 - 2] [i_4 - 1]), (((/* implicit */long long int) 2130706432U)))) ^ (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58812))))) * (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_4])) : (arr_6 [i_1 - 2])))))))))));
                var_17 *= ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_4])), (min((((/* implicit */int) arr_2 [i_1 - 2])), (130816)))));
                var_18 ^= ((/* implicit */_Bool) ((max((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (-1LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)22548)))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                var_19 = min((((((/* implicit */_Bool) max((var_1), (((/* implicit */int) (unsigned short)58805))))) ? ((-(345757641U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 3]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (var_0)))) ? ((-(((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_6 [i_1 - 1])), (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                    var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 1359877282)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_6] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)218)))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (3949209655U))) <= (arr_9 [i_1 - 2] [i_1 - 4]))))));
                    arr_22 [i_1] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) ? (((/* implicit */int) (unsigned char)60)) : (124843207)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20040)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) == (((((/* implicit */long long int) ((/* implicit */int) (short)27071))) ^ (1LL)))))) : ((~(((/* implicit */int) arr_7 [i_1 - 4] [i_1 - 3]))))));
                    var_22 = ((/* implicit */int) max((((265656622U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (signed char)-89))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2199023255552LL)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 345757640U))))))))));
                }
                arr_23 [i_5] [i_3] [i_1] [i_5] = ((/* implicit */unsigned short) (unsigned char)135);
                arr_24 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 345757641U))))) >= ((+(((/* implicit */int) (unsigned short)45895))))))), (((unsigned char) min((4517383112768752393ULL), (((/* implicit */unsigned long long int) 265656618U)))))));
            }
            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_3] [i_1 - 2])) + (((/* implicit */int) arr_11 [i_1 - 4] [i_1 - 1]))))) % (((((/* implicit */_Bool) ((arr_8 [i_1 + 1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */long long int) arr_12 [i_1 - 2] [i_1 - 3] [i_3])), (-1LL))) : (((/* implicit */long long int) (~(3949209655U))))))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (~(max((4029310694U), (((/* implicit */unsigned int) (unsigned char)128))))));
            var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_1] [i_7] [i_1 - 1] [i_1])) ? (13343342361492345366ULL) : (((/* implicit */unsigned long long int) var_10))))));
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
        {
            arr_29 [i_1] [i_8] [i_1] &= ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)30180)))) << (((18302628885633695744ULL) - (18302628885633695736ULL)))));
            var_26 = ((/* implicit */int) min((-8052797721634981680LL), (((/* implicit */long long int) (_Bool)1))));
            var_27 = ((/* implicit */int) arr_27 [i_1 - 2] [i_1]);
        }
        var_28 = ((/* implicit */short) max((((arr_16 [i_1 + 1] [i_1 - 2] [(unsigned short)18] [i_1]) ? (((/* implicit */int) arr_16 [i_1] [i_1 + 1] [(unsigned char)3] [i_1])) : (((/* implicit */int) (short)23177)))), ((~(((/* implicit */int) arr_27 [i_1 - 1] [i_1 + 1]))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                {
                    arr_39 [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_33 [i_11]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) arr_7 [i_11] [i_11])) ? (-1724085088) : (((/* implicit */int) arr_36 [i_9] [i_10] [i_9])))) : (((/* implicit */int) ((((/* implicit */_Bool) 2016809819U)) && (((/* implicit */_Bool) (short)-13120))))))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16777214)) ? (var_13) : (var_13))), (((/* implicit */long long int) 265656622U))))) ? (((((/* implicit */_Bool) max((var_7), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_33 [(unsigned short)8]))))) : ((~(18302628885633695744ULL))))) : (((/* implicit */unsigned long long int) 1995554619U))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)25))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) arr_15 [i_12] [i_12] [i_12] [i_12]);
        var_32 += ((/* implicit */unsigned int) ((min((arr_25 [i_12] [i_12] [i_12]), ((~(-25LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_11)))) >= (((((/* implicit */_Bool) 1995554619U)) ? (((/* implicit */int) arr_16 [4U] [1U] [i_12] [1U])) : (((/* implicit */int) (short)11484))))))))));
        arr_43 [i_12] = ((/* implicit */unsigned short) min(((~(var_12))), (((((/* implicit */_Bool) 2016809819U)) ? (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12])) : (-1758841)))));
        var_33 = ((/* implicit */_Bool) (((~(max((9187343239835811840ULL), (((/* implicit */unsigned long long int) -1002130689)))))) & (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_30 [i_12] [i_12])), (177766927U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (arr_6 [i_12])))))))));
        arr_44 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12] [i_12] [i_12]))) : (9187343239835811850ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_12])) || (((/* implicit */_Bool) arr_30 [i_12] [i_12])))))) : (arr_9 [i_12] [i_12])))) ? ((~(((/* implicit */int) ((4117200379U) < (((/* implicit */unsigned int) -1002130688))))))) : ((-(arr_38 [i_12] [i_12] [i_12] [i_12])))));
    }
    var_34 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))), (((/* implicit */unsigned long long int) max((var_7), (var_2))))));
    var_35 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
