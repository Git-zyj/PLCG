/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235030
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))), (min(((-2147483647 - 1)), (((/* implicit */int) arr_11 [i_1] [i_3]))))))), (max((min((((/* implicit */unsigned int) arr_8 [i_1] [i_1 - 1])), (0U))), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_0]), (arr_8 [i_3] [i_3]))))))));
                        var_12 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (signed char)-104)), (max((((/* implicit */unsigned int) (signed char)127)), (0U))))), (((/* implicit */unsigned int) (signed char)67))));
                    }
                } 
            } 
        } 
        var_13 -= max(((signed char)0), ((signed char)-16));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_14 = ((/* implicit */short) max((min((max((arr_6 [i_4]), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) min((3960641397U), (((/* implicit */unsigned int) (signed char)127))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((-53412543), (var_5)))), (min((((/* implicit */long long int) 2059934462U)), (arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_4]))))))));
        var_15 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_7), (var_10)))), (max((((/* implicit */unsigned int) var_6)), (334325895U)))))), (min((((/* implicit */long long int) min((334325870U), (((/* implicit */unsigned int) (unsigned short)21228))))), (min((((/* implicit */long long int) var_6)), (arr_9 [i_4] [i_4 + 1] [(signed char)2])))))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_16 = ((/* implicit */int) max((((/* implicit */long long int) max((min((var_6), (((/* implicit */int) arr_17 [i_5] [i_5])))), (max((-1910017322), (53412557)))))), (max((min((((/* implicit */long long int) arr_16 [i_5])), (var_3))), (((/* implicit */long long int) max(((signed char)-30), (arr_17 [i_5] [i_5]))))))));
        var_17 &= ((/* implicit */_Bool) max((((/* implicit */long long int) min((min((-53412544), (((/* implicit */int) (signed char)-5)))), (max((var_10), (934637395)))))), (max((max((var_4), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max((var_7), (53412557))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] [i_7] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) min(((_Bool)1), (arr_22 [i_5] [i_5] [i_5] [6])))), (max((2748016330U), (((/* implicit */unsigned int) (unsigned short)65535)))))), (max((((/* implicit */unsigned int) min((var_5), (802592949)))), (min((arr_21 [i_5] [16]), (((/* implicit */unsigned int) arr_23 [i_5] [i_7] [i_7]))))))));
                    arr_26 [7U] [i_6] [7U] [i_7] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((min((-53412544), ((-2147483647 - 1)))), (min((53412539), (((/* implicit */int) (signed char)31))))))), (min((max((arr_21 [20] [i_7]), (((/* implicit */unsigned int) arr_23 [i_5] [10LL] [i_5])))), (((/* implicit */unsigned int) max(((short)-30671), (((/* implicit */short) (signed char)31)))))))));
                    arr_27 [i_5] [i_5] [10LL] [i_5] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min(((short)19363), ((short)10338)))), (min((var_0), (((/* implicit */long long int) arr_19 [i_5] [i_5] [i_5])))))), (max((max((((/* implicit */long long int) 802592949)), (-8701905597990375981LL))), (max((9LL), (((/* implicit */long long int) var_7))))))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */_Bool) max((max((max((((/* implicit */long long int) var_9)), (-8701905597990375987LL))), (max((-4620358194203948595LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((802592949), (-53412558)))), (min((((/* implicit */unsigned int) (unsigned char)254)), (var_9))))))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        arr_31 [i_8 - 1] = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6490)));
        arr_32 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) min((65024), (max((((/* implicit */int) (_Bool)1)), (802592939)))))), (max((max((((/* implicit */unsigned int) var_6)), (0U))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-61)), (var_6))))))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) 53412542);
                            var_19 = ((/* implicit */short) (unsigned char)254);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) min((max((min((var_8), (802592939))), (((/* implicit */int) max((arr_17 [i_11] [i_13]), (arr_8 [(short)14] [i_10])))))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)2))))));
                            var_21 = max((((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)61)), ((unsigned char)254)))), (min((arr_23 [i_8] [i_8 - 1] [i_8]), (((/* implicit */short) (signed char)-1))))))), (max((max((-53412518), (((/* implicit */int) var_1)))), (max((((/* implicit */int) arr_17 [i_11] [i_11])), (var_10))))));
                        }
                        var_22 = min((max((min((((/* implicit */long long int) (short)32765)), (var_3))), (max((((/* implicit */long long int) (signed char)-62)), (-6676635059728816418LL))))), (min((max((var_3), (var_0))), (((/* implicit */long long int) min(((short)-32760), (((/* implicit */short) (_Bool)1))))))));
                        arr_44 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_10] [i_8 - 1] |= ((/* implicit */signed char) min((max((max((arr_6 [(_Bool)1]), (((/* implicit */unsigned long long int) (unsigned short)30483)))), (((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_22 [5U] [i_9] [i_10] [i_11]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((signed char)-61), ((signed char)60)))), (min((var_5), (arr_16 [i_9]))))))));
                        arr_45 [i_8] [(signed char)5] |= ((/* implicit */short) min((min((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)186)), ((unsigned short)35080)))), (max((arr_3 [i_10]), (((/* implicit */long long int) arr_5 [i_8] [i_9] [i_10 - 1])))))), (((/* implicit */long long int) min((min((arr_41 [i_8] [i_10] [i_8] [i_11] [i_11] [(unsigned char)9] [i_10]), ((signed char)-61))), (max(((signed char)-55), (arr_17 [i_8] [i_8]))))))));
                        arr_46 [i_8] |= ((/* implicit */short) max((min((max((((/* implicit */long long int) 1575369761)), (-8701905597990375979LL))), (min((((/* implicit */long long int) arr_17 [i_8] [i_9])), (var_0))))), (min((min((8701905597990375981LL), (2199023255551LL))), (((/* implicit */long long int) max((2097148), (((/* implicit */int) arr_0 [i_11] [i_9])))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 4; i_14 < 12; i_14 += 2) 
            {
                for (short i_15 = 2; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned short) min((max((min((arr_3 [i_9]), (((/* implicit */long long int) arr_24 [i_14 - 3])))), (((/* implicit */long long int) min((((/* implicit */signed char) arr_0 [i_9] [i_14 - 4])), ((signed char)-56)))))), (max((max((var_4), (var_0))), (max((((/* implicit */long long int) 592401285)), (-8701905597990375981LL)))))));
                        arr_51 [i_8] [i_8 - 1] [(_Bool)1] [i_14 - 1] [i_14 - 1] = ((/* implicit */long long int) max((1610612736U), (((/* implicit */unsigned int) 2147483647))));
                    }
                } 
            } 
            var_24 ^= ((/* implicit */_Bool) max((min((min((arr_35 [i_8 - 1] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_38 [12LL] [i_9] [i_9] [i_8] [i_8] [i_8 - 1])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_8 [3LL] [i_9])), (arr_48 [i_8] [i_8 - 1] [i_8] [i_9])))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned short)35075)), (var_9))), (max((0U), (0U))))))));
            arr_52 [i_8] [i_8] [i_9] = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_41 [i_9] [i_9] [4LL] [i_9] [i_8] [i_9] [5ULL])), (var_9)))), (min((((/* implicit */long long int) var_10)), (var_2))))), (((/* implicit */long long int) max((min((arr_21 [14U] [i_8]), (((/* implicit */unsigned int) (unsigned short)65531)))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_9] [8ULL])), (arr_16 [i_9])))))))));
            var_25 ^= ((/* implicit */signed char) max((max((min((((/* implicit */long long int) 2684354558U)), (var_0))), (max((var_0), (((/* implicit */long long int) arr_4 [i_8] [i_9])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min(((unsigned short)35047), (((/* implicit */unsigned short) arr_11 [i_8] [i_8]))))), (max((arr_1 [i_9]), (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
        }
    }
    var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-32764)), (4294967290U)))), (min((min((var_4), (var_0))), (min((((/* implicit */long long int) var_9)), (var_2)))))));
    var_27 = ((/* implicit */short) max((max((max((8701905597990375986LL), (((/* implicit */long long int) (_Bool)0)))), (max((((/* implicit */long long int) var_9)), (var_2))))), (min((min((var_2), (((/* implicit */long long int) (unsigned char)1)))), (((/* implicit */long long int) max((((/* implicit */int) (short)13981)), (var_5))))))));
    var_28 = max((max((((/* implicit */unsigned int) max((var_10), (var_5)))), (min((((/* implicit */unsigned int) (_Bool)1)), (268419072U))))), (((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned short)35075)), (var_10))), (((/* implicit */int) min((var_1), (var_1))))))));
}
