/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238897
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [8ULL]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_16 *= ((/* implicit */_Bool) var_8);
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 += ((/* implicit */short) (+(arr_1 [i_0 - 1])));
                        arr_11 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_10 [(short)12] [(short)12] [i_2] [(short)12] [i_2]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((arr_9 [i_0 - 2] [i_5 - 2]) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                            var_19 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1] [i_0 - 2] [i_0 - 2] [i_5 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 3) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_3))));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32750)) <= (((/* implicit */int) (short)32755))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [(signed char)6]) << (((arr_2 [(signed char)10]) - (253216108U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)8] [i_7]))) | (arr_7 [i_0] [(short)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                arr_27 [i_0] [i_7] [i_8] = ((/* implicit */signed char) arr_6 [i_0] [i_7] [i_7 + 2] [(unsigned short)14]);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) var_2);
                            var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_21 [i_0]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((var_7) - (((/* implicit */int) arr_3 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_9 [i_11 - 1] [i_0 + 1]))));
                    arr_38 [i_0] = ((/* implicit */unsigned short) ((short) (short)32745));
                }
            }
        }
    }
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((min((((/* implicit */unsigned int) (short)32749)), (2816983979U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) <= (((/* implicit */int) (short)32734)))))))))));
    var_27 = ((/* implicit */signed char) max((min(((((_Bool)1) ? (2816983983U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32730))))), (((/* implicit */unsigned int) ((var_0) | (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_0))));
}
