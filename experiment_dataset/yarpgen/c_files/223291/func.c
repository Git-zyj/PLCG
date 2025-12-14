/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223291
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 4; i_2 < 7; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_0] &= var_6;
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_13 |= ((/* implicit */short) ((_Bool) min(((unsigned short)120), (((/* implicit */unsigned short) arr_8 [i_1 + 1] [(signed char)0] [i_1 + 1] [i_2 - 4])))));
                        var_14 = ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(arr_7 [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 - 4] [i_2 - 4]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_15 = (((!(min(((_Bool)0), (var_6))))) || (((/* implicit */_Bool) 3992839399U)));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_12 [i_1 + 1] [i_4] [i_5])) | (((/* implicit */int) ((unsigned char) var_11))))), (((/* implicit */int) var_8)))))));
                                var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [8LL] [i_1] [i_2 - 2] [i_4] [i_1 - 1])))) < (3343428596U));
                                arr_15 [6U] = (((+(((/* implicit */int) arr_11 [i_0] [i_1 + 1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                                var_18 = ((/* implicit */unsigned long long int) (short)12724);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                                arr_23 [i_0] [0U] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (min((max((((/* implicit */unsigned int) var_8)), (951538699U))), (arr_20 [i_0] [i_1] [i_2] [i_2 - 2] [i_0] [i_2 - 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                arr_24 [i_0] [i_1] [i_2 + 1] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0])))))))) ? (((((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */int) var_8))))) | (arr_10 [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_2] [i_2 + 2] [i_7]))) : (13060836328275863476ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) var_11)), (var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_25 [i_1 + 1] [(unsigned char)2] [i_2] [i_2 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_0))))));
                                var_19 = ((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_2 + 2]);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65408)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_10] [i_11] [i_12])) & (((/* implicit */int) var_12))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)23654))))), ((-(302127897U)))))) ? (arr_27 [i_1 - 2] [i_1 - 2] [i_11] [i_12]) : (-845324164))))));
                                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) < (((((/* implicit */int) var_2)) % (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)48091)))))) : (((/* implicit */int) ((min((3777530987U), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((5385907745433688140ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
                            }
                        } 
                    } 
                } 
                arr_41 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) max((((unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (var_7)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (var_5)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        arr_45 [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        arr_46 [4] = ((/* implicit */int) ((unsigned char) (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-12724)))))));
    }
}
