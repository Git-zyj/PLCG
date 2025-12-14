/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228839
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */short) arr_9 [(unsigned short)17] [i_1] [i_2] [i_3]);
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) -1323557298)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) & (1323557298)));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((long long int) var_0))));
                        var_24 = ((/* implicit */unsigned short) var_6);
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_15 [(short)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1323557299)) ? (((/* implicit */int) (unsigned short)12239)) : (((/* implicit */int) (_Bool)1)))), (1323557300)))) ? ((+(((/* implicit */int) (short)1024)))) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned short) var_4);
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)9] [i_1] [i_2])) ? (4859748129925588106LL) : (((/* implicit */long long int) ((int) 1323557298)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-82)) / (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) var_8)))) : (1323557315))) : (((((/* implicit */_Bool) max((var_3), (var_2)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_18) < (var_18))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [(unsigned char)17] [(signed char)7] [i_2] [i_1] [(short)21] [i_0] = ((/* implicit */_Bool) var_1);
                                arr_23 [(unsigned short)7] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */short) (-((((_Bool)1) ? (arr_17 [i_1]) : (((/* implicit */int) ((unsigned short) var_6)))))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-51)) < ((-(((/* implicit */int) arr_2 [i_0] [(unsigned char)20])))))))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-51)))))));
                                var_29 = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)58493))))));
                            }
                        } 
                    } 
                    var_30 = var_16;
                    var_31 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) <= (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) 
    {
        for (short i_9 = 3; i_9 < 23; i_9 += 2) 
        {
            {
                arr_29 [i_8] [(_Bool)1] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [(_Bool)1] [i_8]))));
                arr_30 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) (short)1738))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (1323557308) : (((/* implicit */int) (unsigned short)448))))) ? (((/* implicit */unsigned long long int) 2329281455U)) : (((((/* implicit */unsigned long long int) var_19)) / (8068612743948074271ULL)))))));
                var_33 += ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_19)) ? (-2057366148) : (((/* implicit */int) arr_27 [i_9] [(signed char)10])))), (((/* implicit */int) (short)1876)))), (((((/* implicit */_Bool) arr_28 [i_8] [i_9 + 1])) ? (((/* implicit */int) arr_28 [i_8] [i_9 + 1])) : (((/* implicit */int) arr_28 [14] [i_9 - 2]))))));
                arr_31 [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_8] [(unsigned char)20])) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_25 [i_8 + 2])) ? (arr_25 [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7680)) < (((/* implicit */int) arr_28 [i_9] [23]))))), (var_5)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            {
                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1876))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)26801), (((/* implicit */short) (signed char)51)))))))), (((/* implicit */unsigned long long int) ((var_19) & (((/* implicit */int) arr_26 [i_12] [i_13])))))));
                            arr_44 [i_10] [(unsigned short)16] [i_11] [i_12] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(unsigned short)13])) ? ((-((-(((/* implicit */int) var_7)))))) : ((~(((((/* implicit */_Bool) (short)-1875)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) arr_2 [i_10] [4U]))))))));
                            var_36 = ((/* implicit */signed char) (+(536870912)));
                        }
                    } 
                } 
            }
        } 
    } 
}
