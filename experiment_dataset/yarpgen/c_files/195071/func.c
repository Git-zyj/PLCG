/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195071
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (~((+((+(((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_11 [i_2] = ((/* implicit */short) (-(((int) var_0))));
                    arr_12 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1652188378)) ? (((/* implicit */int) (unsigned short)32956)) : (((/* implicit */int) (short)17725))))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (-1757028593) : (((/* implicit */int) var_11)))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((short) var_0)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)))) ? ((~(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (unsigned short)62645))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((short) arr_17 [i_3] [i_5] [i_3]))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            arr_23 [(short)9] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned long long int) (short)5187))) ? (((/* implicit */unsigned int) (+(262143)))) : ((~(1693635030U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */short) (-(((long long int) (+(arr_13 [i_7]))))));
                            arr_29 [i_3] [i_4] [i_7] [i_8] &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3]))))) ? ((+(278308896U))) : (((/* implicit */unsigned int) ((int) arr_19 [i_3] [i_4] [i_4] [i_8]))))));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                            {
                                arr_36 [(short)2] [i_4] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))));
                                arr_37 [i_3] [i_9] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))) ? (((unsigned int) ((unsigned long long int) (short)-21870))) : (((unsigned int) (~(((/* implicit */int) var_6)))))));
                            }
                            var_18 *= ((/* implicit */unsigned long long int) (+((+(((int) arr_8 [i_4]))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((unsigned int) (~(((/* implicit */int) arr_16 [i_4]))))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_10])))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-123)) : (1043471574)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))) ? ((~(((/* implicit */int) (signed char)98)))) : (((/* implicit */int) ((unsigned short) var_8)))))))))));
                            arr_38 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-5188))))));
}
