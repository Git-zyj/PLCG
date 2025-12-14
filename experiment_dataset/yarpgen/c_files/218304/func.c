/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218304
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
            arr_5 [i_1] = ((/* implicit */int) arr_2 [i_0]);
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_1 [i_0]))) == (((((/* implicit */int) var_0)) | (((/* implicit */int) (_Bool)1))))));
            arr_6 [i_1] [(short)4] = 1163321576;
            var_18 = ((/* implicit */signed char) var_4);
        }
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                arr_11 [i_2] = ((/* implicit */unsigned long long int) var_14);
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)233)) + (((/* implicit */int) (unsigned short)31757)))))))));
                var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) var_14))))));
                arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)143))));
            }
            arr_13 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (1378014121)));
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1163321588)) ? (2LL) : (((/* implicit */long long int) 16))))) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    arr_22 [i_0] [i_4] = ((/* implicit */short) (-(arr_16 [i_2])));
                    arr_23 [i_4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)31789))));
                    arr_24 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) 16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-15LL)));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0])) == (((/* implicit */int) arr_8 [i_0]))));
                        var_23 = ((1163321565) | (((/* implicit */int) (unsigned char)16)));
                    }
                    var_24 = ((/* implicit */signed char) var_6);
                    arr_29 [i_4] [i_2] [i_4] [(unsigned char)15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2834938789741633420LL)) ? (9124390178586639167LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                }
            }
            for (int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_25 = ((/* implicit */_Bool) var_15);
                arr_32 [i_0] [i_2] [i_8] = ((/* implicit */unsigned int) var_3);
            }
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                arr_35 [i_0] [i_2] = ((/* implicit */unsigned char) var_15);
                /* LoopSeq 1 */
                for (unsigned short i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    arr_39 [i_0] [(signed char)13] [i_9] [i_10] = ((/* implicit */int) var_4);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((int) (-(0U)))))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))));
                }
                arr_40 [(unsigned char)6] [i_2] [i_2] [i_9] = ((/* implicit */unsigned long long int) ((((19ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) -4334558793090291156LL))) : (((/* implicit */int) arr_7 [i_2]))));
                var_28 = (~(((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_9])));
            }
            for (int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) -8298117559482236992LL))))))));
                var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_26 [i_0] [i_2] [i_11] [i_11])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (2147483647) : (((/* implicit */int) (signed char)-26)))))));
            }
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) ((short) (+(9720546655916595455ULL))));
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (var_1))))));
            }
        }
        for (long long int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            arr_49 [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_0] [i_13] [i_13])) / (((/* implicit */int) arr_14 [i_13 + 2] [i_13] [i_0] [i_13]))));
            var_33 = ((/* implicit */signed char) ((arr_3 [i_0] [i_13] [i_0]) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)53727)))))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63073)) << (((((arr_15 [(signed char)17] [i_13] [i_13 - 2] [i_13 - 1]) + (669225998))) - (15)))));
            arr_50 [i_13] = ((/* implicit */signed char) var_11);
        }
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            arr_53 [i_0] = ((/* implicit */signed char) arr_19 [i_0] [i_14] [(signed char)10] [9ULL] [7] [i_14]);
            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_14] [(short)7] [i_0]))) == (var_15)));
            var_36 = ((/* implicit */long long int) var_4);
        }
        for (unsigned int i_15 = 2; i_15 < 16; i_15 += 1) 
        {
            var_37 = (-(arr_26 [i_0] [i_15] [i_15] [i_15]));
            /* LoopSeq 3 */
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                arr_59 [i_15] [(_Bool)1] [i_15] [i_15] = ((/* implicit */unsigned char) (-(1946845584)));
                arr_60 [9ULL] [i_15] = var_9;
            }
            for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                arr_63 [(signed char)6] [i_15] [i_15 - 2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-686)) & (1678309801))) >= ((~(var_10)))));
                arr_64 [i_15] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [(signed char)0] [i_15] [i_15] [i_17])) ? (2834938789741633420LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3545)))));
            }
            for (signed char i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                arr_69 [i_15] [i_15 + 1] [i_18] = ((/* implicit */unsigned short) 0U);
                arr_70 [i_15] = ((/* implicit */signed char) arr_19 [i_15 - 1] [i_0] [i_15] [1] [i_15] [i_18]);
                arr_71 [i_15] = ((/* implicit */_Bool) -1563143037);
                var_38 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_15 - 1] [i_15 + 1] [i_18]))));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
    {
        var_39 &= var_11;
        var_40 &= ((/* implicit */unsigned short) arr_67 [i_19] [i_19] [i_19]);
        arr_76 [i_19] = ((/* implicit */signed char) arr_68 [i_19] [i_19] [i_19] [i_19]);
    }
    var_41 -= ((/* implicit */short) (-(min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-2834938789741633410LL))), (((/* implicit */long long int) (unsigned short)45582))))));
}
