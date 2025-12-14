/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210584
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_3 - 1] [i_3 - 1] [(signed char)15] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0] [i_2 - 1]))));
                        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)151))));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_5))));
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                var_19 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [12ULL] [12ULL] [i_0]))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_1 + 1] [i_0] [i_0] [i_5] [i_0] = (~((~(((/* implicit */int) var_12)))));
                            var_20 = ((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) : (var_3))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)123)))))));
            }
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) ((short) var_8));
        arr_22 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_13 [i_7] [(short)8] [(unsigned char)16] [i_7 + 2])) == (var_2)))), ((-(((/* implicit */int) arr_13 [i_7] [(unsigned short)12] [(unsigned short)12] [i_7]))))));
        var_23 = ((/* implicit */unsigned int) ((signed char) 4294967295U));
        arr_25 [i_7] = ((/* implicit */int) var_1);
    }
    var_24 = ((/* implicit */int) var_13);
    var_25 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3950545696U)) ? (-1784740271) : (1361031970))))));
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 13; i_8 += 3) 
    {
        for (short i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            {
                var_26 = ((/* implicit */signed char) arr_9 [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_9 - 1] [i_9]);
                var_27 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (~(var_15)))), (max((((/* implicit */unsigned long long int) var_11)), (16679904597467843025ULL))))), (((/* implicit */unsigned long long int) max((var_3), (min((((/* implicit */long long int) var_4)), (arr_4 [i_9 - 1] [i_8] [i_8]))))))));
            }
        } 
    } 
}
