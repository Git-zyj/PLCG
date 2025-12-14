/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197937
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4035225266123964416LL))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (short)-8192)), ((-(((/* implicit */int) arr_1 [i_0 - 2] [i_1])))))), ((+(((/* implicit */int) (signed char)-1))))));
                    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) ((3808881606201647709LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))), ((+(3663239630U)))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_9)))));
        var_23 = (short)-32451;
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)-19796)), (((((/* implicit */_Bool) ((signed char) (signed char)-4))) ? ((+(((/* implicit */int) var_17)))) : (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_1 [i_0 - 2] [i_3]))))))));
                    arr_13 [i_3] &= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)122)), ((short)19808)))) + (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (short i_5 = 3; i_5 < 10; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5 + 2] = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) ((unsigned short) var_3))))));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        arr_25 [i_5] [1U] [i_7] [i_6] = (((!(((_Bool) arr_7 [i_8] [i_8] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)140), ((unsigned char)15))))) + (((arr_19 [i_6]) ? (arr_6 [i_5] [i_5 - 2] [i_5 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5])))))))));
                        arr_26 [i_5] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) arr_14 [i_5])) ^ (909561219))))), (max(((-(((/* implicit */int) arr_10 [i_5])))), (((((/* implicit */int) (unsigned char)29)) - (((/* implicit */int) arr_0 [i_8]))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), ((-(((((long long int) arr_9 [i_5])) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5] [3U] [i_7] [i_8])) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) arr_0 [i_8])))))))))));
                    }
                } 
            } 
        } 
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_5] [i_5] [i_5 - 1]))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */int) arr_0 [i_5])) + (((/* implicit */int) arr_18 [3U] [3U] [(unsigned short)1]))))))) ? (((/* implicit */int) var_12)) : (min((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)33))))), (((((/* implicit */_Bool) (short)-80)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_5 - 1]))))))));
        var_27 = ((/* implicit */long long int) ((unsigned long long int) (short)-21270));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((-1089909004050515218LL) + (1089909004050515241LL))))))));
                            arr_41 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) ((signed char) var_12));
                        }
                        arr_42 [(_Bool)1] |= ((/* implicit */unsigned char) arr_31 [i_9] [i_10] [2LL]);
                        var_29 = arr_28 [i_9];
                    }
                } 
            } 
        } 
        arr_43 [i_9] = ((/* implicit */unsigned char) ((((31LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_9] [i_9]))) >= (7965404529604491447LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33)))))));
        arr_44 [i_9] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (909561219) : (((/* implicit */int) arr_32 [7LL] [i_9] [i_9] [i_9])))))));
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_45 [i_14] [i_14 - 1])))))));
        arr_47 [i_14] [i_14] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (short)8848)))));
    }
    var_31 = ((/* implicit */unsigned short) ((_Bool) ((min((var_11), (((/* implicit */unsigned long long int) var_1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))))));
}
