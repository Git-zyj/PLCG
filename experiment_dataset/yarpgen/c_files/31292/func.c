/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31292
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
    var_18 = ((/* implicit */_Bool) min((max((max((var_0), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)112)))))), (((/* implicit */unsigned long long int) var_10))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_17)) != (var_9))) ? (min((((/* implicit */unsigned long long int) var_3)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16272593201161421317ULL))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))), (((/* implicit */unsigned int) var_5))))) : ((+(min((((/* implicit */long long int) (unsigned char)182)), (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 *= ((/* implicit */short) var_12);
            arr_5 [i_0] [i_0] = ((33554416ULL) % (2174150872548130298ULL));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                arr_8 [i_0] [i_2] |= ((/* implicit */unsigned int) ((16272593201161421317ULL) - (var_14)));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7943))) : ((+(var_9)))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)71)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) var_8)))))) : (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
            var_24 = ((/* implicit */short) ((((var_15) == (((/* implicit */int) (unsigned char)189)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((arr_1 [i_3] [i_0]) <= (((/* implicit */unsigned long long int) arr_0 [i_3] [i_0])))), (var_16))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */long long int) ((var_7) % (2147483616)))) : (arr_7 [i_0] [i_0] [i_0] [(unsigned char)3])))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_25 = min((((/* implicit */unsigned long long int) (short)-25522)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_3] [i_0] [i_5] [i_6] [i_0])) : (18446744073709551615ULL))));
                            var_26 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) -2147483616)), (9223372036854775801LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_2 [i_0] [i_0]))))));
                            var_27 = ((/* implicit */signed char) var_11);
                            var_28 = ((unsigned long long int) min((((/* implicit */unsigned long long int) var_16)), (2174150872548130298ULL)));
                            var_29 ^= ((/* implicit */int) arr_6 [i_4]);
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16272593201161421317ULL)) ? (((/* implicit */unsigned long long int) -1993310123)) : (2174150872548130299ULL)))) ? (536870896ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16272593201161421318ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) (short)28511)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)119)))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_7])), (var_8)));
            var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) 536870894ULL)) ? (((/* implicit */long long int) min((arr_11 [i_7] [i_0]), (arr_2 [i_0] [i_0])))) : (max((5425773216304496738LL), (((/* implicit */long long int) (signed char)-88)))))) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_32 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (0)))) ? (6) : (((/* implicit */int) (signed char)0))))));
        /* LoopSeq 4 */
        for (unsigned char i_9 = 4; i_9 < 21; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_33 = ((/* implicit */int) var_6);
                        arr_36 [i_8] [i_9] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_25 [i_10 - 2] [i_9 - 2])) : (((/* implicit */int) arr_31 [i_9] [i_11]))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */int) var_3);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_35 = ((/* implicit */signed char) arr_24 [i_8]);
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_8] [i_12])) > (((/* implicit */int) var_3))))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */int) arr_34 [i_12] [5ULL] [21])) >= (((/* implicit */int) var_1))))))))))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 1) 
        {
            arr_43 [i_8] [i_13 + 1] |= ((/* implicit */short) var_9);
            arr_44 [1LL] [1LL] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_31 [i_13] [i_13])) == (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_37 [i_8] [(unsigned char)18]))))))), (var_11)));
            arr_45 [i_8] = ((/* implicit */_Bool) (signed char)87);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_24 [6LL]))));
            arr_50 [i_8] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((+(var_15))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (arr_38 [i_8]))))));
            arr_51 [10ULL] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((0) - (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        }
        arr_52 [i_8] = arr_49 [i_8] [i_8] [i_8];
        var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 26772770)) ? (((/* implicit */unsigned long long int) -26772771)) : (1410924371674735271ULL)));
    }
}
