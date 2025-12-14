/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192054
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) (((+(((/* implicit */int) var_13)))) & (((((/* implicit */_Bool) 1)) ? (-1) : (2096744698)))));
                    var_15 = ((/* implicit */unsigned long long int) (+(((int) arr_4 [i_1] [i_2]))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_3 [i_0] [i_0]) >= (((/* implicit */long long int) -1)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            arr_14 [i_4] [i_4] = ((/* implicit */short) arr_12 [i_3] [i_4] [i_4]);
            arr_15 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2096744699)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (arr_13 [i_4] [(unsigned char)2] [i_4])));
        }
    }
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned int) 0))) ? ((+(((/* implicit */int) var_6)))) : (0)))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 17; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 3; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5 - 1] [2U] [i_7] [14] |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)46483)))) > (0)));
                            arr_27 [i_5] [i_8] [i_7 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) -209050468))))))) ? (((/* implicit */int) (((-(var_5))) != (((((/* implicit */int) (unsigned short)31744)) / (var_8)))))) : ((((-(var_5))) % ((-(575872778)))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) 2096744698)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_5 - 1] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 442408060U)))))))) : (((/* implicit */unsigned int) (+(2147483647))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_34 [i_5] [i_5] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_19 [4ULL] [i_5 + 1]))))));
                            var_21 = ((/* implicit */short) (~(((2731452) | (2147483647)))));
                            arr_35 [i_5] [i_5] [i_6] [i_6] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(2096744698)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned int i_12 = 3; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((unsigned short) -688452646));
                            var_23 *= var_10;
                        }
                    } 
                } 
            }
        } 
    } 
}
