/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53474
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = (-(((/* implicit */int) (signed char)81)));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~((-(arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) arr_0 [i_0])), (-1LL))), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((short) (short)1792)))));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 &= max((((/* implicit */unsigned int) ((_Bool) (unsigned char)255))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_6)) : (var_3))));
        var_19 = ((4294967290U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (min((14572622849732783662ULL), (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 266338304)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (arr_0 [i_3 - 3])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1760599367)) : ((~(1LL))))) : (((/* implicit */long long int) (~(arr_7 [i_2])))))))));
            var_22 = ((/* implicit */unsigned int) var_0);
            var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (max((((1982584391U) ^ (var_14))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_12)) >= (var_0)))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_1)) / (var_12))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(arr_13 [i_2] [i_3] [i_3] [i_5]))))))));
                            arr_19 [i_2] [i_3] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) var_5);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_4] [i_3] [i_4])), (var_12)))) ? (var_9) : (((/* implicit */unsigned long long int) var_3))))) ? (min((((/* implicit */unsigned int) max(((-2147483647 - 1)), (var_2)))), (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32740)))))));
                            arr_20 [i_2] &= ((/* implicit */_Bool) arr_9 [i_5] [i_3 + 1] [i_6]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)110)))))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            arr_23 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)29743))));
            arr_24 [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)81)))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (signed char)-1)))))));
            arr_25 [i_2] |= (signed char)68;
        }
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(max((1872887532U), (((/* implicit */unsigned int) (unsigned char)255)))))))));
    }
    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -1306923616)), (0ULL)));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (-(((4692827154188224349ULL) / (arr_8 [i_8] [i_8]))))))));
        var_30 = -1114085826;
    }
}
