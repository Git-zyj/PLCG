/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234825
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_10 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (arr_2 [i_1])))));
            var_11 += ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0] [(unsigned short)4])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18591))) * (15295574231969540496ULL)))))));
        }
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0])), (arr_5 [i_0] [i_0])))) ? ((+(((/* implicit */int) ((unsigned short) (_Bool)1))))) : (((((/* implicit */int) (unsigned short)65535)) + (-859294716)))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */short) ((unsigned int) 153447290));
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_15 [i_5] [i_5] [i_4 + 2] [i_4 + 2] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27242))) : ((-(arr_5 [i_3 + 3] [i_4 - 1]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_18 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_17 [i_2] [i_2]))))) ? (((/* implicit */long long int) 859294715)) : (min((arr_13 [i_2] [i_2] [i_6] [i_2] [i_2] [i_2]), (((/* implicit */long long int) var_1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)29))))) ? (416414566U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-14659)))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_24 [(unsigned short)10] [(unsigned short)10] [i_2] [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_10 [4LL] [i_6] [10U] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1763326652U))))) : (((/* implicit */int) ((signed char) 269142227597369703ULL))))) > (max((((/* implicit */int) arr_6 [i_2] [i_2])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_8))))))));
                        arr_25 [i_2] [i_2] [i_2] [i_7] [i_8] [i_8] = ((unsigned char) ((unsigned long long int) -304674880));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            arr_34 [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_1 [i_10 + 2])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_32 [i_2] [i_6] [i_9] [i_9] [i_6] [i_2] [i_11]))))), (((/* implicit */long long int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned short)20183)))))));
                            var_15 = ((/* implicit */long long int) (unsigned short)10);
                            var_16 += ((/* implicit */unsigned int) ((long long int) min((1923137595U), (((/* implicit */unsigned int) arr_27 [i_6] [i_9] [i_10 + 3] [i_11])))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_2]), (var_5)))) : (((unsigned long long int) arr_3 [i_6])))) << (((/* implicit */int) (((+(((/* implicit */int) var_6)))) <= ((~(((/* implicit */int) var_3)))))))));
        }
        arr_35 [i_2] [i_2] = ((/* implicit */unsigned short) 3151169841740011119ULL);
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) var_2)))))))))));
    var_19 = ((/* implicit */int) var_7);
}
