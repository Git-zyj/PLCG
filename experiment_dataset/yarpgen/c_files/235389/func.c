/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235389
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
    var_19 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)95)), ((unsigned short)3968)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_5))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * ((~(((/* implicit */int) (short)7346))))));
            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (min((var_12), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [6U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)126))))))), (((/* implicit */unsigned long long int) var_9))));
            arr_6 [i_0] [1] &= ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_1]));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) var_5)) & (var_3))) ^ (((/* implicit */unsigned long long int) min((-54851879), (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))))))))));
            arr_7 [i_0] [i_1] [i_1] &= max((((/* implicit */unsigned short) ((((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) < ((-(((/* implicit */int) (signed char)118))))))), (((unsigned short) arr_5 [i_0] [i_0] [i_0])));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)2] [i_0])) ? (max((3085650099U), (var_0))) : (arr_15 [(unsigned char)11] [8LL] [8LL] [i_0] [8LL] [(unsigned char)5]))))))));
                            arr_18 [i_2] [i_0] [i_0] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_2])));
                            var_24 &= ((/* implicit */unsigned int) ((_Bool) (unsigned short)26));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((var_9) ? (((/* implicit */int) arr_0 [6] [i_5])) : (((/* implicit */int) (signed char)105)))), (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    arr_22 [i_0] [i_2] [7U] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)0)), (2788408365391210364ULL)));
                    var_25 = ((/* implicit */int) (~(14829270378123096072ULL)));
                    var_26 = min(((~(var_0))), (((/* implicit */unsigned int) var_2)));
                    arr_23 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_15 [i_6] [i_6] [i_6] [i_6 + 3] [i_6 + 3] [i_6 + 1]), (((/* implicit */unsigned int) (short)-7346))))) ? (arr_20 [i_0] [i_2] [i_2] [i_6]) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (max((-1205658127), (((/* implicit */int) (unsigned short)6285)))))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_26 [i_0] [(signed char)8] [i_2] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26)) ? (-2147483627) : (((/* implicit */int) (unsigned short)0))));
                    var_27 *= ((/* implicit */unsigned short) (~(((2764961219U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                }
                for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (max((arr_27 [i_8 - 2] [i_8 - 3] [i_8 + 2] [i_8 + 2] [i_8 + 2]), (arr_27 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 2])))));
                    var_29 &= ((/* implicit */_Bool) var_10);
                }
                for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                {
                    var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(12U)))) ? (((/* implicit */unsigned long long int) arr_9 [i_9] [i_2])) : (((((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [7ULL] [i_3] [7ULL])) / (var_6)))))) ? (101860358809911758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                    var_31 = ((/* implicit */unsigned int) ((short) ((2697414345U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 - 1] [i_9 - 1] [i_9 + 2]))))));
                }
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_32 &= ((/* implicit */signed char) -673935567488787325LL);
                arr_35 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_15 [i_2] [(unsigned short)5] [i_0] [i_10] [5] [i_2])) : (((((/* implicit */_Bool) (short)2050)) ? (3935785531162111551LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15439)))))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                var_34 = ((/* implicit */int) var_9);
                var_35 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)18))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                arr_40 [i_0] [i_0] [i_2] [i_2] = var_16;
                arr_41 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_12)))))) ? (((unsigned long long int) ((long long int) var_9))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                var_36 = ((unsigned long long int) ((((/* implicit */_Bool) 139611588448485376ULL)) ? (-1044303719) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_17)))), (((/* implicit */int) (_Bool)0)))))));
                    var_38 = ((/* implicit */long long int) var_2);
                    var_39 = ((/* implicit */signed char) ((unsigned short) min((arr_21 [i_2]), (arr_21 [i_2]))));
                    var_40 *= (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_15)), (var_13)))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_11] [i_2] [i_11] [i_2])) : (((/* implicit */int) var_10))))));
                    var_41 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2]);
                }
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    arr_47 [i_2] = ((/* implicit */unsigned short) (short)-32758);
                    arr_48 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_9)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) + (var_16))) - (12737633108828327485ULL))))));
                    arr_49 [i_0] [i_2] [i_11] [i_13] [11ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) 9928609712030213244ULL))));
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    arr_53 [i_2] = (unsigned short)22871;
                    var_42 *= ((/* implicit */signed char) arr_50 [(unsigned short)11] [i_2] [i_11] [8U] [i_0]);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_43 = ((/* implicit */unsigned long long int) ((unsigned short) var_5));
                    var_44 -= min((min((arr_55 [i_0] [i_2] [5] [i_15]), (var_12))), ((~(arr_55 [i_0] [i_2] [10ULL] [i_15]))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1109200205U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3509767671U))))));
                    arr_57 [i_2] [i_2] [i_11] [i_15] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */int) var_17))))))));
                }
            }
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                arr_60 [i_0] [i_2] [i_2] [i_16] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) 7627317109496282493ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (9U)))))));
                arr_61 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) var_15))))) >> (((/* implicit */int) arr_42 [i_2])))) % (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 1530006076U)))))));
            }
            arr_62 [i_2] = (-(var_16));
            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))) == (var_0))))));
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            arr_67 [i_17] = ((/* implicit */_Bool) (((_Bool)1) ? (1530006076U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
            var_47 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [(short)7] [i_0] [i_17])) - (((/* implicit */int) arr_51 [i_0] [i_17] [i_17] [i_0])))));
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            arr_70 [2ULL] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1530006076U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (6352488215436216992ULL)));
            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((unsigned char) (signed char)30)))));
            var_49 = ((/* implicit */signed char) var_0);
        }
    }
}
