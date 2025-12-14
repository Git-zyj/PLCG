/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219310
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                            var_17 = ((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (var_14))) | (((unsigned long long int) arr_5 [i_0] [i_2] [i_2] [i_3])));
                            var_18 = ((/* implicit */short) var_5);
                            var_19 = ((/* implicit */long long int) max((var_19), ((-(((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [8])), (-1573562983)))) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_6 [5] [5]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((((-8069418047397081167LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))), (var_15)));
                                var_21 = ((/* implicit */_Bool) var_11);
                                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((~(-1573562983))) != (((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_4 + 1] [i_1] [i_0])) ? (arr_9 [i_0] [i_1] [i_4]) : (arr_16 [i_0] [i_1] [i_0] [i_5] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        {
                            arr_30 [i_10] [i_8] [(unsigned char)4] [i_7] [(short)9] [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7] [i_8] [i_9] [i_10])) & (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) min(((unsigned char)83), (((/* implicit */unsigned char) var_8)))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_5)) > ((~(((long long int) arr_21 [i_7]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (signed char)32);
                            arr_38 [i_7] [i_11] [i_8] [i_7] = ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) var_13)), (arr_28 [i_7] [i_7]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7] [i_8]))))) | (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)-33))) | (((/* implicit */int) var_8)))))));
                            var_25 = ((/* implicit */int) arr_32 [1] [1]);
                            var_26 += ((/* implicit */int) ((_Bool) ((arr_28 [12U] [i_8]) != (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_12])) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) 5635621777109450586LL)) ? (arr_28 [(unsigned char)5] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_35 [i_11] [i_8] [i_11] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_7);
}
