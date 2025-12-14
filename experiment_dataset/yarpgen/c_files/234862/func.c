/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234862
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
    var_10 = ((/* implicit */signed char) var_5);
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((+(1763277428U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32767)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(0ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 32505856U)) + (arr_0 [i_0]))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) 32505835U)) : (0ULL)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_3 - 1] [i_4] = (-(((/* implicit */int) (signed char)3)));
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_7 [i_3 + 1]) <= (((/* implicit */unsigned long long int) 289502435U))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4262461460U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]))))) / ((~(arr_6 [i_4] [i_3 - 1] [i_0]))))))))));
                            var_14 = (-(((unsigned int) 4262461475U)));
                            var_15 = ((/* implicit */signed char) arr_12 [i_0] [i_3 + 1] [i_0]);
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) ((4262461475U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440)))));
                var_16 = ((/* implicit */unsigned int) (~(663015262)));
                arr_17 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2]))));
            }
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
            {
                var_17 &= ((/* implicit */unsigned long long int) arr_2 [i_5]);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_5] [i_5]))));
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~((-(((/* implicit */int) ((signed char) 32505835U))))))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) var_9));
                arr_23 [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) ((_Bool) 4262461460U));
                var_20 = ((/* implicit */short) ((signed char) (signed char)-13));
            }
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_21 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (32505835U));
                var_22 -= ((/* implicit */_Bool) (+(18014398508957696LL)));
            }
            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((/* implicit */int) (signed char)63))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned long long int) max((-1479754730), (((/* implicit */int) (short)8064))));
        arr_27 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8065)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8064))))) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) var_7))));
        var_24 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        arr_30 [i_8 + 1] |= ((/* implicit */unsigned char) 14255433079582951889ULL);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-46)) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48529)) && (((/* implicit */_Bool) (signed char)67)))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) (_Bool)1);
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_8 + 1])))))));
                    arr_35 [i_10] [i_8 - 1] [i_10] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_33 [i_9] [i_8 + 1])))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 4; i_11 < 16; i_11 += 4) 
    {
        var_28 &= max((((/* implicit */unsigned long long int) arr_2 [i_11 - 4])), (min((18243162860122449735ULL), (6468372552159555756ULL))));
        arr_38 [i_11 - 1] [i_11 - 1] = ((/* implicit */signed char) var_7);
    }
    for (int i_12 = 1; i_12 < 13; i_12 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_12 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4262461460U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_12 + 4] [i_12 + 3] [i_12 + 3] [i_12 + 1]))) : (4262461484U)))))))));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)60682)) / (((/* implicit */int) (short)8073)))))))));
        var_31 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_12 + 3] [i_12 + 1] [i_12 + 1] [i_12 + 3] [i_12 + 3]))));
    }
    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
}
