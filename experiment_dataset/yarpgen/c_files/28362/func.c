/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28362
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) : (0U)));
                            var_13 = ((/* implicit */long long int) var_8);
                            var_14 = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((var_5) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */int) var_4)) >> (((/* implicit */int) var_9))))));
                            var_15 = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
            var_17 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (unsigned short)20)), (11ULL))));
        }
        arr_25 [i_0] = var_4;
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */int) (unsigned short)16301)) / (((/* implicit */int) (unsigned short)50062)))) : (((/* implicit */int) var_9)))))));
                        arr_36 [i_0] [i_9] [i_10] [i_11] [i_0] [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (2803597130377988307LL)));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), ((~(4098717888U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
    }
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3996642873U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned short)8))));
}
