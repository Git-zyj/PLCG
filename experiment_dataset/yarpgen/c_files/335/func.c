/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/335
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)30930))))), (var_4)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)30951))) < (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3177))) : (var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 = ((arr_12 [i_0] [i_0] [i_0] [(unsigned short)15] [(unsigned char)13] [i_0]) % (((/* implicit */int) (_Bool)1)));
                            arr_13 [(short)4] [i_3] [i_3] [i_4] [i_2] [i_1] [i_0] = ((arr_2 [13U] [i_1]) ? (((/* implicit */int) arr_2 [6ULL] [i_1])) : (((/* implicit */int) arr_2 [15] [i_3])));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (unsigned short)65535))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_16 [i_5] [i_5] [i_5] [i_0] [i_5] [i_0] = (+(((((/* implicit */int) (unsigned short)65529)) << (((14011618779856705401ULL) - (14011618779856705399ULL))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [9ULL] [i_3] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_3)))) && (((/* implicit */_Bool) (~(arr_11 [i_0] [i_1] [(unsigned short)5] [i_5] [(unsigned short)6]))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < ((~(((/* implicit */int) (_Bool)1)))))))));
                            arr_17 [(unsigned short)8] [i_1] [10U] [i_5] [(unsigned char)4] = ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (min((((((/* implicit */_Bool) 15012032470722389525ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_8 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)672)))))))));
                        }
                        arr_18 [i_0] [(unsigned short)10] [(_Bool)1] = ((/* implicit */unsigned short) (~(min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [1LL] [(_Bool)1]))))));
                    }
                } 
            } 
            arr_19 [i_0] [5U] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) ? ((-(5245112511913762457ULL))) : (var_4)));
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_14 += (((!(((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned short)7)));
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_5) > (var_1))))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6] [i_0] [i_6] [i_0])) ? (arr_12 [10] [i_6] [(unsigned short)5] [i_6] [i_6] [i_6]) : (((/* implicit */int) var_2)))) : (max((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_5 [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_15 &= ((/* implicit */signed char) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((2147483647ULL) != (arr_27 [i_8 - 1] [i_0] [i_7] [i_8] [i_8 - 1] [i_8]))))));
                        arr_31 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_8] [i_8 + 1] [i_8 - 1] [(unsigned char)12]) - (arr_14 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_7])))) ? (arr_11 [i_8] [i_8] [i_8] [i_7] [i_8 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_0))))) <= (min((arr_1 [i_0]), (1U)))))))));
                        arr_32 [i_0] [i_0] [(_Bool)0] [i_7] [i_0] [9ULL] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_0)), (arr_30 [i_8 + 2] [i_7] [i_7] [i_8 + 2]))), (arr_11 [15U] [15U] [15U] [i_7] [i_8 + 3])));
                        arr_33 [i_0] [i_0] [(_Bool)1] [i_7] [6ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_12 [8] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */int) (short)-29292)))))) << (((((/* implicit */int) var_3)) - (57097)))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_9 [16] [(unsigned short)16] [7ULL]))));
                    }
                } 
            } 
        }
        arr_34 [i_0] &= ((/* implicit */unsigned short) (~((~(arr_21 [i_0] [(unsigned char)15])))));
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [6ULL] [i_0] [i_0] [i_0] [i_0])))) ? (15012032470722389525ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [0] [(_Bool)1])) : (((/* implicit */int) var_8)))))))));
    }
    var_18 = var_6;
}
