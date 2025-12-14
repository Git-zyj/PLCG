/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216457
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)65), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (144044819331678208ULL) : (((/* implicit */unsigned long long int) 4294967290U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18383))))))) : (max((max((var_9), (((/* implicit */unsigned int) -1631717548)))), (((/* implicit */unsigned int) max((-1), (((/* implicit */int) (signed char)88)))))))));
                            arr_12 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) max((max((var_7), (-566550415))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)115)) >> (((134184960) - (134184949)))))) != ((-9223372036854775807LL - 1LL)))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)58))))) ? (max((((/* implicit */unsigned long long int) 2147483647U)), (798341448697539618ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_0))))))) ? (((((/* implicit */_Bool) (signed char)-114)) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) -1817222634)))) : (((((/* implicit */_Bool) ((var_5) & (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_7)))) : (((2147483649U) | (var_9)))))));
                                arr_17 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) / (var_1)))) ? (min((((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)18886)) != (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)14)))))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (2147483625U))), (((/* implicit */unsigned int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)120)) : (-1728537164))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))))))));
                                var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) : ((~(var_7)))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) var_7);
                            var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) var_3)))) & ((~(((/* implicit */int) (short)2407))))));
                        }
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1728537164) : (((/* implicit */int) (unsigned char)179))))) ? (((((/* implicit */_Bool) (short)-2408)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 5358540439547049759ULL)) ? (((/* implicit */int) (short)2407)) : (((/* implicit */int) (unsigned short)60970))))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_5)) : (var_12)))));
                        var_19 ^= var_0;
                        arr_30 [i_0] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((1725889817) - (((/* implicit */int) (signed char)-114)))) == (min((var_5), (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_31 [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((2147483643U), (((/* implicit */unsigned int) var_8))))) && (((/* implicit */_Bool) min(((short)-12), (((/* implicit */short) var_2)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 24; i_9 += 3) 
    {
        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) max(((short)-32645), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)169)))))))), ((unsigned short)65535)));
                var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)4550)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_10)))) >= (((/* implicit */int) ((short) 4294967294U))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_12) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (signed char i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            {
                                arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-2414)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)4)))))));
                                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-71))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20002)) ? (((/* implicit */unsigned long long int) 11U)) : (var_1)))) ? (142989288169013248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_6)) & (663930246))) == ((+(((/* implicit */int) (signed char)-98))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_13)), (-9223372036854775790LL))) >= (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_4))))))))));
                        var_24 = ((/* implicit */int) ((var_5) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_3))))) : ((~(var_7)))))));
                    }
                }
                for (int i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
                {
                    arr_48 [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) (signed char)-4)))))))) + (((((/* implicit */_Bool) (~(-709365007)))) ? (((/* implicit */unsigned long long int) 2147483643U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) % (2724231531220193857ULL))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min(((+(var_0))), (((var_5) % (((/* implicit */int) var_13)))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (min((((/* implicit */unsigned long long int) var_12)), (5820766174329460006ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
    {
        arr_53 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)2143)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (664105901)))))) ? (((max((((/* implicit */int) (unsigned char)167)), (var_7))) | (((/* implicit */int) ((short) var_10))))) : (((((/* implicit */int) ((var_0) > (((/* implicit */int) var_4))))) >> (((unsigned long long int) (_Bool)1))))));
        var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_6)) | (((((/* implicit */int) var_2)) * (((/* implicit */int) (short)0))))))));
    }
}
