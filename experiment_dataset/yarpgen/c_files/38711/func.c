/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38711
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)16025)) ? (((/* implicit */int) (short)-24440)) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)19138)) ? (((/* implicit */unsigned long long int) 3849184241U)) : (692337664436305751ULL))))), (((((/* implicit */_Bool) min(((unsigned short)46398), ((unsigned short)49511)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2833995762384619435ULL)))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (576827843U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46397)))))))));
                    var_23 *= var_17;
                    var_24 = ((((/* implicit */_Bool) min((((unsigned int) -113778028663354735LL)), (arr_9 [i_1 - 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), ((short)-24440))))) : (max((3849184241U), (((/* implicit */unsigned int) var_19)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */short) ((unsigned char) (+(4194303ULL))));
            var_26 -= arr_1 [i_0];
        }
        for (signed char i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)239)), (max((113778028663354734LL), (-9223372036854775805LL))))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(unsigned char)4] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)8393))))), (arr_10 [i_0] [i_4 + 3])));
            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) 25165824U)) ? (678264297U) : (arr_14 [i_0] [i_4 + 2] [7U]))) ^ (arr_14 [i_4 + 1] [i_4 - 2] [i_4 + 3])));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_20 [i_0] &= ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) (unsigned short)25787)), (var_13))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_24 [i_6] [i_6] = ((/* implicit */int) max((min((((/* implicit */unsigned int) -552654916)), (2423298462U))), (arr_14 [i_0] [i_0] [i_0])));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max(((unsigned short)46397), ((unsigned short)49510)))) : (((((/* implicit */_Bool) 692337664436305751ULL)) ? (((/* implicit */int) (short)-24440)) : (((/* implicit */int) arr_11 [i_0] [i_5] [14U]))))))) ? (-6599668339153019625LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0]))))));
            }
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)170)), (517429850U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-24440), (((/* implicit */short) (unsigned char)63))))))));
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_17 [i_8]))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24440))) : (arr_26 [i_0] [i_5] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) && (((/* implicit */_Bool) arr_17 [i_8])))))))))));
                            var_33 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5082183687908642217LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)16025))))));
                        }
                    } 
                } 
                arr_34 [(unsigned char)18] [(unsigned char)18] [15LL] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-57)) ? (7337616407536523188LL) : (4539628424389459968LL)));
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 5423837533693531306ULL);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_40 [15] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_8);
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)21794)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)110))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_10] [(signed char)8] = ((/* implicit */long long int) arr_30 [i_10]);
                            var_35 -= ((unsigned char) 692337664436305751ULL);
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((unsigned long long int) 7337616407536523188LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_47 [i_13] [i_7] [i_7] [(unsigned char)5] [i_0] &= ((/* implicit */int) (+(2525997730U)));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-26230)) ^ (((((/* implicit */_Bool) (short)10507)) ? (((/* implicit */int) (short)21794)) : ((+(536608768)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_38 = ((/* implicit */short) -67108864);
                var_39 = ((/* implicit */int) 1768969580U);
                arr_53 [i_14] [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) var_11);
                var_40 = ((/* implicit */_Bool) arr_7 [i_0] [i_14] [i_14]);
                var_41 -= ((/* implicit */long long int) (+(((/* implicit */int) ((short) (signed char)99)))));
            }
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)7)) ? (-5082183687908642217LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26539)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            arr_63 [i_0] [i_0] [i_0] [i_14] [i_14] [8LL] [i_18] = min(((~(max((((/* implicit */unsigned int) arr_42 [i_0] [i_0] [13LL] [i_0] [i_0])), (arr_1 [i_0]))))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) var_9)) : (min((((/* implicit */unsigned int) var_3)), (2525997710U))))));
                            var_43 = (short)787;
                            var_44 = ((/* implicit */signed char) var_16);
                        }
                    } 
                } 
            }
            for (int i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_11))))))) ? (3913770440U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21794))))))));
                arr_67 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) 6517959051220691454LL)) ? (14463028101067138383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))), (min((((/* implicit */unsigned long long int) (unsigned char)201)), (16559440815174467203ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) ((9223372036854775806LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (3670016U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (var_2) : ((((!(((/* implicit */_Bool) (unsigned char)225)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_11)) >= (2525997710U))))) : (arr_48 [i_0] [i_19]))))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [(unsigned char)16] [i_0]);
                            arr_72 [i_14] [i_14] [i_14] [3LL] [i_14] = ((/* implicit */int) arr_49 [i_14]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    {
                        arr_78 [i_14] [i_14] [20LL] [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_62 [i_0] [i_14] [i_14] [i_22] [i_23])) : (((/* implicit */int) var_14))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0] [i_0] [i_0]))) ^ (2525997716U))) : (((/* implicit */unsigned int) ((int) arr_54 [i_0] [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (int i_24 = 0; i_24 < 24; i_24 += 3) 
                        {
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_13))) ? (0ULL) : (min((((/* implicit */unsigned long long int) ((long long int) (signed char)15))), (((((/* implicit */unsigned long long int) arr_74 [i_14] [(unsigned char)15] [i_23])) ^ (13103141633233329961ULL)))))));
                            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)896))) : (8070450532247928832LL)));
                        }
                        for (unsigned char i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            var_50 ^= ((/* implicit */int) arr_8 [i_0] [i_0]);
                            arr_84 [i_14] [i_14] [9] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (short)-5819)))))));
                            var_51 = ((/* implicit */unsigned char) var_13);
                        }
                        var_52 = ((/* implicit */long long int) min((876058861U), (((/* implicit */unsigned int) -1779664220))));
                    }
                } 
            } 
            arr_85 [i_14] = ((/* implicit */unsigned int) ((short) (short)-5819));
        }
    }
    var_53 *= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)5818)) && (((/* implicit */_Bool) min((0LL), (-672770702855221451LL)))))));
    var_54 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)90));
}
