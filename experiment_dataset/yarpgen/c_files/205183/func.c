/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205183
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) var_9))))), (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_15))))));
        var_17 = ((/* implicit */unsigned char) max((((int) (-(((/* implicit */int) (unsigned char)211))))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)63177))))))));
        var_18 = ((/* implicit */short) 18446744073709551615ULL);
        var_19 = ((/* implicit */unsigned short) (((+(max((((/* implicit */int) (unsigned short)0)), (var_10))))) + (((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
        var_20 = ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) (short)17035)))), (arr_0 [i_0] [i_0]))), (((/* implicit */int) var_4))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((unsigned short) (!(((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (short)28793)))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)43197))))) : (max((((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) var_0))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_2 [i_2]))))));
        var_23 = (!(((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) arr_5 [10U])), ((-2147483647 - 1)))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) == (1ULL))))) / (((arr_8 [i_2] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((max((arr_14 [i_2]), (((/* implicit */short) var_1)))), (max((((/* implicit */short) ((_Bool) (_Bool)0))), (max((var_6), ((short)103)))))));
                            var_26 = ((/* implicit */unsigned int) arr_12 [i_4]);
                            var_27 |= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (-634453007)))))), ((!(((/* implicit */_Bool) ((unsigned char) arr_19 [i_2] [i_3] [i_3] [i_4] [i_4] [(unsigned short)2] [(short)10])))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) max(((short)-24655), (((/* implicit */short) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_4])) <= (((/* implicit */int) (unsigned short)22338)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_6)))))) : (((((/* implicit */_Bool) -175424199)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1859874707U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5]))))))));
                            var_28 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [(signed char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3]))) : (arr_10 [i_2]))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_3] [i_3]))))) ^ (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_6))))))));
                            var_29 |= ((/* implicit */short) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) arr_16 [(unsigned char)10] [i_3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))));
                            arr_23 [(_Bool)1] [i_3] [2] [i_7] [(_Bool)1] |= ((/* implicit */_Bool) arr_10 [(unsigned char)0]);
                            arr_24 [i_4] [(_Bool)1] [4U] [4U] [i_4] = ((/* implicit */unsigned char) ((short) ((_Bool) ((((/* implicit */_Bool) (short)-16785)) ? (((/* implicit */unsigned int) arr_0 [i_2] [i_2])) : (arr_9 [i_5] [i_4])))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_5] [6] [6] [i_4] [i_8] = ((/* implicit */short) ((min((arr_26 [i_4] [i_5] [i_4] [i_4] [i_3] [i_2]), (((/* implicit */unsigned int) arr_1 [i_8] [i_5])))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)41))) ? (((/* implicit */int) arr_25 [i_2] [i_2])) : (((-634453007) / (((/* implicit */int) var_0)))))))));
                            arr_29 [i_2] [i_4] [i_2] [i_5] [i_4] = ((/* implicit */_Bool) (unsigned short)41290);
                            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_4] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 1009891716)))))))) : (max((((/* implicit */unsigned long long int) (unsigned short)24246)), (0ULL)))));
                        }
                    }
                } 
            } 
        } 
        arr_30 [i_2] = (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_32 [i_2]))) ? (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)8)) == (((/* implicit */int) arr_16 [i_2] [i_9] [i_10]))))))));
                        var_32 = ((/* implicit */signed char) ((unsigned short) ((short) (unsigned char)169)));
                        var_33 -= ((/* implicit */_Bool) arr_8 [i_2] [i_9]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7342)) ? (-634453001) : (((/* implicit */int) (short)-5054))));
                var_35 = arr_7 [(signed char)14];
            }
            arr_40 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
        }
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_36 -= ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_1)))))) == (((/* implicit */int) var_7))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_41 [i_2] [i_13])) : (((/* implicit */int) var_6))))) ? (1459692353) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_9 [i_2] [i_13])))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0))))))));
            var_38 = max((((/* implicit */int) max((arr_20 [i_2] [i_2] [(_Bool)1] [i_13] [i_13]), (((/* implicit */unsigned short) arr_34 [(short)4] [10ULL] [12]))))), (((((/* implicit */int) arr_34 [(short)2] [i_13] [i_13])) | (((/* implicit */int) (short)-10784)))));
            var_39 = ((/* implicit */int) (unsigned char)131);
        }
    }
    var_40 = ((/* implicit */unsigned long long int) var_0);
    var_41 = var_15;
}
