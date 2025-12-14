/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203944
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
    var_15 = ((/* implicit */unsigned int) ((short) min(((short)-30460), (((/* implicit */short) (_Bool)1)))));
    var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 7609387183022758761LL)) ? (((/* implicit */int) ((short) (short)30447))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) -1928650865);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)29614)) == (min((((((/* implicit */int) (signed char)0)) >> (((var_10) - (3262684830U))))), (((/* implicit */int) (unsigned char)210))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 0ULL))));
                            arr_11 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((2097088) >= (((/* implicit */int) (_Bool)1)))))));
                            var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_0))) ^ (var_0)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_2 - 3] [i_2 - 2] [i_3 + 1] [(_Bool)1])), ((short)14804)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            {
                var_20 &= ((/* implicit */_Bool) (-(min((arr_14 [16]), (((/* implicit */unsigned int) -2041068091))))));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))));
                var_22 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)1134))))) & ((+(7691834994903360707LL)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                            {
                                arr_22 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((9221120237041090560ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) % (((int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30460))) : (-2495238964877945169LL))))));
                                arr_23 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4] = ((/* implicit */short) min((var_7), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (2456910580U))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned short)65535))))))))));
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (9U) : (2273028U))))), ((-(arr_15 [i_4 - 2] [(_Bool)1] [i_4 - 2])))));
                            }
                            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                            {
                                arr_27 [i_4 + 1] [(unsigned short)4] &= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (unsigned short)65535)), (2625000994U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_20 [(unsigned short)16])) : (((/* implicit */int) (signed char)-1)))))));
                                var_24 = -239795680;
                            }
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)18330)) ^ (((/* implicit */int) (signed char)-72))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_11)), ((short)-10642)))))) : (((min((((/* implicit */unsigned long long int) 3844923162U)), (0ULL))) ^ (((/* implicit */unsigned long long int) var_9)))))))));
}
