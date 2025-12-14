/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45374
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_12), ((-(var_3)))))) ? (((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned long long int) 406248426U)) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (var_12))))) : (((((/* implicit */_Bool) 12105319057934128662ULL)) ? (6341425015775422953ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_0] [(unsigned char)13] [i_1] = ((/* implicit */short) arr_3 [i_0]);
            arr_8 [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : ((~(((/* implicit */int) var_10))))));
        }
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13023))) : (6341425015775422953ULL))), (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 - 2])) ? (6341425015775422954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2 + 1])))))));
            var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12105319057934128662ULL)) || (((/* implicit */_Bool) var_10)))))) | (((6341425015775422953ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))))));
            var_17 = ((/* implicit */short) (-(6341425015775422953ULL)));
            arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 6341425015775422953ULL)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_18 -= ((/* implicit */long long int) ((var_3) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))))));
            arr_14 [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */long long int) (((+(var_8))) >= (var_8)));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [11U] [i_3] [(short)1])) / (((/* implicit */int) (_Bool)1))));
                        arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */long long int) var_4);
                        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_4] [i_4])) : (0ULL)))));
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                    }
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))));
                    arr_24 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    arr_25 [i_0] [i_0] [i_3] [i_0] [i_5] = ((/* implicit */long long int) (+(134217696U)));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned short i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_3] [i_7] [(unsigned short)15] [i_8 - 2] [i_3] = ((/* implicit */signed char) (-(12105319057934128663ULL)));
                            arr_31 [i_7 + 1] = ((/* implicit */short) (~(134217696U)));
                        }
                    } 
                } 
                var_22 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((((/* implicit */int) (signed char)8)) >> (((var_8) - (14704125417180415837ULL)))))));
            }
            var_23 += ((/* implicit */long long int) arr_17 [i_0]);
        }
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            {
                arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)38762)), (6341425015775422954ULL)))) ? (4822200350272733506LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_34 [i_9]))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            arr_46 [i_9] [i_9] [i_11] [i_12] [i_11] [i_12] = ((/* implicit */signed char) var_5);
                            var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (12105319057934128662ULL)));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */int) (~(max((((/* implicit */long long int) (unsigned short)65535)), (4822200350272733506LL)))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34766))))) : (((/* implicit */int) (unsigned short)65535))));
    var_27 = ((/* implicit */unsigned char) var_12);
}
