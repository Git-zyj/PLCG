/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215000
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (arr_0 [i_0])))) | (((/* implicit */int) (!((_Bool)0))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) 1373138509U);
                            var_19 = ((max((arr_6 [i_2] [i_2 - 1] [i_2] [i_1] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))))) % (((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (arr_6 [i_2] [i_2 + 1] [i_2] [i_1] [i_1]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((arr_2 [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (-2147483647 - 1));
                                var_22 = ((/* implicit */unsigned int) var_5);
                                var_23 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (+(1373138509U)));
                                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)255))))) : (min((2921828784U), (((/* implicit */unsigned int) (unsigned short)65535)))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4])))))));
                                var_26 = ((/* implicit */unsigned long long int) arr_2 [8U] [8U]);
                                var_27 = max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) (+(2147483647)))) : ((+(arr_5 [(_Bool)1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) arr_11 [i_9])));
                                var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_6 - 1] [i_10] [i_10])) ? (var_2) : (arr_4 [i_4 - 1] [i_6 - 2] [i_4 - 1] [i_6 - 2]))), (arr_4 [i_4 - 2] [i_6 - 3] [i_10] [i_10])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((+(8878220601011963588ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_4] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-17553))));
                            var_33 = ((/* implicit */signed char) (+(var_15)));
                        }
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(268435455)))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (unsigned char)0))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((short) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                        var_36 = ((/* implicit */unsigned int) arr_11 [i_4]);
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1938925363567776011ULL)) ? (arr_19 [i_4 - 1] [(unsigned char)8] [i_4 - 1] [(unsigned char)8] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        var_38 = ((/* implicit */short) ((unsigned int) var_9));
                    }
                    var_39 &= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_26 [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 2])))), (((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 - 2])) && (((/* implicit */_Bool) 4651678972926284046ULL))))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_7)), (353262271))) << (((((var_10) ? (2234207627640832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (90ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31995))) : (var_15)))) ? (var_4) : ((~(4294967278U))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) (+(var_3)))) : (1408258789U)))));
    var_41 &= ((/* implicit */unsigned short) var_11);
}
