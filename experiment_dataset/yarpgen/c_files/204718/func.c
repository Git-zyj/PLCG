/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204718
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (var_12))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_3 [0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_17 *= ((/* implicit */unsigned int) ((short) ((unsigned int) arr_1 [i_0] [i_0 + 1])));
        var_18 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) != (arr_2 [5]))))) : (var_10))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_1] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2022760827))))) / (max((((/* implicit */int) var_12)), (arr_8 [i_1] [i_2])))))) % (14122233127023387508ULL)));
            arr_10 [12] [16LL] = ((/* implicit */unsigned int) ((6939020146872133116ULL) <= (((/* implicit */unsigned long long int) 30))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_15)), (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)6144)))))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_1 - 1])))) : (((((/* implicit */int) arr_5 [i_1 + 1])) % (((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 4294967275U)) ? (9223372036854775799LL) : (((/* implicit */long long int) 964765879)))), (((/* implicit */long long int) arr_12 [i_1 + 2])))) + (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (4294967291U))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) var_8)), (arr_11 [i_4]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) ((9223372036854775799LL) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (arr_17 [(short)9] [14LL] [i_4] [i_5] [i_5])))))))))));
                        arr_19 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */int) -1068376836792633205LL);
                        var_22 = ((/* implicit */short) arr_15 [i_1] [i_1] [i_1 + 3] [i_1 + 3]);
                    }
                } 
            } 
            var_23 ^= ((/* implicit */unsigned long long int) arr_4 [i_1]);
        }
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_25 = ((/* implicit */unsigned int) ((-71233460) - (((/* implicit */int) (_Bool)1))));
        var_26 = ((min((((((/* implicit */_Bool) var_9)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) arr_13 [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 3])))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) == ((~(var_10))))))));
    }
    /* LoopSeq 2 */
    for (int i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (min((1542966756U), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6])))))) : (max((var_3), (((/* implicit */unsigned int) (short)436))))))))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_6 + 2] [15LL] [i_6 + 2] [8LL] [i_6]);
    }
    for (int i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        var_28 = ((/* implicit */_Bool) arr_24 [i_7] [i_7]);
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) > (min((var_7), (((/* implicit */unsigned long long int) var_3))))))), (arr_17 [i_7] [i_7 + 2] [i_7] [i_7] [i_7])));
        var_30 = ((/* implicit */long long int) (+(var_3)));
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_31 &= ((/* implicit */short) max((((/* implicit */long long int) 2022760810)), (9223372036854775807LL)));
            arr_28 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) var_15)))) : (((1056693719) & (((/* implicit */int) (short)-25270))))))) ? (min((((/* implicit */unsigned int) var_5)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) >> (((var_0) - (4235096393U))))))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_35 [9U] [i_9] [i_7] [(short)6] = ((/* implicit */long long int) ((((unsigned int) arr_26 [i_7 - 1] [i_7 - 2])) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23207))))) ? (((/* implicit */int) ((unsigned char) arr_32 [i_10]))) : (min((((/* implicit */int) var_12)), (arr_23 [i_11]))))))));
                        var_32 = ((/* implicit */long long int) min((min((arr_11 [i_7 + 1]), (var_11))), (((arr_11 [i_7 - 1]) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                    }
                } 
            } 
            arr_36 [i_7] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_5 [i_7])), (max(((-(var_2))), (min((((/* implicit */unsigned long long int) 4449104449194444670LL)), (var_7)))))));
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            var_33 = ((/* implicit */short) max((min((var_7), (((/* implicit */unsigned long long int) arr_17 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 2] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7680)) ? (-2896164448141949197LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_4))))) : (((unsigned long long int) arr_23 [i_7 + 2]))))));
        }
    }
}
