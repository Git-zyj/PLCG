/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53280
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-((+(-1491415367))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 35184372088831ULL))))) : (arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -736222731)) ? ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) -7726182946985049491LL)) && (((/* implicit */_Bool) -1491415367))))) : (((/* implicit */int) (short)10288)))) : (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))))))));
    }
    for (long long int i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1]))))) ? (((/* implicit */int) max((arr_3 [i_1 - 4]), (arr_3 [i_1 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 3])))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) -1491415350)) ? (67043328) : (-10))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)25)) <= (((/* implicit */int) (signed char)(-127 - 1))))))))) <= (((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned char)115)))) : (((/* implicit */int) (!((_Bool)0)))))))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) 0ULL)))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) (+(var_8)));
                            var_22 = ((/* implicit */_Bool) (-(var_8)));
                            var_23 ^= ((/* implicit */unsigned char) var_14);
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((var_12) - (11448018683533807057ULL)))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 4; i_8 < 18; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1491415335)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [i_1 - 2] [i_7] [i_8] [i_9] [i_8 - 2]))))))));
                            arr_28 [i_1] [i_1 - 4] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) (signed char)126)) - (arr_25 [i_8 - 4]));
                            arr_29 [i_3] [i_7] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_7] [i_7] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [(unsigned short)0]))));
                            arr_30 [i_8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)39881))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1256359700U)));
                        }
                    } 
                } 
            } 
            var_25 &= ((/* implicit */_Bool) (((_Bool)1) ? (2564638744U) : (((/* implicit */unsigned int) -1557368156))));
            var_26 = ((/* implicit */unsigned short) 1459731251);
        }
        arr_31 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1] [i_1] [i_1 - 4]))) ? (max((((/* implicit */int) (_Bool)1)), (1744587656))) : ((~(((((/* implicit */int) var_1)) & (((/* implicit */int) arr_16 [i_1])))))));
    }
}
