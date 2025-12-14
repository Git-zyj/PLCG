/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213204
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (+((+(4216729604U)))))) > (max((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) 78237692U))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((4216729604U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4216729604U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60276))) % (var_6)))));
                            arr_13 [i_4] [i_3] [i_0] [(unsigned short)14] [i_0] |= ((/* implicit */unsigned char) 4216729605U);
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_4])));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_16 = var_11;
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [4ULL] [i_3]))));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_19 [i_6] [i_6] = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)29881)) != (((/* implicit */int) (unsigned short)57520)))))))));
                            var_17 &= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 117440512)) >= (923089124U))))) - ((+(arr_3 [i_0] [(unsigned short)3] [i_6]))));
                            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (3687489396448141631LL))));
                        }
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26931))) <= (arr_3 [i_0] [i_0] [i_0]))) ? (((unsigned long long int) -1296676824)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54735)) ? (-4290827267742290326LL) : (((/* implicit */long long int) -918553842)))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((var_13), (var_12)))), (((((((/* implicit */_Bool) 3754712855U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51699))) : (335530954U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            var_21 *= ((/* implicit */unsigned int) (unsigned short)36089);
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (-(-918553842))));
                            var_22 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_21 [i_7] [i_3] [i_2] [i_1] [i_0])) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_7])), (1844174310))))));
                            var_23 ^= ((/* implicit */unsigned char) 12402285294473560434ULL);
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_1] [i_2] [i_8]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)22989))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42002)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60276)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38128)))))))));
                        var_25 = max((min((((/* implicit */unsigned int) (unsigned short)59939)), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_15 [i_2] [i_2]))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)161))))))));
                        var_26 = (-(min((arr_3 [i_8] [i_1] [i_0]), (((/* implicit */long long int) (unsigned short)5264)))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_9] |= ((/* implicit */_Bool) min((((((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])) <= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_9] [i_0])), (arr_20 [i_9] [i_9] [i_9] [i_2] [i_0] [i_0] [i_0])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) + (arr_15 [i_1] [i_1]))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) != (4216729634U)))), (((((/* implicit */_Bool) (unsigned short)40535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_2] [i_0] [i_9] [i_0])))))))));
                        arr_29 [i_0] [i_1] [(unsigned short)8] [i_2] [i_9] [i_1] = max((((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) 1399218441325185838ULL))))))), (((int) -969551925)));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_24 [i_1] [i_10 + 1] [i_10 + 3] [i_11] [i_11] [i_11]), ((unsigned short)5262)))), (max((((/* implicit */unsigned long long int) ((long long int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_0]))), (max((14848756194235408491ULL), (((/* implicit */unsigned long long int) var_1))))))));
                            arr_36 [i_10] [i_10 - 1] [i_10] = ((/* implicit */_Bool) max((min((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_35 [i_0] [i_10] [i_10 + 3] [9LL])))), (((((/* implicit */int) (signed char)36)) * (((/* implicit */int) var_13)))))), (((/* implicit */int) (unsigned short)62582))));
                            /* LoopSeq 3 */
                            for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                            {
                                arr_40 [i_1] [i_10] [i_10] [i_11] [i_12] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)139)) ? (arr_39 [i_10] [i_10 + 4] [i_10 + 3] [i_10 + 3] [i_10]) : (arr_39 [i_10] [i_10] [5] [i_10 - 1] [i_10]))) != (((arr_39 [i_10] [i_0] [i_0] [3U] [i_10]) << (((arr_39 [i_10] [i_0] [i_0] [i_0] [i_10]) - (7747896688221446997LL)))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)139)) ? (arr_39 [i_10] [i_10 + 4] [i_10 + 3] [i_10 + 3] [i_10]) : (arr_39 [i_10] [i_10] [5] [i_10 - 1] [i_10]))) != (((((arr_39 [i_10] [i_0] [i_0] [3U] [i_10]) + (9223372036854775807LL))) << (((((((arr_39 [i_10] [i_0] [i_0] [i_0] [i_10]) + (7747896688221446997LL))) + (1318833963331227775LL))) - (13LL))))))));
                                var_28 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_10 [i_10] [i_10 + 4] [i_11] [i_12] [i_10])))) - ((+(max((((/* implicit */int) (unsigned char)94)), (1844174310)))))));
                                var_29 = ((/* implicit */unsigned char) (unsigned short)43336);
                            }
                            for (unsigned short i_13 = 2; i_13 < 14; i_13 += 3) 
                            {
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) -782488789)) & (((/* implicit */unsigned int) max((1233464712), (((/* implicit */int) (unsigned char)58)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_10] [i_11])), (12991284435558151603ULL))))));
                                arr_43 [i_10] [(signed char)15] [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned short)60289), ((unsigned short)65519))))))), (var_2)));
                                var_31 = arr_17 [i_0] [i_1] [i_10 + 1] [i_10] [i_13];
                            }
                            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                            {
                                arr_47 [i_0] [i_1] [i_1] [i_11] [i_14] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((-1089316374) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0])) - (60827)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)32445)), (var_4)))), (4472596893648251012LL))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)36763)))) || (((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1))))))))));
                                arr_48 [i_14] [i_0] [i_0] [i_10] [i_10] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_10 + 1] [i_11] [i_10] [i_11] [i_14] [i_1])) & (((/* implicit */int) arr_12 [i_10 + 1] [15LL] [i_10] [i_14] [i_11] [i_10]))))) ? (((((/* implicit */int) arr_12 [i_10 + 1] [i_1] [i_10] [i_11] [i_14] [i_14])) % (((/* implicit */int) (unsigned short)33258)))) : (((/* implicit */int) ((unsigned char) (unsigned short)19699))));
                                var_32 -= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_6 [i_0] [i_1] [i_10] [i_10 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_33 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_10 + 3])) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14336)))))))) != (arr_38 [i_0] [i_1])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((((min((min((var_0), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_13)))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)12))))))) - (225))));
    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)12442)), (max((4146209031659859891LL), (-4146209031659859876LL))))))));
}
