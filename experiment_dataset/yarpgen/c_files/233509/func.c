/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233509
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
    var_19 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) | (min((-8868353079057730186LL), (((/* implicit */long long int) var_15)))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) var_10)))))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) var_15)))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((signed char) max((((/* implicit */short) var_5)), (arr_5 [i_2 - 1] [i_1 - 2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) var_16);
                        arr_10 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_3] [9] [i_0] [i_0])) : (((/* implicit */int) var_3))))))));
                        arr_11 [(unsigned char)10] [i_0] [(unsigned char)10] [(unsigned char)16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [10] [i_1 - 1])), (min((var_18), (arr_5 [i_0] [i_2] [i_3])))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) min((((short) 233059133)), (((/* implicit */short) var_13)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_17 [i_0] [(short)17] [10ULL] [(short)17] [i_5] = ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_4])) : (((/* implicit */int) ((unsigned char) -1464857896))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [4U])))) ? (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_1 + 1]))))))));
                            var_24 += ((/* implicit */int) ((((1686856981933073986ULL) << (((arr_13 [i_0]) + (766811043))))) << (((((/* implicit */int) var_2)) + (55)))));
                        }
                        var_25 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] = ((/* implicit */signed char) arr_12 [i_7] [12ULL] [i_1] [3U]);
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) arr_5 [(unsigned short)19] [(unsigned short)19] [(unsigned short)19]))))) | ((((-(((/* implicit */int) arr_5 [i_0] [(unsigned char)14] [10U])))) - (((((/* implicit */int) var_1)) / (arr_13 [i_6])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) var_17);
                    var_28 = arr_12 [(short)4] [i_1] [i_1] [i_2];
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) min((var_29), (((var_12) ? (var_4) : (max((((/* implicit */int) ((unsigned short) var_15))), (((((((/* implicit */int) var_18)) + (2147483647))) >> (((((/* implicit */int) (signed char)-39)) + (50)))))))))));
    var_30 = var_15;
}
