/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3882
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
    var_14 = ((/* implicit */unsigned long long int) 3696189914604240628LL);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 1143677221))) ? (((/* implicit */unsigned int) var_12)) : (var_8)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24908))) ^ (0LL)))) ? (((/* implicit */int) (((-(((/* implicit */int) var_9)))) != (((-2077810056) % (((/* implicit */int) (short)16128))))))) : ((-(max((44425594), (((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) var_5);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]);
                    arr_10 [i_0] = ((/* implicit */int) (~(max(((~(-3696189914604240628LL))), (((/* implicit */long long int) 44425594))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned char)203))));
                                var_18 = ((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_3] [i_4 + 3]);
                                arr_17 [i_1] [i_3] [i_4] = ((/* implicit */short) ((int) (~(((/* implicit */int) (_Bool)1)))));
                                arr_18 [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    arr_19 [3] [i_1] [i_1] = ((long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))))) ? (1277177332) : (((int) (short)-21121))));
                    var_19 ^= ((/* implicit */int) (signed char)54);
                }
            } 
        } 
        var_20 += ((/* implicit */int) ((short) ((((long long int) var_13)) < (((/* implicit */long long int) max((1308744954), (((/* implicit */int) var_4))))))));
        arr_20 [i_0] [i_0] = ((/* implicit */long long int) (-(var_8)));
        arr_21 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */int) (+(3696189914604240626LL)));
            arr_30 [i_5] [i_6] = ((/* implicit */_Bool) ((int) arr_11 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18] [i_6]));
            arr_31 [i_6] = ((/* implicit */unsigned short) ((signed char) var_1));
            arr_32 [i_5] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) max((((/* implicit */long long int) 1873962780)), (-3696189914604240637LL)))))));
            arr_33 [i_5] [i_6] [i_5] = ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [18ULL] [i_6] [i_5] [i_5]))))), (max((((/* implicit */long long int) var_12)), (var_11))))) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65534))))));
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_44 [i_5] [i_5] [i_8] [(short)2] [(short)9] [i_8] = ((int) max((((((/* implicit */_Bool) arr_6 [(signed char)3] [(signed char)3])) ? (6687286118667760032LL) : (var_0))), (((/* implicit */long long int) (short)32765))));
                            var_22 = ((((/* implicit */_Bool) ((unsigned int) 0ULL))) ? (((long long int) 44425594)) : (((/* implicit */long long int) (~(var_12)))));
                            var_23 = ((((/* implicit */int) ((max((-1277177333), (((/* implicit */int) var_4)))) != (((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))))) * (((/* implicit */int) ((short) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_10]))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_29 [i_7] [i_7] [i_5]))));
            arr_45 [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(3351241780U)))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) 943725515U)) : (var_3))) : (7349295039049540977LL)));
        }
        for (int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-14)) || (((/* implicit */_Bool) arr_49 [i_5])))))) : (((((/* implicit */_Bool) arr_49 [i_11])) ? (3405556131195262267ULL) : (((/* implicit */unsigned long long int) arr_49 [i_5]))))));
                        var_26 = max((((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_9))))), (min((var_13), (var_11))));
                        var_27 += ((/* implicit */unsigned short) (~(((arr_39 [i_11]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-29031)))))));
                        arr_53 [i_5] [i_11] [i_12] [i_13] = ((/* implicit */signed char) arr_8 [i_5] [i_11] [i_12] [i_13]);
                        var_28 = ((int) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((signed char) 44425591))) : (((int) var_9))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (unsigned char)169))));
            arr_54 [i_5] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_5] [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1308744954)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2909))) : (-8150598968123759840LL)))) : (((unsigned long long int) ((((/* implicit */int) (short)-29059)) ^ (((/* implicit */int) (signed char)124)))))));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((signed char) var_13));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 1520239249432473438ULL))));
                            arr_63 [i_5] [i_11] [i_14] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */unsigned short) 1807555120U);
                            arr_64 [i_5] [12] [12] [i_15] [12] [i_5] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)43381)), (var_10)))))))) > ((~(min((((/* implicit */unsigned long long int) var_9)), (var_10)))))));
                            arr_65 [i_15] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (signed char)124)), ((~(((/* implicit */int) (short)32762))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    {
                        arr_73 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)47))) < (((((/* implicit */int) var_2)) + (((/* implicit */int) (short)-25373)))))))) != (437035597448217530LL)));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((_Bool) (short)25354)))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (short)32336)) <= (2147483647)))), (((((/* implicit */int) (short)25350)) & (((/* implicit */int) (short)25373)))))))));
        arr_74 [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (arr_51 [i_5] [(_Bool)1] [(_Bool)1] [i_5] [i_5] [(_Bool)1]) : (((/* implicit */int) (short)25346)))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_2))))) ? (-3268470702882814980LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))))));
    }
}
