/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213719
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (~(var_9))))));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_0), ((short)-19469))))))), (2437320949U)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-9))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)14191))))) : (((/* implicit */int) var_0))))), (((((((/* implicit */_Bool) arr_1 [(unsigned char)2])) || (((/* implicit */_Bool) var_3)))) ? (((var_5) >> (((((/* implicit */int) arr_0 [i_0])) - (59224))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        var_14 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((arr_5 [i_1] [i_1]) & (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 3773301403U))))));
        var_15 = ((/* implicit */unsigned int) ((short) arr_3 [i_1]));
        var_16 = ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 3])) ? (var_1) : (arr_5 [i_1] [i_1 + 1]));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 9114220277231818887LL)) ? (((/* implicit */int) (short)-3820)) : (((/* implicit */int) (unsigned short)14191)))) + (2147483647))) << (((((unsigned long long int) var_3)) - (9054803076455196625ULL)))));
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)195))));
            arr_12 [i_1] = ((/* implicit */signed char) (unsigned short)51620);
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_18 = ((/* implicit */signed char) var_10);
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_5))));
        }
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            arr_19 [i_4] [i_5] = arr_8 [i_4] [i_5];
            /* LoopSeq 2 */
            for (signed char i_6 = 2; i_6 < 16; i_6 += 4) /* same iter space */
            {
                var_20 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) var_7)))));
                arr_23 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_5 + 1])) ? (arr_17 [i_4 - 1]) : (arr_17 [i_4 - 1]))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_20 [i_4] [i_5 - 1] [(short)19])) ^ (((/* implicit */int) (unsigned short)10320)))), (((/* implicit */int) (short)-5443))))) && (((((/* implicit */long long int) ((/* implicit */int) (short)-23407))) >= (0LL)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */_Bool) (short)5461)) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */int) arr_13 [i_6] [i_5 + 1])))))));
                    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [19ULL] [i_5 + 1] [i_6 + 2]))) : (arr_16 [i_4 - 1]))) << (((((((/* implicit */_Bool) (unsigned short)51344)) ? (((/* implicit */int) (unsigned short)14186)) : (((/* implicit */int) var_4)))) - (14161)))));
                    var_24 = ((/* implicit */unsigned short) (+(var_1)));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-61))) ? (((/* implicit */int) min((((unsigned short) (short)18503)), (((/* implicit */unsigned short) (signed char)62))))) : (((/* implicit */int) max((arr_8 [i_6 + 1] [i_5 - 1]), (arr_8 [i_6 + 1] [i_5 - 1]))))));
                        var_26 = ((/* implicit */short) var_3);
                    }
                }
                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_3))) - (max((arr_5 [i_5] [22ULL]), (((/* implicit */unsigned long long int) (short)960))))));
            }
            for (signed char i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), ((unsigned char)72)));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (arr_10 [i_4])));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)248)) - (229)))))) ? (((/* implicit */int) (signed char)-87)) : (((((/* implicit */_Bool) (short)-23407)) ? (((/* implicit */int) (short)-9194)) : (((/* implicit */int) (short)-1))))));
                            arr_39 [i_4] [i_4] [i_5] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (short)27364)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_9 [i_11] [i_5] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_47 [i_5] = ((/* implicit */short) max((var_3), (((arr_9 [i_5] [i_5] [i_9 + 3]) ^ (arr_17 [i_9 + 4])))));
                            arr_48 [i_9] [i_5] = ((/* implicit */signed char) (-((((~(var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_31 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            }
            arr_49 [i_5] = ((/* implicit */short) arr_15 [i_4]);
            var_32 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3)))))));
        }
        arr_50 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))), ((~(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24467)))))))));
    }
}
