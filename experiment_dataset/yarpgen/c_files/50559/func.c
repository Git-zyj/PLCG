/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50559
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned short)17] [(unsigned short)13] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((unsigned short) -548252529))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (+(var_2));
                            }
                        } 
                    } 
                    arr_16 [i_0] [14U] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (+(min((9ULL), (((/* implicit */unsigned long long int) var_5)))))));
                    arr_17 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_1] [i_1] [(signed char)1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)(-32767 - 1)))));
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_0] = ((/* implicit */unsigned int) ((18446744073709551607ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7))))) == (max((((/* implicit */unsigned long long int) -6300485832865036602LL)), (9ULL)))))))));
                            arr_25 [i_0] [i_6] [13LL] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_10) <= (var_10)))) ^ (((/* implicit */int) ((unsigned short) 18446744073709551584ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) >= (18446744073709551609ULL)))) >= (((/* implicit */int) (_Bool)1)))))) : ((+(((unsigned long long int) var_9))))));
                            arr_26 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_0)))))))));
                            arr_27 [(signed char)4] [i_0] [13] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 13480379984978911161ULL)))))) : (((/* implicit */int) var_6))));
                            arr_28 [i_0] [(short)14] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) ((short) (unsigned short)65535))))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) : (4067961598U)))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)353)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (var_5)))))));
                            arr_33 [i_5] [i_0] [i_1] = ((/* implicit */unsigned short) 18446744073709551601ULL);
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 4; i_8 < 15; i_8 += 4) 
                        {
                            arr_37 [i_0] [i_1] [i_1] [i_2] [i_0] [i_5] [i_8] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) var_6)));
                            arr_38 [i_0] [i_5 + 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((signed char) var_14)));
                        }
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            arr_43 [i_0] [i_0] [i_0] [i_9 - 2] [(unsigned short)0] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_10)) <= (((((/* implicit */_Bool) (+(16506889823960430633ULL)))) ? (((/* implicit */long long int) ((int) 25ULL))) : (((long long int) var_4))))));
                            arr_44 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -8525874620297380984LL)) : (var_13))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -8525874620297380984LL))))))), (((unsigned char) var_6))));
                        }
                        for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
                        {
                            arr_47 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(var_14))), (((/* implicit */unsigned int) (-(var_12))))))) > (1585847501791641919ULL)));
                            arr_48 [i_0] [i_0] = ((int) (+((~(((/* implicit */int) (unsigned char)36))))));
                            arr_49 [i_11] [i_9] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (((((/* implicit */_Bool) 2301339409586323456LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))))))));
                            arr_50 [i_0] [i_1] [i_1] [i_11] [(unsigned char)6] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_14))) / (max((0), (((/* implicit */int) (unsigned char)56))))))) ^ ((~(((16506889823960430633ULL) << (((((/* implicit */int) var_6)) - (46142)))))))));
                            arr_51 [i_11] [i_1] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)159))))));
                        }
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            arr_55 [i_0] [i_9] [i_9] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)235)))) != (((/* implicit */int) ((unsigned char) 0ULL))))))));
                            arr_56 [i_0] [i_0] [i_2] [i_9 - 2] = ((/* implicit */unsigned int) 18446744073709551607ULL);
                            arr_57 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) (unsigned char)255));
                            arr_58 [i_2] = ((/* implicit */int) var_2);
                        }
                        arr_59 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned char) 11ULL))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)2470)) : (((/* implicit */int) var_1))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            {
                arr_67 [i_14] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) (~(var_2))))));
                arr_68 [3U] [3U] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18ULL)))) <= ((+(18446744073709551597ULL)))))) : (((int) (short)12288))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((int) ((int) (~(((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (long long int i_15 = 1; i_15 < 11; i_15 += 4) 
    {
        arr_72 [i_15] = ((((((/* implicit */_Bool) (unsigned short)8385)) ? (((/* implicit */int) ((unsigned char) (unsigned char)25))) : (((/* implicit */int) (short)0)))) <= (-811011516));
        arr_73 [i_15] [i_15] = ((/* implicit */unsigned long long int) (~(max((-1070333167238701934LL), (((/* implicit */long long int) var_6))))));
        arr_74 [i_15] [i_15] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) 6479353651065522047LL))))));
        arr_75 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), ((unsigned char)198))))))) ? ((+((-(((/* implicit */int) (unsigned char)133)))))) : (((int) 8))));
        arr_76 [i_15] = ((/* implicit */unsigned char) (!(((min((var_2), (((/* implicit */unsigned long long int) var_3)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-20454))))))));
    }
}
