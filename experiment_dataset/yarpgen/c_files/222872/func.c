/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222872
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            arr_18 [i_4] [7] [8LL] [i_0] [8LL] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_13 [i_0] [i_1 + 2])) % (((/* implicit */int) var_3))))));
                            arr_19 [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) arr_6 [7LL] [i_1]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                var_18 = ((/* implicit */int) (-(((unsigned long long int) var_11))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_13))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((arr_21 [i_0] [i_0] [3ULL] [i_0]) - (((/* implicit */int) var_14))));
            var_22 ^= ((/* implicit */long long int) (((~(-1289492895))) != ((+(var_5)))));
        }
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_9 [i_0])))))) : ((~(4294967277U)))))) ? (arr_2 [i_0] [i_0]) : (((((long long int) var_5)) << (((((((/* implicit */int) arr_23 [i_0] [(unsigned short)4])) | (((/* implicit */int) var_1)))) - (19367)))))));
        arr_26 [i_0] = ((/* implicit */short) var_9);
    }
    var_24 *= var_10;
    var_25 += min((max((var_1), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)51908)) || (((/* implicit */_Bool) 4294967273U))))))), (var_1));
    var_26 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (unsigned short i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                {
                    arr_33 [i_8 + 1] [(_Bool)0] [(signed char)7] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 3; i_10 < 8; i_10 += 4) 
                    {
                        arr_37 [i_7] [i_8] [i_7] [i_10] [i_10] [i_8 + 1] = ((/* implicit */int) var_4);
                        var_28 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-27251)) : (((/* implicit */int) (short)32746))));
                    }
                    for (int i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        arr_41 [i_11] [i_7] [(_Bool)1] [(unsigned short)0] [i_9 + 1] = ((/* implicit */_Bool) ((((long long int) var_4)) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_29 = ((/* implicit */unsigned short) var_11);
                    }
                }
            } 
        } 
    }
}
