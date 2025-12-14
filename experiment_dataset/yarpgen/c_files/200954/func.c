/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200954
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 34629096)), (268435455ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_2] [(short)4] [(unsigned char)4] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned char) ((arr_5 [i_1] [i_0]) > (arr_5 [i_0] [i_0])))), ((unsigned char)68)));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 18446744073441116141ULL)))) | (((arr_3 [i_4 + 1]) << (((((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (short)12290)) : (((/* implicit */int) (signed char)111)))) - (12282)))))));
                                var_16 = ((/* implicit */_Bool) 4276770240026579096ULL);
                            }
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)31839))))));
                            var_18 = ((/* implicit */unsigned char) max((((arr_9 [i_1] [i_1] [i_1]) ? (((3779530956487395985ULL) ^ (((/* implicit */unsigned long long int) -7613846550061996097LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0]))))))), (max((((/* implicit */unsigned long long int) (signed char)31)), (7384784077250801991ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_9 = 3; i_9 < 17; i_9 += 1) 
                            {
                                arr_29 [i_5] [i_6] [i_7] [i_8] [i_9] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) min((((_Bool) arr_16 [i_8] [i_9])), ((!(((/* implicit */_Bool) 511U)))))))));
                                arr_30 [i_9] [i_7] [i_5] = max(((unsigned char)201), (((/* implicit */unsigned char) (signed char)-93)));
                                var_19 = ((/* implicit */signed char) min((268435440ULL), (((/* implicit */unsigned long long int) ((short) (signed char)100)))));
                                arr_31 [i_9] [i_7] [i_7] [9ULL] [i_7] [i_5 - 1] = ((/* implicit */signed char) ((short) ((_Bool) (_Bool)1)));
                            }
                            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (short)-16578))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 493U)))) : (((((/* implicit */_Bool) -1501256213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25005))) : (486U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) (signed char)0)))));
                            arr_37 [i_5] [i_6 - 1] [i_10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)8)) <= ((~(((/* implicit */int) (_Bool)1))))));
                            var_22 ^= ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)54264))))), (((((/* implicit */long long int) ((arr_16 [i_6 + 1] [i_6 + 1]) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_17 [i_10]))))) - (min((arr_36 [i_11] [i_6] [i_10] [i_10]), (((/* implicit */long long int) 4294966802U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) ((signed char) 405641522548782596ULL))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-35)), ((unsigned short)11271)))) : (((/* implicit */int) (short)32762)))))))));
                            arr_43 [i_13] [i_12] [i_6] [i_5] = ((/* implicit */_Bool) max((((((((/* implicit */int) (short)-14382)) == (((/* implicit */int) (unsigned short)54264)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)11283))))) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [(unsigned char)2])) ? (25165824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_12] [i_5]))))) != (((unsigned long long int) 4294966811U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
