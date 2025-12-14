/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230661
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
    var_16 = var_14;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 12877777864655739811ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (7505776447246971613ULL)))))))) : (2061570332U)));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 7505776447246971613ULL)) ? (10940967626462580027ULL) : (((/* implicit */unsigned long long int) -362440160))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_13)))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 963541157U))) ? (1252266039568232389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-665)))));
                        var_21 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) max((var_7), (((/* implicit */short) var_10)))))), ((-(7505776447246971588ULL)))));
                    }
                    for (long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                    {
                        var_22 += ((/* implicit */unsigned short) (+(max((var_3), (((/* implicit */int) var_6))))));
                        var_23 = max((((short) var_2)), (((short) ((unsigned int) 1422724349111821299ULL))));
                        var_24 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1590669430)) < (1252266039568232389ULL)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [14LL] [14LL] [i_2] [i_5 - 1]))) : (((unsigned long long int) 1422724349111821299ULL))))));
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((7505776447246971576ULL), (10940967626462580027ULL)))) ? (((((long long int) 1422724349111821299ULL)) % (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) (-(900685654U)));
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_2] [i_2]))));
                            var_28 = var_15;
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_12))));
                        }
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7387305039449645832ULL)) ? (10940967626462580003ULL) : (15758457207730586870ULL)));
                    }
                    var_31 = ((/* implicit */long long int) ((short) var_13));
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        var_32 = (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 3] [i_0 - 2] [i_0 - 2]))) : (arr_21 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_8 + 2]))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_7)))))) ? (min((7505776447246971599ULL), (((/* implicit */unsigned long long int) 3331426139U)))) : (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) ((signed char) var_3))))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)65535))))))) ? (max(((+(((/* implicit */int) (signed char)121)))), (((var_0) * (((/* implicit */int) var_13)))))) : (max((1429551785), ((+(((/* implicit */int) (signed char)121))))))));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (signed char)121))));
                            var_36 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (short)-32257))))))) ? (17194478034141319226ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(17194478034141319227ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_9 + 2]))))) : (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_9 + 1])) ? (((/* implicit */int) (short)-31100)) : (((/* implicit */int) var_13))))));
                        }
                        for (short i_11 = 3; i_11 < 19; i_11 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_9 [i_9 - 1] [i_9 + 2] [i_9 + 2] [17U]))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (((var_10) ? (((/* implicit */int) arr_7 [i_11 - 1] [i_9] [i_0 - 1])) : (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)6681)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (890090623U))))) : (((unsigned int) var_1))))) : (max((((((/* implicit */_Bool) var_12)) ? (936169165003538813LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) max((arr_21 [5ULL] [i_11] [i_9] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_4)))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 1; i_12 < 19; i_12 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) min((var_5), (var_11)))))), (((/* implicit */int) ((((/* implicit */_Bool) 632163496U)) || (((/* implicit */_Bool) ((421195028283403655LL) ^ (((/* implicit */long long int) 1901244011U))))))))));
                            var_41 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) min((var_9), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9 + 2] [i_12] [i_12]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_14)) : (3404876672U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -1347310703))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22885))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (arr_17 [i_0] [i_1] [i_2] [9U] [i_1] [i_1])))) / (var_15))))))));
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((short)-4420), (((/* implicit */short) arr_25 [i_0 + 2])))))));
                            var_44 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [13ULL] [i_9 + 1])) ^ (((/* implicit */int) (signed char)-1))))), (max(((~(10940967626462580010ULL))), (max((9804817281919861594ULL), (((/* implicit */unsigned long long int) (unsigned short)47729))))))));
                            var_45 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [10] [i_2] [i_9] [i_13] [i_2])) ? (-1097447018) : (((/* implicit */int) (short)4420))))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_8))))) : (((int) arr_2 [i_0] [i_1]))))), (min((7505776447246971599ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (arr_21 [i_0] [i_1] [i_0] [i_9] [(unsigned short)3] [i_13])))))));
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (max((0ULL), (((((/* implicit */_Bool) 7505776447246971613ULL)) ? (8641926791789690018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned long long int) 2937173005U);
                            var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [11U] [i_9 + 1] [i_0 + 1] [i_0 + 2])) <= (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_9 - 1] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) var_13))))));
                        }
                        var_49 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned short) arr_28 [10LL] [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_9 - 1] [i_9 + 2])), (var_1))));
                        var_50 |= (((!(var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6665307134959165528ULL)))))) : (max((0U), (381130688U))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_51 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 3145728))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (((((-936169165003538832LL) + (9223372036854775807LL))) >> (15ULL)))));
                                var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1717126143U)) ? (((/* implicit */int) var_12)) : (-1097446996)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2877)))))) : (((7505776447246971599ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_16] [i_16])))))))) ? (((/* implicit */long long int) 5)) : ((((!(((/* implicit */_Bool) var_8)))) ? (arr_45 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 632163496U))) ? ((~(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_6))))))) ? (10940967626462580017ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))));
    var_54 += ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_9)))) : (var_15))) - (1ULL)))));
}
