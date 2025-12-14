/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209239
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_6 [i_1 - 2] [i_2 + 1])) ^ (3467267399U))), (((/* implicit */unsigned int) ((unsigned short) var_9)))));
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (min((((/* implicit */unsigned long long int) (-((~(var_2)))))), (min((arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)0)), (var_9))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]) : (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23895))) % (min((((/* implicit */unsigned int) (signed char)87)), (4232133780U))))))));
                                var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_2), (((/* implicit */int) (unsigned short)33981))))) ? (((/* implicit */unsigned long long int) ((var_2) << (((((-122588326) + (122588342))) - (16)))))) : (((unsigned long long int) -122588331)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -122588315)) : (var_5)))) ? (max((122588325), (-122588306))) : (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((8968764517875042548ULL), (((/* implicit */unsigned long long int) ((long long int) max((-122588337), (((/* implicit */int) var_7))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((((((/* implicit */_Bool) min((122588325), (arr_9 [i_0] [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 1805628346U)) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) min(((~(122588325))), (((/* implicit */int) ((unsigned char) (unsigned short)890)))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (signed char i_8 = 3; i_8 < 7; i_8 += 4) 
                        {
                            {
                                var_16 = ((long long int) -122588333);
                                var_17 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_5)))) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned short)0] [i_4] [i_3]))))) : ((+(-122588315))))));
                                arr_23 [i_0] = ((/* implicit */signed char) (~(-122588326)));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_0] [i_0] = var_3;
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (2349809120U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8203686384925578552LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -122588337)) ? (1945158160U) : (((/* implicit */unsigned int) 122588325))))) : (((long long int) 2349809135U))))) : (((((((/* implicit */_Bool) var_1)) ? (10484511009263493948ULL) : (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) (~(-122588326))))))));
                                arr_36 [i_11 + 1] [i_11 + 2] [(unsigned short)8] [i_10 + 1] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((2349809136U) >= (((/* implicit */unsigned int) -122588332)))))) ? (min((((2349809136U) & (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1945158160U))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)106)), (1945158195U)))) ? (((/* implicit */unsigned int) (+(-122588337)))) : (2851094287U)))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((var_6) - (248666885)))))), (2349809120U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) 122588314);
}
