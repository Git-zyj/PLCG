/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2073
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
    var_17 = ((/* implicit */unsigned short) ((long long int) ((((var_12) || (var_13))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))));
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_19 = ((/* implicit */short) (-2147483647 - 1));
                var_20 -= ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [5U]))))))));
            }
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [6LL] [(short)10] [22])) << (((((/* implicit */int) arr_4 [i_0] [i_1])) - (61025))))))));
            var_22 = ((/* implicit */_Bool) arr_3 [i_0]);
            arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (-2964311540323121481LL) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-5271), (((/* implicit */short) (unsigned char)7)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_23 = ((/* implicit */short) ((var_13) ? (var_8) : (((/* implicit */unsigned int) 326087053))));
                var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_4]))))) + (arr_3 [i_0])));
                arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((arr_10 [i_0]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (short)-6010)) : (((/* implicit */int) arr_10 [i_0]))))) : (((long long int) arr_11 [i_4] [i_3]))));
                arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)16070)) : (((/* implicit */int) arr_11 [i_0] [i_3])));
                var_25 = ((/* implicit */unsigned int) var_15);
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)18867))))));
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
                    var_28 = ((/* implicit */signed char) arr_22 [i_0] [i_3] [i_5]);
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        var_29 = ((long long int) ((arr_23 [(unsigned char)3] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))));
                        arr_27 [i_5] = ((/* implicit */int) ((3531813351U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_30 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_19 [i_0] [11U] [i_5] [i_8]) || (((/* implicit */_Bool) arr_3 [22LL])))))));
                        arr_28 [i_0] [i_3] [i_5] [2LL] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_7] [i_7] [i_5] [i_7] [i_5]))));
                        arr_29 [i_5] [(short)14] = (~(((((/* implicit */_Bool) (signed char)-16)) ? (arr_13 [i_8] [21ULL] [i_3] [(unsigned char)18]) : (var_0))));
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        var_31 *= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        arr_32 [i_3] [i_3] [i_3] [14LL] [i_3] [i_5] = ((/* implicit */unsigned int) arr_0 [i_0] [i_9]);
                        arr_33 [i_0] [i_0] [i_5] [i_0] [i_9] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_3] [i_5] [i_0] [i_9])) ? (((/* implicit */int) arr_30 [i_9] [i_7] [i_5] [i_3] [i_0])) : (((/* implicit */int) var_15))))) ? ((-(arr_13 [i_5] [i_3] [i_5] [6LL]))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_4 [i_3] [i_3])))))));
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) 837134877))));
                    }
                    var_33 = ((/* implicit */unsigned int) arr_14 [i_5]);
                }
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_34 = ((/* implicit */short) (-(var_6)));
                    var_35 = ((/* implicit */short) (((+(((/* implicit */int) (short)-1)))) + (((/* implicit */int) arr_8 [i_0] [11] [i_0] [i_0]))));
                    var_36 += ((/* implicit */unsigned short) var_10);
                    arr_37 [i_5] = (~(var_4));
                }
            }
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    arr_45 [(unsigned short)9] [i_11] [(short)14] [i_0] = ((short) arr_26 [i_3] [i_3] [i_11] [i_12] [i_11] [i_11]);
                    var_37 = ((/* implicit */long long int) (!(((arr_43 [i_0] [i_3] [i_11]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
                var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)4))) > ((-(8075909758152085880LL)))));
                arr_46 [3] [i_3] [i_0] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_39 [i_0] [i_3] [i_0]))))));
                var_39 = ((/* implicit */short) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))));
            }
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned char)158))))))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_42 [(short)4] [i_13] [(unsigned char)21] [(signed char)2] [(signed char)21] [(signed char)2])), (1330103170U)))) ? (var_4) : ((+(((/* implicit */int) arr_7 [i_0] [i_13] [4LL] [i_13]))))));
                arr_51 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44525)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)53496))))), (arr_38 [i_0])));
                var_42 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_13] [i_14]))))), (((((/* implicit */_Bool) arr_48 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1223883554U))))))));
                var_43 = ((/* implicit */unsigned int) 1424645150);
                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)63)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)232))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_30 [i_0] [i_13] [i_13] [i_14] [i_14]), (arr_30 [i_0] [22U] [i_0] [i_0] [i_0]))))) : ((~(((((/* implicit */_Bool) arr_25 [16LL] [i_13] [i_13] [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(short)20]))) : (var_5)))))));
            }
            var_45 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_38 [i_0])))));
        }
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        var_46 = ((/* implicit */signed char) min((var_46), (((signed char) arr_13 [i_15] [i_15] [(short)6] [i_15]))));
        arr_55 [i_15] = var_11;
        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    }
    var_48 += ((/* implicit */signed char) var_8);
}
