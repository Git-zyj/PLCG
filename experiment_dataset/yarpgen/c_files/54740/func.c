/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54740
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) 1125899906834432ULL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [(unsigned char)14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_3 [i_1 + 1] [i_0]))))));
                                arr_12 [i_4] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_1)))));
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1443347364U))));
                            }
                        } 
                    } 
                    arr_13 [(short)9] [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                    arr_14 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned long long int) 1019671588))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (4294967282U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(-2056367473)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_5]))))) : (13U)))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_30 [14U] [i_6] [(short)15] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_9] [i_9] [i_9])))))))) ? (min((arr_29 [i_6] [i_7] [i_9] [i_8 - 2] [i_7 - 3]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 653405928U)) < (var_9))))) + (((((/* implicit */_Bool) var_6)) ? (653405928U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) arr_26 [i_5] [(unsigned short)2] [i_7] [i_8 + 2] [i_9])))))));
                        }
                        for (long long int i_10 = 2; i_10 < 19; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_26 [(unsigned short)12] [i_6] [(unsigned short)12] [i_6] [(short)7])) ? (((/* implicit */int) arr_20 [i_8] [i_10 - 2])) : (-1697068163))))), (((((unsigned long long int) var_15)) % (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8] [i_10] [i_5])))))))))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 653405913U))));
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)32)))), ((-(((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_31 [i_5] [i_6] [(_Bool)1] [i_7] [i_7 + 3] [i_6] [i_11])) ? (((/* implicit */int) (short)-22650)) : (((/* implicit */int) (unsigned short)33605)))) + (2147483647))) >> (((arr_22 [i_7 + 2] [i_7 - 3] [i_7 + 3]) - (3466704512U)))))) : (((unsigned long long int) (short)14547))));
                            arr_36 [i_11] [i_6] [i_6] [(unsigned short)18] = (!(((/* implicit */_Bool) ((((2147483647) <= (1196911597))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((+(356334119821320204LL)))))));
                            var_22 = ((/* implicit */unsigned short) arr_28 [i_7] [(short)18]);
                            arr_37 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((7862809384288991707LL) / (2923676294386423361LL)))))));
                        }
                        arr_38 [i_5] [i_5] [i_8] [i_8 - 2] &= ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_11))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_7))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) max((((unsigned int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)41127))))), (((((/* implicit */_Bool) ((int) var_6))) ? (max((((/* implicit */unsigned int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_15 [12ULL])))))))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (short i_13 = 2; i_13 < 18; i_13 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)109)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) min((arr_26 [i_13 + 2] [i_12] [i_12] [i_5] [i_5]), (var_14))))));
                    arr_43 [i_5] [i_13] [i_13] [i_12] = ((/* implicit */short) (-((+(((/* implicit */int) min(((short)25636), (((/* implicit */short) (unsigned char)127)))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((unsigned long long int) arr_17 [i_5] [i_5])) <= (((/* implicit */unsigned long long int) ((((_Bool) 4294967283U)) ? (((/* implicit */int) max((var_1), (var_1)))) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (short)13054)) : (((/* implicit */int) arr_15 [i_5])))))))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))))) ? (10370118254490207578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
}
