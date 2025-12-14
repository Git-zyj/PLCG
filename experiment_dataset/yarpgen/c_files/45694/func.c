/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45694
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((arr_0 [i_0]) | (((max((((/* implicit */long long int) (unsigned short)9594)), (arr_0 [i_0]))) | (((/* implicit */long long int) ((unsigned int) (unsigned short)55942)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) -1658886628);
            var_12 = ((/* implicit */unsigned int) (short)27790);
            var_13 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_1 + 2] [i_1] [i_1 - 2]), (arr_2 [i_1 - 2] [i_1] [i_1])))) >> (((((((((/* implicit */_Bool) (short)27790)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)49840)))) | (((/* implicit */int) (unsigned short)49840)))) - (63457)))));
            var_14 = ((/* implicit */short) -4426115596986764915LL);
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3996216729U)), (-7460551921029918631LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) ((arr_9 [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [(unsigned short)5] [i_2])))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)3015)));
                    }
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_18 = max((((/* implicit */short) (_Bool)1)), ((short)-7615));
                    var_19 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((-1976405844) + (495982944)))) : (((((/* implicit */_Bool) -524170994)) ? (513664317U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_6])) : (2147483646))) * (((((/* implicit */int) (unsigned char)147)) / (((/* implicit */int) (unsigned short)539)))))), (((/* implicit */int) ((((/* implicit */long long int) -524170978)) != (((long long int) 0U))))))))));
                }
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) -495982951)) < (arr_9 [i_2]))))));
                arr_21 [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25072))) : (var_3)))), (((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_2] [11U])) ? (arr_8 [i_2] [i_2] [i_2]) : (arr_0 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)27790), (((/* implicit */short) (!(arr_1 [4U])))))))) : (arr_9 [i_2])));
            }
            var_22 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]);
            var_23 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned char)82)), (((((/* implicit */_Bool) arr_18 [i_2])) ? (4294967295U) : (arr_16 [i_2] [(short)3] [(short)3] [i_0] [(short)3] [(short)3]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)123)))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [(short)9]);
            var_25 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_7] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) - (((/* implicit */int) arr_11 [i_0] [i_7] [i_0] [i_0]))))) : (min((4294967274U), (((/* implicit */unsigned int) 2147483647)))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54366))) / (-2635927949883436613LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3877636650U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_7] [i_7] [i_7]))))))) : (min((arr_5 [i_7] [i_0] [i_0]), (((/* implicit */unsigned int) (short)16383))))));
        }
        var_27 = ((/* implicit */unsigned short) ((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (max((2635927949883436633LL), (((/* implicit */long long int) min((arr_16 [i_0] [i_0] [i_0] [7ULL] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)56783))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_5) == (((((/* implicit */_Bool) (short)25071)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)56783)))))))));
    var_29 = ((((((/* implicit */int) (_Bool)1)) < (495743288))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((min((((/* implicit */unsigned int) (unsigned short)16127)), (var_8))), (min((var_8), (((/* implicit */unsigned int) (unsigned short)1132)))))));
}
