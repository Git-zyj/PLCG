/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40131
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) || (((10ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned short)40356)) ? (((/* implicit */int) arr_5 [16U] [16U] [15ULL])) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))))));
                    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((signed char) arr_2 [(_Bool)1]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) == (4664158222605286301ULL)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) (((+(arr_4 [i_1]))) << (((max((max((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)0))))))) - (18446744073709526559ULL)))));
        var_17 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12457))) : (var_4)))), (arr_6 [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_18 = var_8;
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((arr_6 [(short)11] [(short)11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)11] [i_4] [i_4])) ? (arr_3 [i_4]) : (arr_3 [19LL]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_6 [8] [8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))))))))));
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_20 = (-(var_2));
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_2 [i_5])))));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_5])), ((~(min((arr_4 [i_5]), (((/* implicit */unsigned long long int) var_5))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64717)) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)51), (((/* implicit */signed char) arr_20 [i_8] [i_6] [i_6] [i_6]))))) && (((/* implicit */_Bool) arr_17 [i_8] [i_7] [i_6]))))) : (((/* implicit */int) var_3))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_6])))) : (((13781289024025964289ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (short)-1623)), (var_2)))))) : ((~(arr_4 [i_7]))))))));
                    var_25 = ((/* implicit */int) ((min((((_Bool) (signed char)77)), ((!(((/* implicit */_Bool) (unsigned short)4)))))) || (((/* implicit */_Bool) (~((-(var_6))))))));
                    var_26 = ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) arr_2 [i_7])))) : (((/* implicit */int) (signed char)116)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_27 *= ((/* implicit */short) ((unsigned char) arr_20 [i_11] [(unsigned char)3] [i_9] [i_6]));
                        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_9] [i_6]))))), (arr_3 [i_11])));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)64717)) ? (arr_4 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)819))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_25 [16U] [(signed char)10] [(signed char)7] [16U])))));
                            var_30 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)89)) == (((/* implicit */int) arr_8 [i_9] [i_9] [i_11]))))), (var_6))), (((/* implicit */unsigned int) (((+(arr_22 [i_6]))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)98)), (var_8))))))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */_Bool) ((unsigned char) arr_17 [i_12] [i_11] [i_6]))) ? (1915024948U) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_9] [i_12])) * (((/* implicit */int) (unsigned char)204)))) - ((+(((/* implicit */int) arr_25 [4U] [(unsigned char)16] [(unsigned char)16] [i_9])))))))))));
                            var_32 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)17497)) ? (arr_22 [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [(unsigned char)18] [2LL]))))) == (((/* implicit */long long int) arr_7 [i_9] [(signed char)3] [i_11] [i_12])))));
                        }
                        var_33 = ((/* implicit */unsigned int) (unsigned short)30453);
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */signed char) ((short) (_Bool)1));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(1U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39562))))))) : (((((/* implicit */_Bool) ((unsigned short) 10ULL))) ? (((/* implicit */unsigned long long int) arr_22 [i_6])) : (min((((/* implicit */unsigned long long int) (unsigned char)20)), (arr_4 [(signed char)14]))))))))));
    }
}
