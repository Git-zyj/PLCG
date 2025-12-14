/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193295
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((min((var_7), (var_7))) && (((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_1))));
                            var_16 = ((/* implicit */unsigned int) (signed char)22);
                        }
                    } 
                } 
                var_17 *= ((/* implicit */unsigned char) ((var_2) && ((_Bool)0)));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) -1404711755);
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) : ((+(3742423714U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_9);
                            var_21 = ((/* implicit */long long int) var_6);
                            arr_28 [i_9] [i_9] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_22 [i_6] [10ULL]))))), (arr_22 [i_6 - 3] [i_6])))) ? (((((/* implicit */int) arr_21 [i_6] [i_6 - 3])) << (((/* implicit */int) arr_21 [i_8] [i_6 - 2])))) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_34 [i_6 - 3] [i_7] [i_10] [i_6]))))) << (((((/* implicit */int) arr_23 [i_10])) - (125)))));
                            arr_35 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((var_0) >> (((var_5) - (5262013142023120643ULL)))));
                            arr_36 [i_6] [(short)2] [(short)2] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (min((var_0), (((/* implicit */unsigned long long int) arr_34 [i_6] [i_10] [i_6 - 1] [i_6])))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_29 [i_11])) : ((-9223372036854775807LL - 1LL)))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 9; i_14 += 3) 
                        {
                            {
                                var_23 = min((((/* implicit */unsigned long long int) ((arr_38 [i_6] [i_6] [i_12]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6] [i_14 + 2])) || (((/* implicit */_Bool) arr_29 [i_7]))))))))), (arr_38 [i_6] [i_6] [i_6]));
                                arr_44 [(signed char)9] [i_6] = ((/* implicit */unsigned short) (signed char)-103);
                                arr_45 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((1056095814U) - (1056095797U)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) 1722762113U);
                            var_25 ^= ((/* implicit */_Bool) arr_37 [7] [i_15]);
                            arr_51 [i_6] [4] [i_7] [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) ((_Bool) (unsigned short)35417)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((max((16099317821420447535ULL), (arr_38 [i_6 - 1] [i_7] [i_6]))) & (((arr_38 [i_6 - 1] [i_7] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6 - 1] [9] [i_7] [i_6])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_17 = 2; i_17 < 18; i_17 += 3) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
            {
                {
                    arr_62 [i_18] [i_17] = ((/* implicit */long long int) (((+(((/* implicit */int) ((unsigned short) (unsigned short)16384))))) * (((/* implicit */int) var_3))));
                    arr_63 [i_17] [i_18] [i_17] = ((/* implicit */int) arr_57 [i_17] [i_17] [i_19]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 3) 
    {
        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 3; i_23 < 16; i_23 += 3) 
                    {
                        {
                            var_27 *= ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_6))));
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_73 [i_23 + 1] [i_20] [i_21] [i_20] [i_20]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) 1472135253521083727LL))));
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 19; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 19; i_25 += 1) 
                    {
                        {
                            var_30 &= 12076508078303361808ULL;
                            var_31 *= ((/* implicit */short) arr_78 [i_25] [(unsigned short)10]);
                            arr_80 [i_20] [i_20] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_55 [i_24] [i_24])) * (var_11)))), (((unsigned int) (unsigned char)141))));
                        }
                    } 
                } 
            }
        } 
    } 
}
