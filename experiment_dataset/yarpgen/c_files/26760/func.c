/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26760
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (-(255)));
            var_11 -= ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) var_1))))))));
        }
        var_12 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_8)) / (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_3 [i_2] [i_3]), (arr_3 [i_0] [i_2])))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2])))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_5))));
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_2] [i_0]);
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) var_2))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2] [i_2] [i_0]))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0]))))) / (var_6)));
                            var_18 = ((/* implicit */short) var_6);
                        }
                    } 
                } 
                var_19 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [i_4] [i_0])))), ((-(((/* implicit */int) arr_4 [i_4] [i_2] [i_0]))))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_2] [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))) - (var_6)))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
            {
                arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0])))))));
                            var_21 = ((/* implicit */unsigned short) (+(var_0)));
                        }
                    } 
                } 
            }
        }
        for (short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) arr_8 [i_10] [i_0]);
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (arr_23 [i_10] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_6 [i_10] [i_0])))))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_14 [i_0] [i_10] [i_0] [i_10]))))));
        }
        for (short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_11] [i_0] [i_11] [i_0] [i_0] [i_0]))) : (var_0))), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_0] [i_11] [i_11] [i_0] [i_0] [i_0])))))));
            var_25 -= ((/* implicit */unsigned int) min((((((((/* implicit */int) var_3)) + (2147483647))) << (((var_7) - (15769689590134919508ULL))))), (((((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (var_9)))) ^ ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
            arr_32 [i_0] |= ((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [(signed char)2]);
            arr_33 [i_0] = var_2;
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_3))))));
                    arr_40 [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_12])) | (max((((/* implicit */int) arr_38 [i_13] [i_13] [i_13])), (var_4)))));
                    var_28 -= ((min((((/* implicit */unsigned int) arr_8 [i_13] [i_0])), (((((/* implicit */_Bool) var_8)) ? (arr_36 [i_12] [i_12] [i_13]) : (((/* implicit */unsigned int) var_4)))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_13] [i_0])) : (((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) + (13866)))))))));
                }
            } 
        } 
        arr_41 [i_0] = (~(max((var_6), (((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [8ULL])))));
    }
    var_29 = ((/* implicit */int) var_0);
}
