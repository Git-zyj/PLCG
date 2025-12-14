/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211236
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
    var_14 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)7147))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) (unsigned char)251);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2]))));
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(signed char)22]);
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
            {
                arr_14 [i_3] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) var_0));
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_1)))) ? (((364873957U) >> (((var_8) - (798131103U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))));
            }
            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                arr_18 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */short) arr_6 [i_4] [i_1] [i_0] [i_0]);
                var_17 = ((/* implicit */long long int) 2103934805394358585ULL);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((16342809268315193031ULL) <= (((/* implicit */unsigned long long int) arr_17 [i_0])))))));
                var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) >= (5038251662005215192ULL))) ? (((/* implicit */int) arr_1 [(short)19])) : (arr_10 [i_0] [i_1] [i_4])));
            }
            var_20 = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) < (((/* implicit */int) var_12))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : ((-(arr_0 [i_0])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                var_23 = ((/* implicit */signed char) (unsigned char)59);
            }
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) arr_1 [(unsigned short)0]);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_13 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                    arr_28 [i_5] = ((/* implicit */_Bool) 5499896089902447739LL);
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)-15659)))));
                    arr_29 [i_5] [i_7] = ((/* implicit */short) var_2);
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-5499896089902447718LL)))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) ((arr_22 [i_0] [i_0] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [16] [i_5] [i_7] [i_9 - 1]))))))));
                    arr_32 [i_0] [i_0] [i_5] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_30 [i_9] [i_9 - 1] [i_9 - 1]))));
                }
                var_28 += ((/* implicit */short) ((signed char) arr_3 [i_7]));
                arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-12645)) ? (1823422057) : (((/* implicit */int) (short)12614)))));
                arr_34 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_7]))) + (arr_26 [i_5])));
            }
            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
            {
                arr_37 [i_0] [i_0] [i_5] [11ULL] = ((/* implicit */unsigned short) 16342809268315193031ULL);
                arr_38 [i_5] [i_5] [i_10] = ((/* implicit */_Bool) -5499896089902447739LL);
                arr_39 [i_0] [i_5] = ((/* implicit */short) 2103934805394358553ULL);
            }
            arr_40 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [(short)1])) ? (arr_17 [i_0]) : (((/* implicit */long long int) 1505561810U))));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_48 [i_0] [i_0] [i_12] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)58389)) && (((/* implicit */_Bool) arr_13 [i_11] [i_12] [i_13 + 1] [i_13 + 1])))), ((!(((/* implicit */_Bool) arr_13 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                        var_29 = ((/* implicit */signed char) arr_2 [i_11]);
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)15268)), (2ULL)));
                    }
                    arr_49 [i_0] [i_11] [(unsigned short)9] = ((/* implicit */unsigned long long int) 1823422054);
                }
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) (_Bool)1);
}
