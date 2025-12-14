/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200829
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [(unsigned short)9] [i_1] = ((/* implicit */signed char) arr_1 [i_1] [i_1]);
                    var_15 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)8)))), ((((-(((/* implicit */int) var_14)))) & (((arr_6 [i_0] [5] [i_1] [(short)11]) & (((/* implicit */int) arr_4 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)7317)) ? (((/* implicit */int) (unsigned short)43228)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_12 [i_0 - 1] [i_0 - 1] [i_0] [2ULL] = ((/* implicit */signed char) (_Bool)0);
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [(_Bool)1]))));
                    }
                    var_17 = ((/* implicit */int) var_11);
                    arr_14 [(unsigned char)16] [i_1 + 2] [(short)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16)) ? (4238813575U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
                var_18 = ((/* implicit */short) var_9);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_14)))));
                    arr_18 [i_4] [i_1] [i_0 - 1] [i_4] = ((/* implicit */unsigned short) (unsigned char)0);
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [i_0 - 1] [i_1] [(signed char)18] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            var_20 = ((/* implicit */short) var_3);
                            arr_26 [i_0] [i_1 - 2] [i_1 - 2] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (short)36))))) - (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) - ((+(var_2)))))));
                            arr_27 [i_4] [i_5] [i_4] [i_1] [i_1 + 1] [i_0] [i_4] = ((_Bool) ((((/* implicit */int) (short)479)) == (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned short) var_0));
                            arr_31 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((597424705) | (((/* implicit */int) (unsigned char)162))))) ? (((/* implicit */int) min(((unsigned short)43228), (((/* implicit */unsigned short) (short)27))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_30 [i_4]))))));
                            var_22 = ((/* implicit */int) arr_29 [i_7] [i_7] [i_4] [i_5 - 1] [i_4] [i_5] [i_5]);
                            var_23 = ((/* implicit */_Bool) (~(min((-1371927061912419290LL), (((/* implicit */long long int) arr_2 [i_1 + 1] [i_0 - 1]))))));
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 + 1]) : (((/* implicit */unsigned long long int) max((arr_16 [i_7]), (((/* implicit */long long int) (signed char)91))))))))));
                        }
                        arr_32 [i_4] [i_4] [i_1 - 2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_1] [i_4] [i_5]);
                    }
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)0)), (((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [(unsigned char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_8]))) : (var_13)))))))));
                        arr_37 [i_0 - 1] [i_4] [(short)15] = ((/* implicit */long long int) max((-604496626), ((-((+(((/* implicit */int) var_7))))))));
                        var_26 = ((long long int) max(((~(((/* implicit */int) (unsigned char)230)))), (((/* implicit */int) ((((/* implicit */int) (short)6721)) <= (((/* implicit */int) var_10)))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 3; i_9 < 16; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                {
                    arr_47 [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) arr_39 [i_9] [i_9 + 1]);
                    arr_48 [i_11] [i_10] [i_11] = var_7;
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 3; i_12 < 15; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)125)) ? (1371927061912419292LL) : (-1371927061912419288LL)));
                        var_28 = ((/* implicit */unsigned long long int) var_10);
                    }
                    for (unsigned int i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        arr_53 [i_11] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)106))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(-31040648558079545LL))))));
                    }
                }
            } 
        } 
    } 
}
