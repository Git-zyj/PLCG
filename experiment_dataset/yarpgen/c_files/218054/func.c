/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218054
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -484344919)), (798870858U)))) ? (min((-484344910), (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)11132)))))) % ((+(var_3))))) : (((((var_2) >= (((/* implicit */long long int) var_3)))) ? (var_3) : (((((/* implicit */_Bool) -484344919)) ? (var_7) : (((/* implicit */unsigned int) var_11)))))))))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))) ? (var_11) : (((/* implicit */int) ((484344909) >= (((/* implicit */int) (signed char)126)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)255)));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)(-32767 - 1)))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -484344915)))))) != (((((/* implicit */_Bool) max((484344922), (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)134)))))))));
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                arr_8 [(unsigned short)12] [i_1] [i_0] [(unsigned short)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) var_9))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */signed char) var_12);
                            arr_14 [i_0] [2LL] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) ((unsigned int) (short)-3582));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 686482533U))));
                            var_23 = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (8051245615997020529ULL)))) && (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)54171)) * (((/* implicit */int) (short)30976)))))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = (-(arr_3 [i_0]));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967278U)) ? (4660349898642115879LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) & (max((((/* implicit */unsigned long long int) arr_11 [i_1])), (4666364359781144513ULL))))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 459607391)) ? (((11976241898545465487ULL) >> ((((+(459607379))) - (459607370))))) : (max(((~(6973529592669469995ULL))), (((/* implicit */unsigned long long int) 0LL))))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 5894028357368304247LL))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (signed char)-126))));
                var_28 -= ((/* implicit */short) ((_Bool) var_6));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_6] = arr_16 [i_0] [i_1] [i_6];
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)255)) ? (484344911) : (-459607373)));
            }
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
        }
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            arr_27 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (6973529592669469995ULL)));
            arr_28 [i_0] = ((var_9) == (((/* implicit */int) var_6)));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((signed char) (-(arr_19 [(_Bool)1])))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((_Bool) arr_20 [i_7 + 1] [(signed char)4]))));
            var_32 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_7 - 1] [10U]))));
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((~(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) var_9)) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (1331186660U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))))));
        arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((min((var_2), (((/* implicit */long long int) (signed char)81)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_7) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_0] [i_0] [i_0]) >= (arr_23 [i_0] [i_0] [i_0])))))));
    }
}
