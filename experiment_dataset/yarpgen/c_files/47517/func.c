/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47517
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 += max((((((/* implicit */long long int) ((/* implicit */int) (short)-12172))) | (-7227026196831115065LL))), (min((min((6356685226919349911LL), (-6887968684307887366LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [13LL]))) % (7227026196831115054LL))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)57453)), ((-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) (_Bool)1);
            arr_5 [i_0] [i_1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-21438)))))) : (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (arr_4 [i_0] [i_1] [2])))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)138)) % (((/* implicit */int) (signed char)82)))) != ((+(((/* implicit */int) (unsigned char)219))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2955294884U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) : (-6887968684307887366LL))))));
                            var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1419800346566808939LL))));
                        }
                    } 
                } 
            } 
            var_19 *= ((/* implicit */long long int) ((((-7227026196831115065LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
        var_20 = ((/* implicit */int) ((min((((/* implicit */long long int) (short)17818)), (min((6887968684307887378LL), (-6887968684307887375LL))))) / (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)15910)) : (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */int) arr_11 [i_6] [(unsigned short)4] [i_6] [i_6] [i_6] [i_6])), (arr_8 [0] [i_6 + 1] [i_6]))), (((/* implicit */int) max((arr_1 [i_6]), (((/* implicit */unsigned short) (_Bool)1))))))))));
        arr_18 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_6 - 1] [i_6 + 3]))));
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))) == (arr_3 [i_7] [i_8])));
                arr_26 [i_8] = ((/* implicit */short) arr_24 [i_7] [i_7] [i_8]);
                var_23 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_9 = 4; i_9 < 15; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                            {
                                arr_33 [i_7] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) min((((/* implicit */int) (short)-12145)), (arr_8 [i_7] [i_8] [i_8])))), (max((((/* implicit */long long int) arr_6 [i_9] [i_9] [i_9])), (-1609092353960656413LL)))))));
                                arr_34 [i_9] [i_8] [i_9] [(short)12] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)12254), (((/* implicit */unsigned short) (_Bool)1))))) << ((((+(((/* implicit */int) arr_6 [i_9] [i_9 - 3] [i_9])))) - (34536)))));
                                var_24 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) % (1600205591)));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(min((min((arr_25 [(unsigned short)15] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_12 [i_10] [i_11] [i_11 - 1] [i_9 - 3] [i_11])))))))));
                                arr_35 [i_11] [i_8] [i_7] [i_10] [i_8] [i_11] [i_7] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)12144)) && (((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_11]))))) * (((/* implicit */int) (short)-14696))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)166))))), (min((((/* implicit */unsigned int) (short)32236)), (arr_12 [i_9] [i_9] [i_9] [i_9 - 3] [i_10])))))));
                            }
                            var_26 *= ((/* implicit */_Bool) (+(-2874576297084263488LL)));
                            arr_36 [i_7] [i_7] [i_7] [i_10] &= (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) (short)20769)));
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)62245))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (var_3)));
    var_29 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1280105173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4292))) : (14363468063887403026ULL)));
        arr_40 [i_12] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)132)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)41724)) > (1251499067))))));
    }
}
