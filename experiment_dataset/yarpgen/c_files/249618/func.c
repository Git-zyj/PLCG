/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249618
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(1865311553)))), (var_9)));
                    var_16 -= ((/* implicit */int) ((9630196264549528773ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19297)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 8816547809160022842ULL))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [(unsigned char)8] [(unsigned char)8])) / (((((/* implicit */int) (unsigned char)60)) & (((7168) - (((/* implicit */int) arr_2 [(signed char)6])))))))))));
            arr_11 [i_0] [i_3] = ((/* implicit */signed char) (~(max((((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0])) << (((9630196264549528773ULL) - (9630196264549528759ULL))))), (((/* implicit */int) arr_3 [i_0]))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((min((max((10482713291469628866ULL), (((/* implicit */unsigned long long int) 154888696U)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-75)), ((unsigned char)213)))))) <= (((/* implicit */unsigned long long int) ((arr_7 [i_0] [(_Bool)1] [i_0 - 1] [i_0 - 1]) - ((-(((/* implicit */int) (unsigned char)178))))))))))));
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (int i_6 = 3; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(max((var_4), (var_0))))))));
                        arr_20 [i_6 + 1] [i_0] [i_6 + 1] [i_6 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) min((-9LL), (((/* implicit */long long int) (unsigned short)3783))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)24921)), ((-2147483647 - 1))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */unsigned char) max((max((arr_22 [i_7]), (((/* implicit */int) max(((unsigned char)220), ((unsigned char)6)))))), (max((-7178), ((+(((/* implicit */int) arr_6 [i_7] [i_7] [i_7]))))))));
        arr_26 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((arr_0 [i_7]), (((/* implicit */unsigned char) arr_5 [i_7] [i_7])))), ((unsigned char)33)))) / (((/* implicit */int) min((arr_0 [i_7]), ((unsigned char)9))))));
        var_21 = min((((/* implicit */int) max((arr_10 [i_7] [i_7] [i_7]), (((/* implicit */unsigned char) var_7))))), ((~(((((/* implicit */int) var_12)) - (((/* implicit */int) var_11)))))));
    }
    for (short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned char) arr_6 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_37 [i_9] [i_9] [i_9] [i_12] [i_9] [i_9] = ((/* implicit */signed char) (unsigned char)11);
                                arr_38 [i_9] [i_9] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11]))) - (16479721674603643494ULL))), (((/* implicit */unsigned long long int) var_13)))) <= (((((/* implicit */unsigned long long int) -2064984660)) - (8816547809160022842ULL)))));
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_11])) / (((/* implicit */int) arr_17 [i_11] [i_11] [i_9] [i_11]))))) / ((+(max((var_3), (((/* implicit */unsigned long long int) arr_30 [i_11]))))))));
                                arr_39 [i_9] [i_9] [i_9] [i_9] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_9))))), (((/* implicit */unsigned int) arr_17 [i_9] [i_9] [i_10 - 3] [i_9]))));
                            }
                        } 
                    } 
                    arr_40 [i_8] [i_8] [i_9] [i_10 + 1] = ((/* implicit */unsigned char) arr_7 [i_8] [i_9] [i_8] [i_9]);
                    arr_41 [i_8] [i_8] [i_9] [i_9] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) -1987352774)) != (var_8))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (8816547809160022845ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((unsigned short)52429), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) var_11))))))));
}
