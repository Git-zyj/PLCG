/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2654
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)27511));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_11))))) - (((((/* implicit */int) (unsigned char)65)) - (((/* implicit */int) (signed char)50))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_7 [i_1] = ((/* implicit */signed char) max((max((var_14), (((/* implicit */long long int) (signed char)13)))), (((/* implicit */long long int) (short)-23937))));
                arr_8 [i_1] [i_1] [i_2] [3ULL] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (short)-30808)) + (2147483647))) >> (((18446744073709551615ULL) - (18446744073709551611ULL)))))));
            }
        }
    }
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((signed char) min(((short)(-32767 - 1)), ((short)-21545))));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_16 [i_3] [i_4] [i_3 + 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) (_Bool)1)), (4128768U))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)4064)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                arr_19 [i_3] [(signed char)2] [i_4] [i_3] = ((/* implicit */unsigned char) ((3923093060U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)25537)))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_0))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((min((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (short)7652))))), (var_2))) - (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-14202))))))))))));
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (var_6)))));
                    arr_25 [(unsigned short)5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_30 [i_3] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) ((_Bool) var_5));
                            var_22 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((unsigned short) 0ULL))), (max((4294967287U), (((/* implicit */unsigned int) (unsigned short)65510)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) -611367310))) || (((/* implicit */_Bool) (short)-23097)))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)-111))))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_14))))))));
                            arr_31 [i_4] [12] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (var_14))))), (min((var_6), ((+(1042799353U)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) * (max((((/* implicit */unsigned long long int) var_11)), (4711664289457802835ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_2)))))))));
            var_25 += ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_13)), (var_6))), (max((var_2), (((/* implicit */unsigned int) 722951493))))));
        }
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            var_26 = (_Bool)1;
            arr_38 [i_11] = ((/* implicit */short) min(((unsigned short)49949), (((/* implicit */unsigned short) (short)-899))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_14))));
        }
    }
    var_28 = ((/* implicit */short) var_13);
    var_29 = ((/* implicit */unsigned int) max((max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
}
