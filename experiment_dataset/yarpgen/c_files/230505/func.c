/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230505
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
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (min((((481283834535851664ULL) + (var_7))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_8);
        var_11 ^= ((/* implicit */short) (~((~(8041041416790843582LL)))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(2147483646U))))));
                var_13 = ((/* implicit */signed char) ((short) (unsigned char)89));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(min((min((((/* implicit */unsigned long long int) 8246337208320LL)), (14014102630122282281ULL))), (((/* implicit */unsigned long long int) (signed char)-96)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_24 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) arr_11 [i_4] [i_7])))), (((/* implicit */int) (short)-9))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) 6984564087560128774LL))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) ((unsigned int) var_0));
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                        arr_29 [i_3] [i_4] [i_8] [i_3] = ((/* implicit */short) var_3);
                    }
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_38 [i_4] [i_4] [i_10] [i_4] [i_12] [(short)12] [i_4] = ((/* implicit */signed char) 18147674855855263024ULL);
                                arr_39 [i_3] [i_3] [i_4] [(unsigned char)20] [(_Bool)1] [(unsigned char)20] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) 463694485U)));
                                var_19 = ((/* implicit */unsigned char) (+(arr_34 [i_4] [i_4] [i_10] [i_10] [i_10])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((unsigned short) var_2));
                        arr_43 [i_3] [i_4] [i_13] [i_13] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) -8041041416790843597LL))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                    {
                        arr_47 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) var_0);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_3 [i_3]))))));
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 144115050636902400ULL))));
                    var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)17))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3])))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_16 = 0; i_16 < 25; i_16 += 2) 
    {
        var_25 ^= ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_16] [i_16]))));
        arr_56 [i_16] = ((/* implicit */unsigned short) (!(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) + (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_51 [i_17] [i_17] [i_17] [i_17]))));
        arr_59 [(short)4] [i_17] = (+(arr_1 [i_17]));
        arr_60 [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_17] [i_17] [i_17] [i_17] [i_17]))));
    }
    var_27 = ((/* implicit */short) var_6);
}
