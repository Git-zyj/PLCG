/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244906
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)58022), (((/* implicit */unsigned short) (unsigned char)29))))) ? ((~(10001071035106107425ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) arr_3 [i_1]);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) (unsigned short)11627)))) : (min((((((/* implicit */int) (unsigned char)51)) | (((/* implicit */int) (short)-8903)))), (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1] [i_5 + 1])) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_5 - 1] [i_5] [(short)7] [i_0] [i_5 - 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_19))) + (var_10)))));
                                arr_20 [i_0] [i_1] [(unsigned char)9] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [(short)7] [(short)7] [i_1] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)8902)) : (((/* implicit */int) (short)-8903))));
                                var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-71))));
                                arr_33 [i_9] [(unsigned char)10] [i_9] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (((((/* implicit */long long int) ((/* implicit */int) (short)8902))) + (3874067609481425417LL))))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_7] [16LL]), (arr_23 [5LL] [i_9])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                arr_38 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) min(((short)-23058), (((/* implicit */short) ((((/* implicit */int) arr_32 [i_8] [(_Bool)1] [i_12 + 1] [i_12 + 1] [i_13] [i_13])) <= ((+(((/* implicit */int) arr_23 [(signed char)16] [i_8])))))))));
                                var_25 *= ((/* implicit */signed char) ((unsigned int) (short)30131));
                                arr_39 [i_8] [i_8] = (short)32565;
                                arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_23 [i_8] [i_8]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-8902)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)0)), (var_17)));
                                var_27 *= ((/* implicit */unsigned int) ((int) ((max((((/* implicit */long long int) arr_42 [(signed char)6] [i_7] [i_9] [(unsigned short)16] [i_14] [(signed char)12])), (arr_27 [(unsigned short)10] [i_9] [(unsigned char)14]))) + (((/* implicit */long long int) ((/* implicit */int) (short)30131))))));
                            }
                        } 
                    } 
                    arr_46 [i_8] [i_7] [i_8] [i_9] = ((/* implicit */signed char) arr_28 [i_7] [i_8] [i_9]);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        for (short i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            {
                var_29 = ((/* implicit */long long int) min((((/* implicit */int) (short)-30132)), (((((/* implicit */int) (signed char)97)) % (((((/* implicit */_Bool) 1098814680U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)23628))))))));
                arr_53 [i_16] [3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((short)-30150), (((/* implicit */short) (signed char)-30)))))));
            }
        } 
    } 
}
