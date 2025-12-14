/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32876
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
    var_11 |= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)69)) ^ (((/* implicit */int) (signed char)75))));
                                var_12 ^= ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned char)96)), (18301726264600545080ULL))), (((/* implicit */unsigned long long int) (signed char)-69))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23561))) : (-1LL))) : (((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)69)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)40400))))))));
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) 5585925296697251832LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)61))));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max(((unsigned char)237), (((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (signed char)75)))))))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */short) 18301726264600545080ULL);
                arr_17 [i_1] [(unsigned short)4] [i_1] &= min((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)84)))))))), (((((/* implicit */_Bool) arr_3 [(signed char)4] [i_0])) ? (arr_13 [10] [10] [i_0] [i_1] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (-(arr_9 [i_0] [i_0] [(signed char)9])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)0)))) + (2147483647))) >> (((((((/* implicit */_Bool) min(((unsigned char)67), (((/* implicit */unsigned char) var_0))))) ? (((unsigned long long int) (signed char)114)) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_21 [(_Bool)1] [i_6])))))) - (89ULL)))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)-69))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */int) (signed char)90)) ^ (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((+(arr_24 [i_5] [i_5] [i_6] [i_5] [i_6] [i_5]))) ^ (max((arr_24 [0LL] [i_6] [0LL] [8U] [i_5] [8U]), (arr_19 [i_5]))))))));
            }
        } 
    } 
}
