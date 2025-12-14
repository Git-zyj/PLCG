/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240764
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
    var_16 += ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned int) -516627905)) : (((((/* implicit */_Bool) (short)512)) ? (1183307193U) : (3111660103U))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_14 [12] [i_1] [(unsigned short)18] [i_1] [12] [i_2] [i_1] = ((/* implicit */unsigned int) var_5);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (var_14)));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_0] [i_0]))) ? (var_7) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1167491863U)) ? (975392461) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) 1648634317)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) arr_9 [i_0])))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_0]) / (((var_3) / (((/* implicit */int) var_5))))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53575))) / (1167491878U))))) : (var_14)));
            var_23 += ((/* implicit */_Bool) var_11);
        }
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) (unsigned short)9126)) : (((/* implicit */int) (short)21832)))))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0])))))));
            arr_19 [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_6])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [i_6] [i_6] [i_0])), (var_1)))) : (((arr_9 [i_6]) ? (((/* implicit */unsigned long long int) arr_4 [i_6] [i_0])) : (arr_18 [i_6] [i_6] [i_0])))));
            arr_20 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) var_15);
        }
        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 24; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 23; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) var_8);
                            var_26 += ((/* implicit */_Bool) var_10);
                            arr_30 [(short)17] [(short)17] [(short)17] [i_9] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) > (((/* implicit */int) max((arr_23 [12ULL] [i_7 + 2] [i_8] [i_9]), (((/* implicit */short) var_2)))))));
                        }
                    } 
                } 
                arr_31 [i_8 + 1] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))));
            }
            var_27 = max((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [(unsigned short)13] [i_0] [(unsigned short)13] [i_0] [i_0]))) : (var_7)))) || (((/* implicit */_Bool) 1167491863U))))), (((((/* implicit */_Bool) arr_7 [i_7 + 3] [i_7 + 2] [i_7] [i_7 + 2])) ? ((-(((/* implicit */int) arr_3 [i_0] [i_7])))) : (((/* implicit */int) arr_16 [i_7] [i_7] [(unsigned short)19])))));
            var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)28756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_12 [i_7] [i_7 - 1] [i_7 + 3] [i_7] [(signed char)22] [(signed char)22]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]) : (((/* implicit */int) arr_3 [(signed char)16] [(signed char)16])))))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_12 [i_0] [12] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_12 = 2; i_12 < 8; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 7; i_14 += 4) 
                {
                    for (short i_15 = 1; i_15 < 7; i_15 += 3) 
                    {
                        {
                            arr_49 [i_15] [i_12] [i_12] [i_15] [i_15] &= ((/* implicit */unsigned char) ((short) arr_1 [i_14 + 3]));
                            var_29 = ((/* implicit */short) arr_21 [i_14] [i_14]);
                            var_30 = ((/* implicit */signed char) min((arr_4 [i_14 + 3] [i_12 - 1]), ((+(arr_36 [i_14 - 1] [i_12 - 2])))));
                        }
                    } 
                } 
            } 
            arr_50 [i_12] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
            arr_51 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) arr_23 [i_11] [i_12] [i_12] [i_11]);
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -582860460)) ? (((/* implicit */int) (unsigned short)10313)) : (((/* implicit */int) (short)5881)))))))) : (((/* implicit */int) (unsigned char)2))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_12])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_16 = 2; i_16 < 9; i_16 += 4) 
        {
            var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1167491878U)))));
            var_34 |= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_6 [(unsigned char)16] [i_16] [i_16])) + (126))) - (3)))))) ? (max((var_14), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_16] [i_16] [i_11])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) var_4)))))))), (var_7)));
        }
        var_35 = ((/* implicit */unsigned char) (signed char)47);
    }
    for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 3) 
    {
        var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % ((~(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6)));
        var_37 = ((/* implicit */long long int) min((((((((/* implicit */int) arr_29 [(unsigned char)12] [i_17] [i_17] [(short)2] [(unsigned char)12])) - (((/* implicit */int) arr_2 [i_17])))) >> (((/* implicit */int) var_2)))), (((/* implicit */int) arr_26 [i_17] [(signed char)16] [i_17] [i_17] [9U] [9U]))));
    }
    for (unsigned char i_18 = 3; i_18 < 16; i_18 += 1) 
    {
        var_38 = ((/* implicit */int) var_4);
        var_39 = ((/* implicit */signed char) var_12);
    }
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(385260550)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) var_14)))))))) : ((-(((((/* implicit */int) var_0)) % (((/* implicit */int) var_8))))))));
}
